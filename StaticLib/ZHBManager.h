//
//  ZHBManager.h
//  StaticLib
//
//  Created by zhusanbao on 2016/12/7.
//  Copyright © 2016年 zhusanbao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZHBManager : NSObject

+ (instancetype)shareManager;

- (int)sumWithNum1:(int)num1 num2:(int)num2;

@end
