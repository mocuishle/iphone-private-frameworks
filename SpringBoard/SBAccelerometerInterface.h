/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>

@class NSMutableArray, NSLock;

@interface SBAccelerometerInterface : NSObject {
	NSLock* _lock;
	double _samplingInterval;
	double _topDisplayLastUpdateTime;
	double _topDisplayInterval;
	NSMutableArray* _clients;
}
// inherited: +(void)initialize;
+(id)sharedInstance;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)updateSettings;
-(void)clientRequestedAccelerometerEvents:(unsigned)events updateInterval:(double)interval xThreshold:(float)threshold yThreshold:(float)threshold4 zThreshold:(float)threshold5 auditToken:(XXStruct_kUSYWB*)token;
-(void)_clientInvalidated:(id)invalidated;
-(void)accelerometerDataReceived:(double)received x:(float)x y:(float)y z:(float)z type:(unsigned)type;
@end
