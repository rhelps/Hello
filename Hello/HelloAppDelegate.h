//
//  HelloAppDelegate.h
//  Hello
//
//  Created by Richard Helps on 3/26/11.
//  Copyright 2011 BYU. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface HelloAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
