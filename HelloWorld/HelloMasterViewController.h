//
//  HelloMasterViewController.h
//  HelloWorld
//
//  Created by wanghua on 13-11-24.
//  Copyright (c) 2013年 wanghua. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloDetailViewController;

@interface HelloMasterViewController : UITableViewController

@property (strong, nonatomic) HelloDetailViewController *detailViewController;

@end
