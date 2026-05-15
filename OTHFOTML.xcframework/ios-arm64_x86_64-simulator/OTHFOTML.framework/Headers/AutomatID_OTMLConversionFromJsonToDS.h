//
//  AutomatID_OTMLConversionFromJsonToDS.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 08/01/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLDatasource.h"

@interface AutomatID_OTMLConversionFromJsonToDS : NSObject


+(NSArray*) dsElementsFromJSONString:(NSString*) aJSONstr;
+(NSArray*) dsFromSingleEntryDictionary:(NSDictionary*) aDictionary;

@end
