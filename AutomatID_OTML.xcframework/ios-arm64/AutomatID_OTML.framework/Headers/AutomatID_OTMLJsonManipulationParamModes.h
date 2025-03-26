//
//  AutomatID_OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "AutomatID_OTMLParamModeAbstractStrategy.h"


@interface AutomatID_OTMLJsonManipulationParamModes : AutomatID_OTMLParamModeStrategyGroup
@end

@interface AutomatID_OTMLJsonObjectSerializationParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface AutomatID_OTMLJsonArraySerializationParamMode : AutomatID_OTMLParamModeStrategy
@end

@interface AutomatID_OTMLJsonPathParamMode : AutomatID_OTMLParamModeStrategy

+(NSString*)getValueFromJson:(NSString*)jsonString withPath:(NSString*)path;

+(NSString*)createJsonStringFromDictionary:(id) jsonObj;

@end

@interface AutomatID_OTMLJsonObjectDSSerializationParamMode : AutomatID_OTMLParamModeStrategy
@end
