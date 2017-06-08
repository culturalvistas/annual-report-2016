//
//  SMKConnectionStatus.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 07-12-16.
//  Copyright © 2016 Awkward. All rights reserved.
//

#ifndef SMKConnectionStatus_h
#define SMKConnectionStatus_h

typedef NS_ENUM(NSUInteger, SMKConnectionStatus) {
    SMKConnectionStatusDestroyed,
    SMKConnectionStatusClosed,
    SMKConnectionStatusOpening,
    SMKConnectionStatusOpen
};

#endif /* SMKConnectionStatus_h */
