//
//  KKPayManager.h
//  KKPayHelper
//
//  Created by 尤彬 on 2019/5/15.
//

#import <Foundation/Foundation.h>
#import "KKPayMent.h"

NS_ASSUME_NONNULL_BEGIN


@interface KKPayManager : NSObject

/**
 单例对象
 
 @return 单例对象
 */
+ (instancetype)shared;

/**
 是否是开发环境,默认:false正式环境,反之开发环境
 
 @param enable 运行环境标识
 */
- (void)setDebugEnabled:(BOOL)enable;

/**
 处理客户端回调
 
 - (BOOL)application(UIApplication *)application openURL:(NSURL *)url
 
 @param url url
 @return 回调结果
 */
- (BOOL)handleOpenURL:(NSURL *)url;

/**
  处理客户端回调

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
 
 @param url url
 @param application application
 @return 回调结果
 */
- (BOOL)handleOpenURL:(NSURL *)url sourceApplication:(nullable NSString *)application;



//- (BOOL)startUnionPay:(NSString *)tradeNum scheme:(NSString *)scheme viewController:(UIViewController *)vc success:(KKPayBlock)success failure:(KKPayBlock)failure;


@end

NS_ASSUME_NONNULL_END
