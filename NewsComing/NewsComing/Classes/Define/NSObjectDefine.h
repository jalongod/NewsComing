//
//  ViewModelDefine.h
//  NewsComing
//
//  Created by rong on 2017/11/25.
//  Copyright © 2017年 renbo. All rights reserved.
//

#ifndef ViewModelDefine_h
#define ViewModelDefine_h

#pragma mark - 单例定义

#define singleH(name) +(instancetype)share##name;

#if __has_feature(objc_arc)

#define singleM(name) static id _instance;\
+(instancetype)allocWithZone:(struct _NSZone *)zone\
{\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instance = [super allocWithZone:zone];\
});\
return _instance;\
}\
\
+(instancetype)share##name\
{\
return [[self alloc]init];\
}
#else
#define singleM static id _instance;\
+(instancetype)allocWithZone:(struct _NSZone *)zone\
{\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instance = [super allocWithZone:zone];\
});\
return _instance;\
}\
\
+(instancetype)shareTools\
{\
return [[self alloc]init];\
}\
-(oneway void)release\
{\
}\
\
-(instancetype)retain\
{\
return _instance;\
}\
\
-(NSUInteger)retainCount\
{\
return MAXFLOAT;\
}
#endif

#pragma mark - checkEmpty

#define CheckStringEmptyOrNull(str) (!str || [str isEqualToString:@"" ])



#pragma mark - model
#define  kName @"kName"
#define  kPwd @"kPwd"


#endif /* ViewModelDefine_h */
