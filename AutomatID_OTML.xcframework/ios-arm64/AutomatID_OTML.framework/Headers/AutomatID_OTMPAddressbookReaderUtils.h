//
//  AutomatID_OTMPAddressbookReaderUtils.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 18/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//
#ifndef EXCLUDE_COCOA_CNCONTACTS
#import <Contacts/Contacts.h>
#endif

#import "AutomatID_OTMPAppUtil.h"

@class AutomatID_OTMLDatasource;
extern NSString* const automatid_phonebook_image_id_string;

@interface AutomatID_OTMPAddressbookReaderUtils : NSObject

+(NSString*) allFiltersString;
+(NSCharacterSet*) getPhoneNumberCharacterSetNotValid;

+(BOOL) phoneIsValid:(NSString*)_phone
    withPhoneMinChar:(NSInteger)_phoneMinChar
     andPhoneMaxChar:(NSInteger)_phoneMaxChar;

+(int)getHasMapFilterFromFilterArray:(NSArray*)_filtersArray;

+(NSArray*)getContactListDatasource:(NSArray*) aContatcs;

#ifndef EXCLUDE_COCOA_CNCONTACTS

+(NSDictionary*) fillAttributeFromRecordRef:(CNContact*)ref
                              withFilterMap:(int)filterMap
                   withImageDimesioneFilter:(NSString*)_imageFilter
                           withPhoneMinChar:(NSInteger)_phoneMinChar
                           withPhoneMaxChar:(NSInteger)_phoneMaxChar;

+(NSString*)createDisplayNameFromCNContact:(CNContact*)_ref;



+ (NSArray<AutomatID_OTMLDatasource*> *)dsElementsFromContactInstance:(CNContact *)cnContacts
                                              filteringKeys:(NSArray *) interestingKeys;

#endif


@end
