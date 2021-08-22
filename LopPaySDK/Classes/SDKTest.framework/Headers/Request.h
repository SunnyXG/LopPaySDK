//
//  Request.h
//  SDKTest
//
//  Created by Mr - 宋 on 2021/7/14.
//

#import <Foundation/Foundation.h>
typedef void(^CompletionBlock)(id result);

@interface Request : NSObject
+ (Request *)defaultService;

/**
 *  支付接口
 *
 *  @param order        支付订单信息字串
 *  @param completionBlock 支付结果回调Block
 */
- (void )kpPayfromOrder:(NSDictionary *)order
        callback:(CompletionBlock)completionBlock;

/**
 *  处理鲲鹏app支付后跳回商户app携带的支付结果Url
 *
 *  @param resultUrl        支付宝app返回的支付结果url
 *  @param completionBlock  支付结果回调 为nil时默认使用支付接口的completionBlock
 */
- (void)processOrderWithPaymentResult:(NSURL *)resultUrl
                      standbyCallback:(CompletionBlock)completionBlock;
@end


