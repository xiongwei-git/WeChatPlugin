//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseAuthReqInfo, BaseRequest, NSString;

@interface ManualAuthAesReqData : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasBaseReqInfo:1;
    unsigned int hasImei:1;
    unsigned int hasSoftType:1;
    unsigned int hasBuiltinIpseq:1;
    unsigned int hasClientSeqId:1;
    unsigned int hasSignature:1;
    unsigned int hasDeviceName:1;
    unsigned int hasDeviceType:1;
    unsigned int hasLanguage:1;
    unsigned int hasTimeZone:1;
    unsigned int hasChannel:1;
    unsigned int hasTimeStamp:1;
    unsigned int hasDeviceBrand:1;
    unsigned int hasDeviceModel:1;
    unsigned int hasOstype:1;
    unsigned int hasRealCountry:1;
    unsigned int hasBundleId:1;
    unsigned int hasAdSource:1;
    unsigned int hasIphoneVer:1;
    unsigned int hasInputType:1;
    unsigned int builtinIpseq;
    int channel;
    unsigned int timeStamp;
    unsigned int inputType;
    BaseRequest *baseRequest;
    BaseAuthReqInfo *baseReqInfo;
    NSString *imei;
    NSString *softType;
    NSString *clientSeqId;
    NSString *signature;
    NSString *deviceName;
    NSString *deviceType;
    NSString *language;
    NSString *timeZone;
    NSString *deviceBrand;
    NSString *deviceModel;
    NSString *ostype;
    NSString *realCountry;
    NSString *bundleId;
    NSString *adSource;
    NSString *iphoneVer;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetInputType:) unsigned int inputType; // @synthesize inputType;
@property(readonly, nonatomic) BOOL hasInputType; // @synthesize hasInputType;
@property(retain, nonatomic, setter=SetIphoneVer:) NSString *iphoneVer; // @synthesize iphoneVer;
@property(readonly, nonatomic) BOOL hasIphoneVer; // @synthesize hasIphoneVer;
@property(retain, nonatomic, setter=SetAdSource:) NSString *adSource; // @synthesize adSource;
@property(readonly, nonatomic) BOOL hasAdSource; // @synthesize hasAdSource;
@property(retain, nonatomic, setter=SetBundleId:) NSString *bundleId; // @synthesize bundleId;
@property(readonly, nonatomic) BOOL hasBundleId; // @synthesize hasBundleId;
@property(retain, nonatomic, setter=SetRealCountry:) NSString *realCountry; // @synthesize realCountry;
@property(readonly, nonatomic) BOOL hasRealCountry; // @synthesize hasRealCountry;
@property(retain, nonatomic, setter=SetOstype:) NSString *ostype; // @synthesize ostype;
@property(readonly, nonatomic) BOOL hasOstype; // @synthesize hasOstype;
@property(retain, nonatomic, setter=SetDeviceModel:) NSString *deviceModel; // @synthesize deviceModel;
@property(readonly, nonatomic) BOOL hasDeviceModel; // @synthesize hasDeviceModel;
@property(retain, nonatomic, setter=SetDeviceBrand:) NSString *deviceBrand; // @synthesize deviceBrand;
@property(readonly, nonatomic) BOOL hasDeviceBrand; // @synthesize hasDeviceBrand;
@property(nonatomic, setter=SetTimeStamp:) unsigned int timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) BOOL hasTimeStamp; // @synthesize hasTimeStamp;
@property(nonatomic, setter=SetChannel:) int channel; // @synthesize channel;
@property(readonly, nonatomic) BOOL hasChannel; // @synthesize hasChannel;
@property(retain, nonatomic, setter=SetTimeZone:) NSString *timeZone; // @synthesize timeZone;
@property(readonly, nonatomic) BOOL hasTimeZone; // @synthesize hasTimeZone;
@property(retain, nonatomic, setter=SetLanguage:) NSString *language; // @synthesize language;
@property(readonly, nonatomic) BOOL hasLanguage; // @synthesize hasLanguage;
@property(retain, nonatomic, setter=SetDeviceType:) NSString *deviceType; // @synthesize deviceType;
@property(readonly, nonatomic) BOOL hasDeviceType; // @synthesize hasDeviceType;
@property(retain, nonatomic, setter=SetDeviceName:) NSString *deviceName; // @synthesize deviceName;
@property(readonly, nonatomic) BOOL hasDeviceName; // @synthesize hasDeviceName;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(retain, nonatomic, setter=SetClientSeqId:) NSString *clientSeqId; // @synthesize clientSeqId;
@property(readonly, nonatomic) BOOL hasClientSeqId; // @synthesize hasClientSeqId;
@property(nonatomic, setter=SetBuiltinIpseq:) unsigned int builtinIpseq; // @synthesize builtinIpseq;
@property(readonly, nonatomic) BOOL hasBuiltinIpseq; // @synthesize hasBuiltinIpseq;
@property(retain, nonatomic, setter=SetSoftType:) NSString *softType; // @synthesize softType;
@property(readonly, nonatomic) BOOL hasSoftType; // @synthesize hasSoftType;
@property(retain, nonatomic, setter=SetImei:) NSString *imei; // @synthesize imei;
@property(readonly, nonatomic) BOOL hasImei; // @synthesize hasImei;
@property(retain, nonatomic, setter=SetBaseReqInfo:) BaseAuthReqInfo *baseReqInfo; // @synthesize baseReqInfo;
@property(readonly, nonatomic) BOOL hasBaseReqInfo; // @synthesize hasBaseReqInfo;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
