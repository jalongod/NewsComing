//
//  UserViewModel.h
//  NewsComing
//
//  Created by rong on 2017/11/25.
//  Copyright © 2017年 renbo. All rights reserved.
//

#import "BaseViewModel.h"
#import "UserModel.h"
@interface UserViewModel : BaseViewModel
singleH(UserViewModel)
@property(nonatomic,strong)UserModel* globalUser;

-(void)loginWithUserName:(NSString *)name Pwd:(NSString *)pwd completeHandler:(completionHandler)completionHandler;
@end
