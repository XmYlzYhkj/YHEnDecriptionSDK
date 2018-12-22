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
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFilePath:(NSString *)filePath;

/**
 验证授权文件

 @param filePath 授权文件地址
 @param smKey sm4的key值
 @param iv sm4的iv值
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFilePath:(NSString *)filePath smKey:(NSString *)smKey iv:(NSString *)iv;

/**
 验证授权文件
 
 @param filePath 授权文件地址
 @param smKey sm4的key值
 @param iv sm4的iv值
 @param version 授权的版本
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFilePath:(NSString *)filePath smKey:(NSString *)smKey iv:(NSString *)iv version:(nullable NSString *)version;


/**
 验证授权文件

 @param data 授权文件二进制数据
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFileData:(NSData *)data;


/**
 验证授权文件
 
 @param data 授权文件二进制数据
 @param smKey sm4的key值
 @param iv sm4的iv值
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFileData:(NSData *)data smKey:(NSString *)smKey iv:(NSString *)iv;

/**
 验证授权文件

 @param data 授权文件二进制数据
 @param smKey sm4的key值
 @param iv sm4的iv值
 @param version 授权的版本
 @return 是否验证成功
 */
+(BOOL)verifySMAuthFileData:(NSData *)data smKey:(NSString *)smKey iv:(NSString *)iv version:(nullable NSString *)version;


@end

NS_ASSUME_NONNULL_END
