//
//  UserViewModel.m
//  NewsComing
//
//  Created by rong on 2017/11/25.
//  Copyright © 2017年 renbo. All rights reserved.
//

#import "UserViewModel.h"
@implementation UserViewModel
singleM(UserViewModel)

- (instancetype)init
{
    self = [super init];
    if (self) {
        [self initalizeUserGlobal];
    }
    return self;
}

- (void)initalizeUserGlobal{
    UserModel *user = [NSKeyedUnarchiver unarchiveObjectWithFile:kFilePathUserInfo];
    if (user) {
        _globalUser = user;
    }
}


-(void)localize{
    if (!self.globalUser) {
        return;
    }
    [NSKeyedArchiver archiveRootObject:self toFile:kFilePathUserInfo];
}

-(void)loginWithUserName:(NSString *)name Pwd:(NSString *)pwd completeHandler:(completionHandler)completionHandler{
    MJWeakSelf
    [BmobUser loginWithUsernameInBackground:name password:pwd block:^(BmobUser *user, NSError *error) {
        if (!error) {
            [weakSelf localize];
        }
        completionHandler(error);
    }];
}
@end
