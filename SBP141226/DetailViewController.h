//
//  DetailViewController.h
//  SBP141226
//
//  Created by Vy Phan on 1/15/15.
//  Copyright (c) 2015 Vy Phan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

