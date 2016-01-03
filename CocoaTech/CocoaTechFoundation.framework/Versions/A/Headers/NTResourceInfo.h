//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NTResourceInfo : NSObject
{
    NSString *_name;
    unsigned int _type;
    int _resID;
    int _offset;
    int _size;
}

+ (id)resourceInfoForType:(unsigned long)arg1 resID:(int)arg2 name:(id)arg3 offset:(int)arg4 size:(int)arg5;
- (id)initForType:(unsigned long)arg1 resID:(int)arg2 name:(id)arg3 offset:(int)arg4 size:(int)arg5;
- (void)dealloc;
- (id)name;
- (unsigned long)type;
- (int)resID;
- (int)size;
- (int)offset;

@end
