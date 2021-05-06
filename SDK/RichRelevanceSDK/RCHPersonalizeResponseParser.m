//
//  Copyright (c) 2016 Rich Relevance Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import "RCHPersonalizeResponseParser.h"
#import "RCHPersonalizeResult.h"
#import "RCHErrors.h"
#import "RCHAPIConstants.h"
#ifdef SWIFT_PACKAGE
#import "Import/NSObject+RCHImport.h"
#else
#import "NSObject+RCHImport.h"
#endif

@implementation RCHPersonalizeResponseParser

- (id)parseResponse:(id)responseObject error:(NSError *__autoreleasing *)error;
{
    RCHPersonalizeResult *result = nil;

    if (responseObject == nil || ![responseObject isKindOfClass:[NSDictionary class]]) {
        NSString *errorMessage = [NSString stringWithFormat:@"Cannot parse response: %@", responseObject];
        if (error != nil) {
            *error = [NSError errorWithDomain:kRCHSDKErrorDomain
                                         code:RCHSDKErrorCodeCannotParseResponse
                                     userInfo:@{NSLocalizedDescriptionKey : errorMessage}];
        }
        return nil;
    }

    result = [RCHPersonalizeResult rch_objectFromDictionary:responseObject];
    result.rawResponse = responseObject;
    result.request = responseObject[NSStringFromSelector(@selector(request))];

    if ([[result.status uppercaseString] isEqualToString:[kRCHAPIResponseKeyStatusError uppercaseString]]) {
        if (error != nil) {
            *error = [NSError errorWithDomain:kRCHSDKErrorDomain
                                         code:RCHSDKErrorCodeAPIError
                                     userInfo:@{NSLocalizedDescriptionKey : result.errormessage}];
        }
    }

    return result;
}

@end
