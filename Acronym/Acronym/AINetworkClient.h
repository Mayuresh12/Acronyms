//
//  AINetworkClient.h
//  Acronym
//
//  Created by Mayuresh Rao on 3/13/17.
//  Copyright © 2017 Mayuresh Rao. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>
#import "AIAcronym.h"


typedef void (^ServiceSuccessBlock)(NSURLSessionDataTask *task, AIAcronym *acronym);
typedef void (^ServiceFailureBlock)(NSURLSessionDataTask *task, NSError *error);
@interface AINetworkClient : AFHTTPSessionManager
    /*
     * @discussion
     * @return SingleTon instance of AINetworkClient
     */
+(AINetworkClient *) sharedManager;
    
    /*
     * @discussion - This method makes a GET request to the given URL.
     * @param urlString url string of webservice
     * @parameters Dictionary of parameters to be sent
     * @success Successblock to be called on service success
     * @failure FailureBlock to be called on service failure
     *
     *  *** Sample usage ***
     * GET webservice : http://www.nactem.ac.uk/software/acromine/dictionary.py?sf=usa
     * urlstring : http://www.nactem.ac.uk/software/acromine/dictionary.py?
     * parameters: @{@"sf": @"usa"}
     *
     */
- (void)getResponseForURLString: (NSString *)urlString Parameters:(NSDictionary *) parameters success:(ServiceSuccessBlock) success failure:(ServiceFailureBlock) failure;
@end
