//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumberFormatter, NSString;

@interface NTSizeFormatter : NSObject
{
    NSString *_localizedBytesString;
    NSNumberFormatter *_numFormatter;
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)fileSize:(unsigned long long)arg1;
- (id)fileSizeInBytes:(unsigned long long)arg1;

@end

