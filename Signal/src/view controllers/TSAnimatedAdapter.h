//
//  TSAnimatedAdapter.h
//  Signal
//
//  Created by Mike Okner (@mikeokner) on 2015-09-01.
//  Copyright (c) 2015 Open Whisper Systems. All rights reserved.
//

#import <JSQMessagesViewController/JSQPhotoMediaItem.h>
#import "TSAttachmentStream.h"
#import <Foundation/Foundation.h>

@interface TSAnimatedAdapter : JSQMediaItem

- (instancetype)initWithAttachment:(TSAttachmentStream*)attachment;

- (BOOL)isImage;
- (BOOL)isAudio;
- (BOOL)isVideo;

@property NSString *attachmentId;

@end
