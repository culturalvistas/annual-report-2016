//
//  SMKExportRequest.h
//  SketchMirrorKit
//
//  Created by Robin Speijer on 12-12-16.
//  Copyright © 2016 Awkward. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@interface SMKExportRequest : NSObject <NSCopying>

- (nonnull instancetype)initWithStringValue:(nullable NSString *)value;
@property (nonatomic, nonnull, readonly) NSString *stringValue;

@property (nonatomic, nullable, copy) NSString *artboardID;
@property (nonatomic, assign) NSRect rect;
@property (nonatomic, assign) NSSize constrainingSize;

@property (nonatomic, assign) CGFloat scale;

@end
