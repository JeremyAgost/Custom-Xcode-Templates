//
//  ___FILENAME___
//  ___PACKAGENAME___
//

//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    NSString * urlString = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"WebLauncherURL"];
    
    if (!urlString.length) {
		// Exit the app
		NSLog(@"Launch URL is missing from bundle info");
        exit(0);
    }
    
    NSURL * url = [NSURL URLWithString:urlString];
    
    double delayInSeconds = 0.25;
    dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
    dispatch_after(popTime, dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0), ^(void){
        NSLog(@"Opening launch URL (%@)", url);
        [[UIApplication sharedApplication] openURL:url];
    });
    
    return YES;
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Exit the app so it is forced to relaunch
    exit(0);
}

@end
