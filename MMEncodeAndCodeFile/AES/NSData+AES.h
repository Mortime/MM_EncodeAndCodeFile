//
//  NSData+AES.h
//  MM_FESCO
//
//  Created by Mortimey on 16/8/17.
//  Copyright © 2016年 Mortimey. All rights reserved.
//

#import <Foundation/Foundation.h>
@class NSString;

@interface NSData (AES)

- (NSData *)AES256EncryptWithKey:(NSString *)key;   //加密

- (NSData *)AES256DecryptWithKey:(NSString *)key;   //解密

@end
