//
//  ValidationErrorButton.h
//  DerivePass
//
//  Created by Indutnyy, Fedor on 1/22/17.
//
//  This software is licensed under the MIT License.
//  Copyright © 2017 Indutny Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ValidationErrorButton : UIButton

- (ValidationErrorButton*)initWithMessage:(NSString*)msg
                  andParentViewController:(UIViewController*)vc;

@end
