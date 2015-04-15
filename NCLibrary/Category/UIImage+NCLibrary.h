//
//  UIImage+NCLibrary.h
//  NCLibrary
//
//  Created by nickcheng on 12-11-15.
//  Copyright (c) 2012年 nickcheng.com. All rights reserved.
//

@interface UIImage (NCLibrary)

+ (UIImage *)imageNamedAll:(NSString *)imageName;
+ (NSString *)standardiseFileName:(NSString *)name;

- (UIImage*)resizedImageToSize:(CGSize)dstSize;
- (UIImage*)resizedImageToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale;

- (UIImage *)fixOrientation;

+ (UIImage *)imageFromBase64String:(NSString *)base64String;
- (NSString *)base64String;

- (instancetype)darken:(CGFloat)alpha andBlurRadius:(CGFloat)radius withBlendModeFilterName:(NSString *)blendModeFilterName;
- (instancetype)darken:(CGFloat)alpha andBlurRadius:(CGFloat)radius;
- (instancetype)darkenedAndBlurredImage;

@end
