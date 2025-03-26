//
//  OTMLRamDataStorage.h
//  OTML_DEV
//
//  Created by Valerio Ferrantelli on 08/03/2019.
//

#import <Foundation/Foundation.h>
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>

@interface AutomatID_OTMLRamDataStorage : NSObject <AutomatID_OTMLRestartAppAwareProtocol>


+(AutomatID_OTMLRamDataStorage*)getInstance;
-(void)setValue:(NSString*)aValue forKey:(NSString*)aKey withDictionaryName:(NSString*)aName;
-(void)resetDictionaryWithName:(NSString*)aName;
-(void)deleteValueForKey:(NSString*)aKey withDictionaryName:(NSString*)aName;
-(NSString*)valueForKey:(NSString*)aKey withDictionaryName:(NSString*)aName;
-(NSDictionary*)dictionaryWithName:(NSString*)aName;
-(void)setDictionary:(NSDictionary*)aDic withName:(NSString*)aName;

@end

