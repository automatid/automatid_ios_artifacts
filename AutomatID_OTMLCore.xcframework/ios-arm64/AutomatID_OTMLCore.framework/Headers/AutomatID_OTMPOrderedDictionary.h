//
//  MPOrderedDictionary.h
//  OTMLFramework
//
//  Created by Enrico on 31/08/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@interface AutomatID_OTMPOrderedDictionary<__covariant KeyType, __covariant ObjectType> : NSMutableDictionary

- (void)insertObject:(ObjectType)anObject forKey:(KeyType)aKey atIndex:(NSUInteger)anIndex;
- (KeyType)keyAtIndex:(NSUInteger)anIndex;
- (ObjectType)objectAtIndex:(NSUInteger)anIndex;
- (NSEnumerator *)reverseKeyEnumerator;
- (NSEnumerator *)reverseObjectEnumerator;
- (BOOL)isEqualToOrderedDictionary:(AutomatID_OTMPOrderedDictionary<KeyType, ObjectType>*)otherDictionary;
- (void)sortUsingComparator:(NSComparator)cmptr;

@end
