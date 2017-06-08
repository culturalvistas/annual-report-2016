//
//  SMKMirrorConnectionsDataSource.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 17-12-15.
//  Copyright © 2015 Awkward. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMKWebServerDataSource.h"

/// The data source that is being used by SketchMirrorKit to get the needed information for streaming to the Mirror app. All methods are guaranteed to be called from the main queue.
@protocol SMKMirrorDataSource <SMKWebServerDataSource>

/// The identifier of the current visible artboard in Sketch. This will be used for the initial connection setup with the Mirror app.
@property (readonly, nullable) NSString *currentArtboardIdentifier;

/// The content hierarchy for the Sketch file that is being sent to Sketch Mirror.
@property (readonly, nullable) NSDictionary *manifestContent;

/// Whether Mirror should scroll to the currently selected artboard when the current artboard identifier changes.
@property (readonly) BOOL shouldScrollToSelectedArtboard;

@end
