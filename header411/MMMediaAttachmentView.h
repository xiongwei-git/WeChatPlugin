//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAttachmentReusableView.h"

@class NSImageView, NSTextField;

@interface MMMediaAttachmentView : MMAttachmentReusableView
{
    NSImageView *_imageView;
    NSTextField *_titleLable;
    NSTextField *_detailLabel;
}

@property(retain, nonatomic) NSTextField *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) NSTextField *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;

@end
