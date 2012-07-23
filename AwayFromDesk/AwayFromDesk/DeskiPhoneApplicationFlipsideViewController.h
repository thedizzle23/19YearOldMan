//
//  DeskiPhoneApplicationFlipsideViewController.h
//  AwayFromDesk
//
//  Created by Rob DeNicola on 7/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DeskiPhoneApplicationFlipsideViewController;

@protocol DeskiPhoneApplicationFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(DeskiPhoneApplicationFlipsideViewController *)controller;
@end

@interface DeskiPhoneApplicationFlipsideViewController : UIViewController

@property (weak, nonatomic) id <DeskiPhoneApplicationFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
