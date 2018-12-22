//
//  YHEnDecriptionManager.h
//  YHEnDecriptionSDK
//
//  Created by cy on 2018/12/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YHEnDecriptionManager : NSObject

/**
 验证授权文件

 @param filePath 授权文件地址
 @param appId 授权应用编号
 @param appSecret 授权应用密钥
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFilePath:(NSString *)filePath appId:(nullable NSString *)appId appSecret:(nullable NSString *)appSecret;

/**
 验证授权文件

 @param filePath 授权文件地址
 @param appId 授权应用编号
 @param appSecret 授权应用密钥
 @param smKey sm4的key值
 @param iv sm4的iv值
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFilePath:(NSString *)filePath appId:(nullable NSString *)appId appSecret:(nullable NSString *)appSecret smKey:(NSString *)smKey iv:(NSString *)iv;

/**
 验证授权文件
 
 @param filePath 授权文件地址
 @param appId 授权应用编号
 @param appSecret 授权应用密钥
 @param smKey sm4的key值
 @param iv sm4的iv值
 @param version 授权的版本
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFilePath:(NSString *)filePath appId:(nullable NSString *)appId appSecret:(nullable NSString *)appSecret version:(nullable NSString *)version smKey:(NSString *)smKey iv:(NSString *)iv;


/**
 验证授权文件

 @param data 授权文件二进制数据
 @param appId 授权应用编号
 @param appSecret 授权应用密钥
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFileData:(NSData *)data appId:(nullable NSString *)appId appSecret:(nullable NSString *)appSecret;


/**
 验证授权文件
 
 @param data 授权文件二进制数据
 @param appId 授权应用编号
 @param appSecret 授权应用密钥
 @param smKey sm4的key值
 @param iv sm4的iv值
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFileData:(NSData *)data appId:(nullable NSString *)appId appSecret:(nullable NSString *)appSecret smKey:(NSString *)smKey iv:(NSString *)iv;

/**
 验证授权文件

 @param data 授权文件二进制数据
 @param appId 授权应用编号
 @param appSecret 授权应用密钥
 @param version 授权的版本
 @param smKey sm4的key值
 @param iv sm4的iv值
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFileData:(NSData *)data appId:(nullable NSString *)appId appSecret:(nullable NSString *)appSecret version:(nullable NSString *)version smKey:(NSString *)smKey iv:(NSString *)iv;


@end

NS_ASSUME_NONNULL_END
