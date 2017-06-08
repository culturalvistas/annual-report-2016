//
//  SMKMirrorConnectionsControllerDelegate.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 13-01-16.
//  Copyright © 2016 Awkward. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SMKMirrorServerController, SMKMirrorClient;

/// The delegate to be called by SMKMirrorConnectionsController whenever there are changes to the connected Mirror clients or the Mirror Web URL changes.
@protocol SMKMirrorServerControllerDelegate <NSObject>

@optional

/**
 The available Mirror peer list have been changed. Peers have been added, removed or reordered, or connection states have been changed.
 @param controller The Mirror Connections controller that received the change.
 @param newPeers The new list of available peer connections.
 */
- (void)mirrorServerController:(nonnull SMKMirrorServerController *)controller didChangeClients:(nullable NSArray<SMKMirrorClient *> *)clients;

/**
 Called when the Sketch Mirror Web URL changed.
 @param controller The Mirror Connections controller that triggers the URL change.
 @param url The new Mirror Web URL
 */
- (void)mirrorServerController:(nonnull SMKMirrorServerController *)controller didChangeWebURL:(nullable NSURL *)url;

@end
