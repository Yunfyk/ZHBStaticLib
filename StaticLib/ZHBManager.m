//
//  ZHBManager.m
//  StaticLib
//
//  Created by zhusanbao on 2016/12/7.
//  Copyright © 2016年 zhusanbao. All rights reserved.
//

#import "ZHBManager.h"
#import "ZHBPrivate.h"

static ZHBManager *manager = nil;

@implementation ZHBManager

+ (instancetype)shareManager{

    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[ZHBManager alloc] init];
    });
    return manager;
}

- (int)sumWithNum1:(int)num1 num2:(int)num2{
    return [ZHBPrivate sumWithNum1:num1 num2:num2];
}

@end
