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

    NSString * OAuthConsumerKey = @"XumEat7oo4jL3WXsMiGQSTpv8xToOhbC8MjAwx4yRtwL0wjPPE";
    NSString * OAuthConsumerSecret = @"LjbVZ2EAxZMTeIJUaDQ9ccOKESK2L3xDfkXbciRFQ9vsNHW5Gx";
    NSString * OAuthToken = @"jRfYvipYULABMjszlmUrHapsyEYExCmMEU9RhRJg8vurrIByLB";
    NSString * OAuthTokenSecret = @"jbui4BpNsAmTakrBIuBSCEYqMOPriD5p3xdmFSRqC4t86dKfFV";
    
    
    [SLTumblrSDK  sharedSLTumblrSDK].OAuthConsumerKey = OAuthConsumerKey;
    [SLTumblrSDK  sharedSLTumblrSDK].OAuthConsumerSecret = OAuthConsumerSecret;
    [SLTumblrSDK  sharedSLTumblrSDK].OAuthToken = OAuthToken;
    [SLTumblrSDK  sharedSLTumblrSDK].OAuthTokenSecret = OAuthTokenSecret;
    
    
    [SLTumblrSDK sharedSLTumblrSDK].blogName = @"showerli";
    
    
   
    [[SLTumblrSDK sharedSLTumblrSDK]
     
     
     chatPostingWithParameters:@{@"title" : @"你好 ? / 滚犊子 / ? test :", @"conversation" : @"这是什么意思 ?"} callback:^(id result, NSError *error) {
         NSLog(@"%@", result);
     }
     
     ];
    







}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
