//
//  SecondViewController.h
//  SimpleAnimation
//
//  Created by Michael Patrick Ellard on 5/28/12.
//  Copyright (c) 2012 Michael Patrick Ellard. All rights reserved.
//
//  This work is licensed under the Creative Commons Attribution 3.0 Unported License. To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/ or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *starImage;

-(IBAction)moveStarAnimated:(id)sender;
-(IBAction)zoomStarAnimated:(id)sender;
-(IBAction)spinStarAnimated:(id)sender;
- (IBAction)fadeStarAnimated:(id)sender;


@end
