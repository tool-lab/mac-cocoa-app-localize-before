//
//  LocalizeSampleAppDelegate.h
//  LocalizeSample
//
//  Created by Tool Labs on 2013/04/14.
//  Copyright 2013 Tool Labs.
//

#import <Cocoa/Cocoa.h>

@interface LocalizeSampleAppDelegate : NSObject <NSApplicationDelegate>
{
    IBOutlet NSTextField *messageString;
}

@property (assign) IBOutlet NSWindow *window;

@end
