//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Marcus Spain on 6/14/14.
//  Copyright (c) 2014 Marcus Spain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
