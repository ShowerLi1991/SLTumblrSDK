//
//  ViewController.m
//  SLTumblrSDK
//
//  Created by SL🐰鱼子酱 on 15/9/23.
//  Copyright © 2015年 SL🐰鱼子酱. All rights reserved.
//

#import "ViewController.h"
#import "SLTumblrSDK.h"
#import "SLTumblrTools.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    [SLTumblrSDK sharedSLTumblrSDK].OAuthConsumerKey = @"gg6d85qxU4RDbrfejaCCcnijDusAuBdk1xDpiItzZtcxj8V39W";
    [SLTumblrSDK sharedSLTumblrSDK].OAuthConsumerSecret = @"tgaxrUpXflN2My6rb9LbBVEIbQreEbSnXMZe5gawiV7nPdaG9N";
    [SLTumblrSDK sharedSLTumblrSDK].OAuthToken = @"";
    [SLTumblrSDK sharedSLTumblrSDK].OAuthTokenSecret = @"";
    
    [SLTumblrSDK sharedSLTumblrSDK].blogName = @"";
    





}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
