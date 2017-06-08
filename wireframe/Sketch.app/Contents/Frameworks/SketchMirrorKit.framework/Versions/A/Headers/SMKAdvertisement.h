//
//  SMKAdvertisement.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 08-12-16.
//  Copyright © 2016 Awkward. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CGBase.h>

/// Represents how a Mirror client advertises itself on the network using Bonjour, or in a specific device info message in the Mirror protocol. This info can be used for displaying metadata about the client to the user.
@interface SMKAdvertisement : NSObject <NSCopying, NSSecureCoding>

/// Initializes an advertisement using a dictionary representation.
- (nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary;

/// A dictionary representation.
@property (nonatomic, nonnull, readonly) NSDictionary *dictionaryRepresentation;

/// The identifier of the Mirror client's session.
@property (nonatomic, nonnull, strong) NSUUID *identifier;

/// A user presentable name of the client.
@property (nonatomic, nullable, strong) NSString *name;

/// Description of the device model that the client runs on. Might also be a user agent in the case of a browser.
@property (nonatomic, nullable, strong) NSString *modelName;

@end
