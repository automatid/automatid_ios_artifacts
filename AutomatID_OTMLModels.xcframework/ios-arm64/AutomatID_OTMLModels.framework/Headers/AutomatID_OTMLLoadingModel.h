#import "AutomatID_OTMLSize.h"
#import "AutomatID_OTMLComponentModel.h"
@class AutomatID_OTMPColor;





@interface AutomatID_OTMLLoadingModel : AutomatID_OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) AutomatID_OTMPColor* color;


@property(nonatomic, assign) AutomatID_OTMLSize native_animation_size;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(AutomatID_OTTBXMLElement*) aEntryElement;
-(void)applyAttributes:(AutomatID_OTTBXMLElement*) aEntryElement;


@end
