//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNUserNotificationBannerController, NSMutableArray;

@interface CNUserNotificationCenter : NSObject
{
    id <CNUserNotificationCenterDelegate> _delegate;
    CNUserNotificationBannerController *_notificationBannerController;
    NSMutableArray *_deliveredNotifications;
    NSMutableArray *_cn_scheduledNotifications;
}

+ (id)customUserNotificationCenter;
+ (id)defaultUserNotificationCenter;
@property(retain, nonatomic) NSMutableArray *cn_scheduledNotifications; // @synthesize cn_scheduledNotifications=_cn_scheduledNotifications;
@property(retain) NSMutableArray *deliveredNotifications; // @synthesize deliveredNotifications=_deliveredNotifications;
@property(retain) CNUserNotificationBannerController *notificationBannerController; // @synthesize notificationBannerController=_notificationBannerController;
@property(retain) id <CNUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (void)deliverNotification:(id)arg1;
- (id)init;

@end

