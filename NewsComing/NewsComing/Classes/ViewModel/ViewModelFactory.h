//
//  ViewModelFactory.h
//  NewsComing
//  ViewModel的工厂类
//  Created by rong on 2017/11/28.
//  Copyright © 2017年 renbo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseViewModel.h"
#import "WordViewModel.h"
#import "PicViewModel.h"
#import "UserViewModel.h"
#import "VideoViewModel.h"
#import "HomeViewModel.h"

typedef NS_ENUM(NSUInteger, ViewModelType) {
    ViewModelTypeHome,
    ViewModelTypeVideo,
    ViewModelTypeUser,
    ViewModelTypePic,
    ViewModelTypeWord,
};
@interface ViewModelFactory : NSObject
singleH(ViewModelFactory)

-(BaseViewModel *)getViewModel:(ViewModelType)viewModelType;
@end
