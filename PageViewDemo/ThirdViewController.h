//
//  ThirdViewController.h
//  PageViewDemo
//
//  Created by Sophie Lehar on 3/28/14.
//  Copyright (c) 2014 Appcoda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"
#import "AppDelegate.h"

@interface ThirdViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>

- (IBAction)startWalkthrough:(id)sender;
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;
- (IBAction)message:(id)sender;
@property(nonatomic)int currentPage;

@end
