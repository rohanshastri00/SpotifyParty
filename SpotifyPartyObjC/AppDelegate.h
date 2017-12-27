//
//  AppDelegate.h
//  SpotifyPartyObjC
//
//  Created by Rohan Shastri on 12/21/17.
//  Copyright © 2017 Rohan Shastri. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpotifyAuthentication/SpotifyAuthentication.h>
#import <SpotifyAudioPlayback/SpotifyAudioPlayback.h>
#import <SafariServices/SafariServices.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,SPTAudioStreamingDelegate>


@property (strong, nonatomic) UIWindow *window;


@end


