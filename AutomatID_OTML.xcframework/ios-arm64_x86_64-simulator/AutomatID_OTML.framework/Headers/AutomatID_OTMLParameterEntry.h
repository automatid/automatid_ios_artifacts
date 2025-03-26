//
//  AutomatID_OTMLParameterEntry.h
//  OTML
//
//  Created by enrico on 05/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import <AutomatID_OTMLModels/AutomatID_OTMLParameterType.h>

@interface AutomatID_OTMLParameterEntry : NSObject{

}

-(id) initWithKey:(NSString*) aKey andValue:(NSString*) aValue;
-(id) initWithKey:(NSString*) aKey andValue:(NSString*) aValue andType:(AutomatID_OTMLParameterType) aType;

@property (strong, nonatomic, readonly) NSString* key;
@property (strong, nonatomic, readonly) NSString* value;
@property (nonatomic, assign) AutomatID_OTMLParameterType type;

@end
