//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, NTFileDesc;

@interface NTDirectoryDefaults : NSObject
{
    NTFileDesc *_directory;
    NSString *_pathToFile;
    NSMutableDictionary *_defaults;
    NSMutableDictionary *_itemDefaults;
    BOOL _needsToSyncWithFile;
}

+ (id)defaultsWithDirectory:(id)arg1;
- (id)initWithDirectory:(id)arg1;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)defaultsForFileWithName:(id)arg1;
- (void)setDefaults:(id)arg1 forFileWithName:(id)arg2;
- (void)setDefault:(id)arg1 forKey:(id)arg2 forFileWithName:(id)arg3;
- (void)syncWithFile;

@end
