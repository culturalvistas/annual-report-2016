//
//  SMKMirrorClient.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 08-12-16.
//  Copyright © 2016 Awkward. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMKConnectionStatus.h"
#import "SMKConnectionType.h"

@class SMKAdvertisement;

/// Represents a Sketch Mirror client.
@interface SMKMirrorClient : NSObject

/// The UUID for the connection that's linked to this Mirror client.
@property (nonatomic, copy) NSUUID *connectionID;

/// The advertisement describing the client's metadata.
@property (nonatomic, strong) SMKAdvertisement *advertisement;

/// The status of the connection.
@property (nonatomic, assign) SMKConnectionStatus status;

/// The type of connection.
@property (nonatomic, assign) SMKConnectionType type;

@end
