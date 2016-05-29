//
//  AwesomeFloatingToolbar.h
//  blocbrowser
//
//  Created by Jordan Carlson on 5/29/16.
//  Copyright © 2016 savagej. All rights reserved.
//

#import <UIKit/UIKit.h>

//hasn't been defined yet because the protocol definition is placed before the interface
//include this line as a promise to the compilier that it will learn what a AwesomeFloatingToolbar is later
@class AwesomeFloatingToolbar;

//this line indicates that the definition of Awesome is beginning
//<NSObject> indicates that this protocol inherits form the NSObject protocol
@protocol AwesomeFloatingToolbarDelegate <NSObject>

//one optional delegate method is declared
//if the delegate implements it, it will be called when a user taps a button
@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;

@end



@interface AwesomeFloatingToolbar : UIView

//a custom initializer to use, which takes an array of four titles as an argument
- (instancetype) initWithFourTitles:(NSArray *)titles;

//a method that enables or disables a button based on the title passed in
- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

//a delegate property to use if a delegate is desired
@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;


@end
