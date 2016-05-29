//
//  ViewController.h
//  blocbrowser
//
//  Created by Jordan Carlson on 5/25/16.
//  Copyright © 2016 savagej. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;


@end

