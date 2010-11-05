//
//  AppDelegate_iPhone.h
//  haplome
//
//  Created by Todd Treece on 11/2/10.
//  Copyright 2010 Mid Michigan Community College. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BrowserViewController.h"
#import "Picker.h"
#import "TCPServer.h"
@class MainViewController;
@interface AppDelegate_iPhone : NSObject <UIApplicationDelegate, UIActionSheetDelegate, BrowserViewControllerDelegate, TCPServerDelegate,NSStreamDelegate> {
    UIWindow *window;
	Picker*				_picker;
	TCPServer*			_server;
	NSInputStream*		_inStream;
	NSOutputStream*		_outStream;
	BOOL				_inReady;
	BOOL				_outReady;
	MainViewController *mainViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) MainViewController *mainViewController;

@end
