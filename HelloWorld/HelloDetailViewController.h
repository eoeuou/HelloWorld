//
//  HelloDetailViewController.h
//  HelloWorld
//
//  Created by wanghua on 13-11-24.
//  Copyright (c) 2013年 wanghua. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
