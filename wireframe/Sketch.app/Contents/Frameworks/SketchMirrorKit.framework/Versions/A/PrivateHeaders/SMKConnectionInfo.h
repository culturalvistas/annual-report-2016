//
//  SMKConnectionInfo.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 07-12-16.
//  Copyright © 2016 Awkward. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMKConnectionStatus.h"
#import "SMKConnectionType.h"

@interface SMKConnectionInfo : NSObject <NSSecureCoding>

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, assign) SMKConnectionStatus status;
@property (nonatomic, assign) SMKConnectionType type;
@property (nonatomic, copy) NSDictionary *advertisement;

@property (nonatomic, readonly, getter=isHidden) BOOL hidden;

- (NSComparisonResult)compareConnectionInfo:(SMKConnectionInfo *)info;


@end
