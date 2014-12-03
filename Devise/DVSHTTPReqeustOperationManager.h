//
//  DVSHTTPReqeustOperationManager.h
//  
//  Copyright (c) 2014 Netguru.co. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>
#import "DVSTypedefs.h"

#define DVSNetworkManager [DVSHTTPReqeustOperationManager sharedInstance]

@interface DVSHTTPReqeustOperationManager : AFHTTPRequestOperationManager

+ (instancetype)sharedInstance;

- (void)requestWithPOST:(NSDictionary *)parameters path:(NSString *)path success:(DVSObjectBlock)success failure:(DVSErrorBlock)failure;
- (void)requestWithGET:(NSString *)query path:(NSString *)path success:(DVSObjectBlock)success failure:(DVSErrorBlock)failure;

@end
