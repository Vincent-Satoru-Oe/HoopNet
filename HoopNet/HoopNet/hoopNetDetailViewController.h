//
//  hoopNetDetailViewController.h
//  HoopNet
//
//  Created by Vincent Oe on 4/9/14.
//  Copyright (c) 2014 Base. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface hoopNetDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
