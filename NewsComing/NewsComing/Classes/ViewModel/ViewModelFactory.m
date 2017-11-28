//
//  BaseViewModelFactory.m
//  NewsComing
//
//  Created by rong on 2017/11/28.
//  Copyright © 2017年 renbo. All rights reserved.
//

#import "ViewModelFactory.h"
@implementation ViewModelFactory
singleM(ViewModelFactory)

-(BaseViewModel *)getViewModel:(ViewModelType)viewModelType{
    switch (viewModelType) {
        case ViewModelTypeWord:
            return [WordViewModel new];
            break;
        case ViewModelTypePic:
            return [PicViewModel new];
            break;
        case ViewModelTypeUser:
            return [UserViewModel new];
            break;
        case ViewModelTypeHome:
            return [HomeViewModel new];
            break;
        case ViewModelTypeVideo:
            return [VideoViewModel new];
            break;
            
        default:
            break;
    }
}
@end
