//
//  SMKPeerDiscoveryController.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 07-12-15.
//  Copyright © 2015 Awkward. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMKMirrorDataSource.h"
#import "SMKMirrorServerControllerDelegate.h"

/// A notification that's posted when any of the Mirror clients change. This can be insertions or removals, but also metadata changes for individual Mirror clients. The notification is guaranteed to be posted on the main queue.
extern NSString * _Nonnull SMKMirrorControllerDidChangeConnectionsNotification;

/// Manages the Mirror connections that can be used for mirror sessions. These connections are listed in the connections property. The delegate will be notified about any changes where the UI should be involved with. To send data to the Mirror clients, you can use the invalidation methods on this class.
@interface SMKMirrorServerController : NSObject

#pragma mark - Connections

/// The delegate to be called whenever there are changes to the connected Mirror clients or the Mirror Web URL changes.
@property (nullable, weak) id<SMKMirrorServerControllerDelegate> delegate;

/// Whether USB is enabled for connecting Mirror clients.
@property (readonly) BOOL usbEnabled;

/// Whether websockets are used for connecting Mirror clients.
@property (readonly) BOOL webEnabled;

/// A list of mirror clients that can be displayed to the user. After each change to the array, the delegate will be notified and SMKMirrorControllerDidChangeConnectionsNotification will be posted.
@property (nonatomic, nullable, strong, readonly) NSArray<SMKMirrorClient *> *clients;

/// A boolean indicating that there is at least a single connected Mirror client.
@property (nonatomic, readonly) BOOL hasConnectedClients;

/// Try to connect (or approve) the given Mirror client.
- (void)connect:(nonnull SMKMirrorClient *)client;

/// Disconnect the given Mirror client.
- (void)disconnect:(nonnull SMKMirrorClient *)client;

/// Continues the given user activity. You typically call this from the -[UIApplicationDelegate application:continueUserActivity:restorationHandler:] method.
- (void)continueUserActivity:(nonnull NSUserActivity *)userActivity;

#pragma mark - Mirror Web

/// The Mirror Web URL to use. This note can be changed, which is notified to the delegate. As this URL does not contain any token, the connection should still be approved by the user.
@property (nullable, readonly) NSURL *webURL;

/**
 A Mirror Web URL that is already authorized. The user doesn't need to approve this new connection.
 */
@property (nullable, readonly) NSURL *authorizedWebURL;

#pragma mark - Content
/// @name Content updates

/// The data source for all communication with Mirror apps
@property (nonatomic, nullable, weak) id<SMKMirrorDataSource> dataSource;

/// Invalidates the content hierarchy for all connections. The delegate will ask for new content whenever appropiate.
- (void)invalidateContent;

/// Invalidates the current artboard for all connections. The delegate will ask for the new current artboard whenever appropiate.
- (void)invalidateCurrentArtboard;

/**
 Invalidates the artboard image within the specified rectangle.
 
 This will mark this specific area within the image as dirty and places an update operation in the queue.
 @param identifier The artboard identifier to invalidate an image rectangle.
 @param rect The rectangle within the artboard image to invalidate. To invalidate the full image, specify CGRectZero.
 @param context A context object to use for the image invalidation. When the datasource is being asked about the image that needs to be rendered, the context can be included. However, the system might decide to not retain the context due to memory pressure.
 */
- (void)invalidateImageForArtboardIdentifier:(nonnull NSString *)identifier
                                      inRect:(CGRect)rect;

@end
