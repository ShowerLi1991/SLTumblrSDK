//
//  SLTumblrSDK.h
//  SLTumblrSDK
//
//  Created by SL🐰鱼子酱 on 15/9/23.
//  Copyright © 2015年 SL🐰鱼子酱. All rights reserved.
//

#import <Foundation/Foundation.h>



typedef void (^SLTumblrCallback)(id result, NSError *error);


@interface SLTumblrSDK : NSObject

// 切换用户或者注销设置  name = nil
@property (copy, nonatomic) NSString * blogName;

@property (copy, nonatomic) NSString * OAuthConsumerKey;
@property (copy, nonatomic) NSString * OAuthConsumerSecret;
@property (copy, nonatomic) NSString * OAuthToken;
@property (copy, nonatomic) NSString * OAuthTokenSecret;



+ (instancetype)sharedSLTumblrSDK;



#pragma mark ------------------USER------------------------

- (void)userInfo:(SLTumblrCallback)callback;
- (void)userDashboard:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)userLikes:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)userFollowing:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)userFollowers:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)userQueue:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)userDrafts:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
// 消息
- (void)userSubmissions:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)userPosts:(NSDictionary *)parameters type:(NSString *)type callback:(SLTumblrCallback)callback;

#pragma mark ------------------BLOG------------------------

- (void)blogInfo:(NSString *)blogName callback:(SLTumblrCallback)callback;
- (void)blogPosts:(NSString *)blogName parameters:(NSDictionary *)parameters type:(NSString *)type callback:(SLTumblrCallback)callback;
- (void)blogLikes:(NSString *)blogName parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;

// 返回图片地址, 可选size: 16, 24, 30, 40, 48, 64, 96, 128, 512
- (NSString *)avatarURLStringWithBlogName:(NSString *)blogName size:(NSUInteger)size;
- (void)worldTagged:(NSString *)tag parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;


#pragma mark ------------------Operation------------------------

- (void)follow:(NSString *)blogName callback:(SLTumblrCallback)callback;
- (void)unfollow:(NSString *)blogName callback:(SLTumblrCallback)callback;
- (void)like:(NSString *)postID reblogKey:(NSString *)reblogKey callback:(SLTumblrCallback)callback;
- (void)unlike:(NSString *)postID reblogKey:(NSString *)reblogKey callback:(SLTumblrCallback)callback;

- (void)creatPostWithType:(NSString *)type parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)editPostWithParameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)reblogPostWithParameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)deletePostWithId:(NSString *)postID callback:(SLTumblrCallback)callback;


- (void)text:(NSString *)blogName parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)quote:(NSString *)blogName parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)link:(NSString *)blogName parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)chat:(NSString *)blogName parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)photo:(NSString *)blogName filePathArray:(NSArray *)filePathArrayOrNil contentTypeArray:(NSArray *)contentTypeArrayOrNil fileNameArray:(NSArray *)fileNameArrayOrNil parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)video:(NSString *)blogName filePath:(NSString *)filePathOrNil contentType:(NSString *)contentTypeOrNil fileName:(NSString *)fileNameOrNil parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;
- (void)audio:(NSString *)blogName filePath:(NSString *)filePathOrNil contentType:(NSString *)contentTypeOrNil fileName:(NSString *)fileNameOrNil parameters:(NSDictionary *)parameters callback:(SLTumblrCallback)callback;





@end
