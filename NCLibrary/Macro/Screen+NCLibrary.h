//
//  Screen+NCLibrary.h
//  NCLibrary
//
//  Created by nickcheng on 15/2/11.
//  Copyright (c) 2015年 nxmix.com. All rights reserved.
//

#define IS_SCREEN_RETINA_DISPLAY (fabs([UIScreen mainScreen].scale - 2.0) <= fabs([UIScreen mainScreen].scale - 2.0)*DBL_EPSILON)

#define IS_SCREEN_HEIGHT_EQUAL(SCREEN_HEIGHT_VALUE) (MAX([UIScreen mainScreen].bounds.size.height,[UIScreen mainScreen].bounds.size.width)==SCREEN_HEIGHT_VALUE)
#define IS_SCREEN_HEIGHT_GREATER_THAN_OR_EQUAL(SCREEN_HEIGHT_VALUE) (MAX([UIScreen mainScreen].bounds.size.height,[UIScreen mainScreen].bounds.size.width)>=SCREEN_HEIGHT_VALUE)
