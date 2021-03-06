/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange> {
    double  _duration;
    unsigned int  _operationState;
    NSDate * _startDate;
}

@property (readonly) double absoluteStart;
@property (readonly) double absoluteStop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (readonly) double executing;
@property (readonly) unsigned int hash;
@property (readonly) unsigned int operationState;
@property (readonly) double queueing;
@property (readonly) double relativeStart;
@property (retain) NSDate *startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (double)absoluteStart;
- (double)absoluteStop;
- (int)compareStartTime:(id)arg1;
- (int)compareStopTime:(id)arg1;
- (id)description;
- (double)duration;
- (double)executing;
- (id)initWithOperationState:(unsigned int)arg1 startDate:(id)arg2 duration:(double)arg3;
- (unsigned int)operationState;
- (double)queueing;
- (double)relativeStart;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
