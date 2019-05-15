//
//  KKPayMent.h
//  KKPayHelper
//
//  Created by 尤彬 on 2019/5/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger, KKPayResultStatus) {
    KKPayResultStatusSuccess,//成功
    KKPayResultStatusFailure, //失败
    KKPayResultStatusCancel,//取消
    KKPayResultStatusProcessing,//正在处理中（目前只有阿里支付有用，对应的是正在处理中）
    KKPayResultStatusUnknownCancel,//银联苹果支付，使用该状态判断 支付取消，交易已发起，状态不确定，商户需查询商户后台确认支付状态
    KKPayResultStatusUnInstall//第三方支付app未安装  目前只有微信需要判断，支付宝和银联支持网页支付
};

/**
 支付回调block
 
 @param status 支付结果状态
 @param dict dict
 */
typedef void(^ _Nullable KKPayBlock)(KKPayResultStatus status,NSDictionary *dict);



#pragma mark -
#pragma mark - 支付代理

@protocol KKPayMentDelegate;

@interface KKPayMent : NSObject

@end

/**
 支付代理
 */

@protocol KKPayMentDelegate <NSObject>

@required


@optional


@end




NS_ASSUME_NONNULL_END
