//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct vector<_NSRange, std::__1::allocator<_NSRange>> {
    struct _NSRange *__begin_;
    struct _NSRange *__end_;
    struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange>> {
        struct _NSRange *__first_;
    } __end_cap_;
};

