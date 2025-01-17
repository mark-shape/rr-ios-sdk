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
#ifdef SWIFT_PACKAGE
#import "Import/RCHImportable.h"
#else
#import "RCHImportable.h"
#endif

@interface RCHAutocompleteSuggestion : NSObject <RCHImportable>

/*!
 *  The autocomplete suggestion
 */
@property (copy, nonatomic, nullable) NSString *text;

/*!
 *  The ID for the suggestion
 */
@property (copy, nonatomic, nullable) NSString *suggestionID;

/*!
 *  The type of suggestion
 */
@property (copy, nonatomic, nullable) NSString *type;

/*!
 *  The popularity of the suggestion
 */
@property (assign, nonatomic) NSUInteger popularity;

@end
