//
//  RCHSearchLink.h
//  RichRelevanceSDK
//
//  Created by Brian King on 10/3/16.
//  Copyright © 2016 Raizlabs Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#ifdef SWIFT_PACKAGE
#import "Import/RCHImportable.h"
#else
#import "RCHImportable.h"
#endif

@interface RCHSearchLink : NSObject <RCHImportable>

@property (copy, nonatomic, nullable) NSString *linkID;
@property (copy, nonatomic, nullable) NSString *title;
@property (copy, nonatomic, nullable) NSString *subtitle;
@property (copy, nonatomic, nullable) NSString *URL;
@property (copy, nonatomic, nullable) NSString *imageURL;

@end
