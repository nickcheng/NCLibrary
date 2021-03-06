//
//  NSDictionary+NCLibrary.m
//  NCLibrary
//
//  Created by nickcheng on 13-8-21.
//  Copyright (c) 2013年 nx. All rights reserved.
//

#import "NSDictionary+NCLibrary.h"
#import "Logging+NCLibrary.h"

@implementation NSDictionary (NCLibrary)

- (NSString *)jsonString {
  NSError *error = nil;
  NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self options:NSJSONWritingPrettyPrinted error:&error];
  if (error != nil) {
    NCLogError(@"Convert dictionary to JSONString failed! Array:%@ Error:%@", self, error);
    return nil;
  }
  
  NSString *jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
  return jsonString;
}

@end
