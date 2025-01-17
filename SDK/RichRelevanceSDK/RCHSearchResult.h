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

#import "RichRelevanceSDK.h"
#import "RCHAPIResult.h"
@class RCHSearchLink;
@class RCHSearchProduct;
@class RCHSearchFacet;

NS_ASSUME_NONNULL_BEGIN
@interface RCHSearchResult : RCHAPIResult

@property (copy, nonatomic, nullable) NSString *status;
@property (copy, nonatomic, nullable) NSString *errormessage;
@property (copy, nonatomic, nullable) id request;
@property (assign, nonatomic) NSUInteger count;
@property (copy, nonatomic, nullable) NSString *spellCheckedQuery;
@property (copy, nonatomic, nullable) NSString *searchTrackingURL;
@property (copy, nonatomic, nullable) NSString *addToCartParameters;

@property (copy, nonatomic, nullable) NSArray<RCHSearchProduct *> *products;
@property (copy, nonatomic, nullable) NSDictionary<NSString *, NSArray<RCHSearchFacet *> *> *facets;
@property (copy, nonatomic, nullable) NSDictionary<NSString *, NSArray<RCHSearchLink *> *> *links;

@end
NS_ASSUME_NONNULL_END
