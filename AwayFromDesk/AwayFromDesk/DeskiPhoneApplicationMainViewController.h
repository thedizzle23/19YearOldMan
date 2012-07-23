//
//  DeskiPhoneApplicationMainViewController.h
//  AwayFromDesk
//
//  Created by Rob DeNicola on 7/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "DeskiPhoneApplicationFlipsideViewController.h"

@interface DeskiPhoneApplicationMainViewController : UIViewController <DeskiPhoneApplicationFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
