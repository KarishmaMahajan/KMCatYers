//
//  ViewController.h
//  KMCatYears
//
//  Created by Student P_03 on 14/09/16.
//  Copyright © 2016 Karishma Mahajan. All rights reserved.
//

#define kAllElementHeight 60.0
#define KverticalPadding 50.0
#define KHorizontalPadding 20.0
#import<UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>
{
    CGFloat screenWidth;
    CGFloat screenHeight;
    CGFloat textFieldwidth;
    CGFloat buttonWidth;
    CGFloat labelWidth;
    CGFloat buttonYCoordinate;
    CGFloat labelYCoordinate;
    UITextField *myTextField;
    UILabel *myLabel;
}
@end



