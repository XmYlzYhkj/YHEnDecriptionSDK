//
//  YHSecKeyWrapper.h
//  YiKaTongAPP
//
//  Created by YLZ-MAC on 15-1-6.
//  Copyright (c) 2015年 YLZ-MAC. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kPublicKeyName @"com.yh.ryt.publicCiper"

#define kPublicKey  @"MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCVm97c9C0SpJxbHCpf2L6rpB9qZKOMe1cSfIaRw79XyrMe9dnA4NfvdV/vmtiGDWijxm1LgUeHbJ2XHiNdxCHbr6WB30K/SYD70nAtgoGczt+i4NPQP7SzWLg2vZEcOLAGF3lVOe8d3yxKf/L89n/ye4OQFzjk23HOGhcKdrTeMQIDAQAB"

#define AES_IV @"0102030405060708"

#define AES_ENCODE_TYPE_BESE64 @"bese64"
#define AES_ENCODE_TYPE_HEX @"hex"


#define kChosenDigestLength        CC_SHA1_DIGEST_LENGTH

// Global constants for padding schemes.
#define kPKCS1                   11
#define kTypeOfPwdPadding        kSecPaddingNone
#define kTypeOfWrapPadding       kSecPaddingPKCS1
#define kTypeOfSigPadding        kSecPaddingPKCS1SHA1
#define kMaxBlockSize            117


@interface YHSecKeyWrapper : NSObject

/*
 * RSA 加密
 * content 待加密字符
 * return 加密后的字符串
 */
+ (NSString *)encryptUseRSA:(NSString *)content;

+ (NSString *)encryptUseRSA:(NSString *)content publicKey:(NSString *)publicKeyString;

+ (NSString *)encryptUseRSA:(NSString *)content publicKey:(NSString *)publicKeyString secPadding:(SecPadding)secPadding;

/*
 * RSA 数字签名验证
 * content 待签名字符串
 * sig 待验证的签名字符串
 * return yes签名正确
 */
+ (BOOL)verifySignatureWithString:(NSString *)content signature:(NSString *)sig;


+ (BOOL)verifySignatureWithString:(NSString *)content signature:(NSString *)sig publicKey:(NSString *)publicKeyStr;
/*
 * md5加密
 * content 待加密字符
 * return 加密后的字符串
 */
+(NSString *) md5: (NSString *) content ;


/*
 * AES 加密
 * content 待加密字符
 * symmetricKey    对称密钥 前16位有效
 * return 加密后的字符串
 */
+ (NSString *)encryptUseAES:(NSString *)content withKey:(NSString *)key withIv:(NSString *)iv withEncodeType:(NSString *)encode;

/*
 * AES 解密
 * encryptedString 待解密字符
 * symmetricKey    对称密钥 前16位有效
 * return 解密后的Data
 */
+ (NSData *)dataWithDecryptAESWrap:(NSString *)encryptedString withKey:(NSString *)key withIv:(NSString *)iv withEncodeType:(NSString *)encode;

+ (NSString *)decryptAESWrap:(NSString *)encryptedString withKey:(NSString *)key withIv:(NSString *)iv withEncodeType:(NSString *)encode;


+ (YHSecKeyWrapper *)sharedWrapper;

@end

