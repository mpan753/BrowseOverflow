//
//  DetailViewController.h
//  BrowseOverflow
//
//  Created by Mia on 11/18/16.
//  Copyright © 2016 XLab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

