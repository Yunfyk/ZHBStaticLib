//
//  ZHBManager.h
//  StaticLib
//
//  Created by zhusanbao on 2016/12/7.
//  Copyright © 2016年 zhusanbao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZHBManager : NSObject


/**
 单例

 @return 实例
 */
+ (instancetype)shareManager;


/**
 求和

 @param num1 参数1
 @param num2 参数2

 @return 和
 */
- (int)sumWithNum1:(int)num1 num2:(int)num2;

@end
