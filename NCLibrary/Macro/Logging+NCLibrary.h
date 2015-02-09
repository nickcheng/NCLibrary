//
//  Logging+NCLibrary.h
//  NCLibrary
//
//  Created by nickcheng on 14-3-18.
//  Copyright (c) 2014年 nxmix.com. All rights reserved.
//

//  Objective-C
#ifdef __OBJC__

//  debugでしかログを出さない
#ifdef DEBUG
#define __DISPLAY_LOGS__
#endif

#ifdef __DISPLAY_LOGS__
#define NSLogCGAffineTransform(x) NSLog(@"CGAffineTransform : %@", NSStringFromCGAffineTransform(x))
#define NSLogCGPoint(x) NSLog(@"CGPoint : %@", NSStringFromCGPoint(x))
#define NSLogCGRect(x) NSLog(@"CGRect : %@", NSStringFromCGRect(x))
#define NSLogCGSize(x) NSLog(@"CGSize : %@", NSStringFromCGSize(x))
#define NSLogClass(x) NSLog(@"Class : %@", NSStringFromClass(x))
#define NSLogProtocol(x) NSLog(@"Protocol : %@", NSStringFromProtocol(x))
#define NSLogRange(x) NSLog(@"Range : %@", NSStringFromRange(x))
#define NSLogSelector(x) NSLog(@"Selector : %@", NSStringFromSelector(x))
#define NSLogUIEdgeInsets(x) NSLog(@"UIEdgeInsets : %@", NSStringFromUIEdgeInsets(x))
#define MARK NSLog(@"MARK %s", __PRETTY_FUNCTION__);
#define TICK NSDate *startTime = [NSDate date]
#define TOCK NSLog(@"%s Time: %f", __func__, -[startTime timeIntervalSinceNow])

#else
#define NSLogCGAffineTransform(x) ;
#define NSLogCGPoint(x) ;
#define NSLogCGRect(x) ;
#define NSLogCGSize(x) ;
#define NSLogClass(x) ;
#define NSLogProtocol(x) ;
#define NSLogRange(x) ;
#define NSLogSelector(x) ;
#define NSLogUIEdgeInsets(x) ;
#define NSLog(m, args...) ;
#define MARK
#define TICK
#define TOCK
#endif

#endif
