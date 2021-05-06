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

#import "RCHPersonalizedPlacement.h"
#import "RCHCreative.h"
#ifdef SWIFT_PACKAGE
#import "Import/NSObject+RCHImport.h"
#else
#import "NSObject+RCHImport.h"
#endif

@implementation RCHPersonalizedPlacement

- (BOOL)rch_shouldImportValue:(id)value forKey:(NSString *)key
{
    if ([key isEqualToString:NSStringFromSelector(@selector(creatives))] && [value isKindOfClass:[NSArray class]]) {
        self.creatives = [RCHCreative rch_objectsFromArray:value];

        for (int i = 0; i < self.creatives.count; i++) {
            RCHCreative *creative = self.creatives[i];
            creative.rawValues = value[i];
        }

        return NO;
    }
    else if ([key isEqualToString:NSStringFromSelector(@selector(placement))] && [value isKindOfClass:[NSString class]]) {
        NSArray *components = [value componentsSeparatedByString:@"."];
        if (components.count == 2) {
            self.placementType = [RCHEnumMappings pageTypeFromString:components[0]];
            self.placement = value;
        }
        return NO;
    }

    return YES;
}

@end
