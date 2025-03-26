//
//  AutomatID_OTMPAddressbookReader.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 24/07/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <AddressBookUI/AddressBookUI.h>

#import "AutomatID_OTMPAddressbookReaderUtils.h"
#import <AutomatID_OTMLCore/AutomatID_OTMLRestartAppAwareProtocol.h>
#import "AutomatID_OTMPAppUtil.h"

@interface AutomatID_OTMPAddressbookReader : NSObject <AutomatID_OTMLRestartAppAwareProtocol>

+(AutomatID_OTMPAddressbookReader*)getInstance;

- (void)setAndStartAttributeFilters:(NSString*)_filters withNoOptionsField:(NSString*)_noOptionsField withOrderSort:(MPOrderSort)_orderSort withPhoneMinChar:(NSInteger)_phoneMinChar withPhoneMaxChar:(NSInteger)_phoneMaxChar completition:(ABAddressBookRequestAccessCompletionHandler) completion;

- (NSArray*) getContactListDatasource;
-(UIImage*)getPhonebookImageWithID:(NSString*)_contactId;

@property (nonatomic, strong) NSArray * contactList;

@end
