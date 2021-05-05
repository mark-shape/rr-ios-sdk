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

@import Foundation;

//! Project version number for RichRelevanceSDK.
FOUNDATION_EXPORT double RichRelevanceSDKVersionNumber;

//! Project version string for RichRelevanceSDK.
FOUNDATION_EXPORT const unsigned char RichRelevanceSDKVersionString[];

#define SWIFT_PACKAGE

// GENERAL

#import "../RCHSDK.h"
#import "../RCHLogLevels.h"
#import "../RCHCommonIncludes.h"
#import "../RCHErrors.h"

// REQUEST BUILDERS

#import "../RCHRequestBuilder.h"
#import "../RCHPlacementsBuilder.h"
#import "../RCHPlacementRecsBuilder.h"
#import "../RCHStrategyRecsBuilder.h"
#import "../RCHUserPrefBuilder.h"
#import "../RCHUserProfileBuilder.h"
#import "../RCHPersonalizeBuilder.h"
#import "../RCHGetProductsBuilder.h"
#import "../RCHAutocompleteBuilder.h"
#import "../RCHSearchBuilder.h"

// API

#import "../RCHAPIClient.h"
#import "../RCHAPIClientConfig.h"
#import "../RCHAPIConstants.h"

// MODEL

#import "../RCHAPIResult.h"
#import "../RCHRange.h"
#import "../RCHPlacementsResult.h"
#import "../RCHStrategyResult.h"
#import "../RCHPlacement.h"
#import "../RCHRecommendedPlacement.h"
#import "../RCHRecommendedProduct.h"
#import "../RCHCategory.h"
#import "../RCHUserPrefResult.h"
#import "../RCHUserPreference.h"
#import "../RCHUserProfileResult.h"
#import "../RCHUserProfileElement.h"
#import "../Import/RCHImportable.h"
#import "../RCHPersonalizeResult.h"
#import "../RCHPersonalizedPlacement.h"
#import "../RCHCreative.h"
#import "../RCHGetProductsResult.h"
#import "../RCHSearchResult.h"
#import "../RCHSearchLink.h"
#import "../RCHSearchProduct.h"
#import "../RCHSearchFacet.h"
#import "../RCHAutocompleteSuggestion.h"

// RESPONSE PARSER

#import "../RCHAPIResponseParser.h"
#import "../RCHRecsForPlacementsResponseParser.h"
#import "../RCHRecsUsingStrategyResponseParser.h"
#import "../RCHUserPrefResponseParser.h"
#import "../RCHUserProfileResponseParser.h"
#import "../RCHPersonalizeResponseParser.h"
#import "../RCHGetProductsResponseParser.h"
