//
//  IKCViewController.h
//  ios-knob-control
//
//  Created by Jimmy Dee on 1/30/14.
//  Copyright (c) 2014 Jimmy Dee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KCDViewController : UIViewController

@property IBOutlet UIView* knobControlView;
@property IBOutlet UILabel* positionLabel;
@property IBOutlet UILabel* indexLabelLabel;
@property IBOutlet UILabel* indexLabel;
@property IBOutlet UISegmentedControl* modeControl;
@property IBOutlet UISlider* timeScaleControl;
@property IBOutlet UITextField* positionsTextField;
@property IBOutlet UISwitch* clockwiseSwitch;
@property IBOutlet UISwitch* circularSwitch;
@property IBOutlet UIView* minControlView;
@property IBOutlet UIView* maxControlView;
@property IBOutlet UILabel* minLabel;
@property IBOutlet UILabel* maxLabel;
@property IBOutlet UILabel* minLabelLabel;
@property IBOutlet UILabel* maxLabelLabel;

- (IBAction)modeChanged:(UISegmentedControl*)sender;
- (IBAction)circularChanged:(UISwitch*)sender;
- (IBAction)clockwiseChanged:(UISwitch*)sender;
- (IBAction)scaleChanged:(UISlider*)sender;

@end