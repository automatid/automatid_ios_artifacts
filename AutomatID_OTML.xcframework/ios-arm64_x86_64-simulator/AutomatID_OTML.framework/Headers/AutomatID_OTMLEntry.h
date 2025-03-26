//
//  OTMLEntry.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



@class AutomatID_OTMLLayout;
@class AutomatID_OTMLDatasource;
@class AutomatID_OTMLMapElementModel;
@class AutomatID_OTMLNewCondition;
@class AutomatID_OTMLParameter;
@class AutomatID_OTMLMapEntryModel;
@class AutomatID_OTMLMapModel;

@interface AutomatID_OTMLEntry : NSObject<NSCopying>
{
@private
    BOOL isStartupEnty;
    NSString* entryName;
    NSString* script;
    AutomatID_OTMLLayout* layout;
    NSDictionary* datasources;
    NSDictionary<NSString*, AutomatID_OTMLNewCondition*>* conditions;
    NSDictionary<NSString*, AutomatID_OTMLParameter*>* parameters;
}


@property (nonatomic, assign) BOOL inAnimation;
@property (nonatomic, assign) BOOL ignoreContextAnimation;
@property (nonatomic, assign) BOOL in_animation_fade_previous;
@property (nonatomic, strong) NSString* _Nonnull entryName;

-(nonnull id) initWithModel:(nonnull AutomatID_OTMLMapElementModel*)aModel;

-(nonnull NSString*) getScript;
-(nonnull AutomatID_OTMLLayout*) getLayout;
-(nonnull NSDictionary*) getDatasources;
-(nonnull NSDictionary<NSString*, AutomatID_OTMLNewCondition*>*) getConditions;
-(nonnull NSDictionary<NSString*, AutomatID_OTMLParameter*>*) getParameters;
-(BOOL) showCanGoBack;

-(void) setFrame:(CGRect) aFrame;
-(void) setIsStarttup:(BOOL)aIsStartup;
-(BOOL) getIsStartup;
-(nullable NSString*)valueForCustomEntryAttribute:(nonnull NSString*)aCustomKey;

@end
