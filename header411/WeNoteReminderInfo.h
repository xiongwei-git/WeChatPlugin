//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WeNoteReminderInfo : NSObject
{
    BOOL _edited;
    NSString *_deviceid;
    NSString *_eventIdentifier;
    NSString *_title;
    unsigned long long _reminderTime;
}

@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) unsigned long long reminderTime; // @synthesize reminderTime=_reminderTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
- (void).cxx_destruct;

@end

