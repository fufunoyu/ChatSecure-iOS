//
//  OTRXMPPServerTableViewCell.h
//  ChatSecure
//
//  Created by David Chiles on 5/20/15.
//  Copyright (c) 2015 Chris Ballinger. All rights reserved.
//

#import "XLFormBaseCell.h"

extern NSString *const kOTRFormRowDescriptorTypeXMPPServer;

@interface OTRXMPPServerTableViewCellInfo : NSObject

@property (nonatomic, strong) UIImage *serverImage;
@property (nonatomic, strong) NSString *serverName;
@property (nonatomic, strong) NSString *serverDomain;

@end

@interface OTRXMPPServerTableViewCell : XLFormBaseCell

@property (nonatomic, strong, readonly) UIImageView *serverImageView;
@property (nonatomic, strong, readonly) UILabel *serverNameLabel;
@property (nonatomic, strong, readonly) UILabel *serverDomainLabel;

@end