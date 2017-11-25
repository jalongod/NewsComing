//
//  VideoViewModel.h
//  MyBaseProject
//
//  Created by 任波 on 15/12/6.
//  Copyright © 2015年 renbo. All rights reserved.
//

#import "BaseViewModel.h"
#import "VideoNetManager.h"

@interface VideoViewModel : BaseViewModel

@property (nonatomic) NSInteger rowNum;
@property (nonatomic) NSInteger page;

- (NSURL *)iconURLForRow:(NSInteger)row;
- (NSString *)titleForRow:(NSInteger)row;
- (NSString *)subtitleForRow:(NSInteger)row;
- (NSString *)timeForRow:(NSInteger)row;

- (NSURL *)videoURLForRow:(NSInteger)row;


@end
