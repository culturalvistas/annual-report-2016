//
//  SMKWebServerDataSource.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 09-12-16.
//  Copyright © 2016 Awkward. All rights reserved.
//

@import Foundation;

@class SMKExportRequest;

@protocol SMKWebServerDataSource <NSObject>

- (void)renderExportForRequest:(nonnull SMKExportRequest *)request handler:(void (^ _Nonnull)(NSData * _Nullable))handler;

@end
