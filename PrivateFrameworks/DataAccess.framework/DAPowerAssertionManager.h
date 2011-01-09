/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSCountedSet, NSMutableSet, NSString, NSMutableDictionary;



@interface DAPowerAssertionManager : NSObject 
{
    NSString *_uuid;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    struct __CFDictionary { } *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    void *_timedAssertionRef;
}

+ (id)sharedPowerAssertionManager;
+ (void)vendDaemons:(Class)arg1;

- (void)reattainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)dropPowerAssertionsForGroupIdentifier:(id)arg1;
- (id)stateString;
- (void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2;
- (NSUInteger)powerAssertionRetainCount:(id)arg1;
- (void)releasePowerAssertion:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_retainAssertions;
- (void)_releaseAssertions;

@end