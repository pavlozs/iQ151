//
//  iQ151AppDelegate.h
//  iQ151
//
//  Created by Pavel Duroň on 16.9.12.
//

#import <Cocoa/Cocoa.h>

@interface iQ151AppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
