//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CachedMemory {
    unsigned long long *value;
    unsigned long long count;
};

struct DTKPRecordDecoderMagazine {
    id *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned long long _field6;
};

struct DTNStatSourceMap {
    struct __CFDictionary *_container;
    long long _nextSerialNumber;
};

struct SessionCallbackState {
    struct _opaque_pthread_t *thread;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } lock;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } conditionVariable;
    int state;
    _Bool buffer_drained;
};

struct TFPPidWatcher {
    unsigned int clientPort;
};

struct _CSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct kpdecode_callstack {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3[128];
};

struct kpdecode_pmc {
    int _field1;
    unsigned long long _field2[32];
};

struct kpdecode_record {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    struct {
        char _field1[20];
    } _field5;
    struct {
        unsigned int _field1;
        unsigned long long _field2[4];
    } _field6;
    struct {
        int _field1;
        int _field2;
        unsigned long long _field3;
    } _field7;
    struct kpdecode_callstack _field8;
    struct kpdecode_callstack _field9;
    struct kpdecode_pmc _field10;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
    } _field11;
    struct {
        unsigned int _field1;
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned long long _field4;
        unsigned long long _field5;
    } _field12;
    struct {
        unsigned int _field1;
        unsigned int _field2;
    } _field13;
    struct {
        unsigned long long _field1;
        int _field2;
    } _field14;
    struct {
        int _field1;
        unsigned long long *_field2;
    } _field15;
    struct {
        unsigned long long _field1;
    } _field16;
    struct {
        unsigned int _field1;
        int _field2;
    } _field17;
    struct {
        char _field1[256];
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned int _field4;
    } _field18;
};

struct map<unsigned long long, int, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> {
    struct __tree<std::__1::__value_type<unsigned long long, int>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, int>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, int>>> {
        struct __tree_node<std::__1::__value_type<unsigned long long, int>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long long, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *__left_;
            } __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, int>, std::__1::less<unsigned long long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct vector<DTKPDataStreamMemoryRecord *, std::__1::allocator<DTKPDataStreamMemoryRecord *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<DTKPDataStreamMemoryRecord *__strong *, std::__1::allocator<DTKPDataStreamMemoryRecord *>> {
        id *__first_;
    } __end_cap_;
};

struct vm_region_submap_info_64 {
    int _field1;
    int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned short _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned int _field14;
    int _field15;
    unsigned int _field16;
    unsigned short _field17;
    unsigned int _field18;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_cbbc06c7;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    struct *_field3;
} CDStruct_3b01f0aa;

#pragma mark Typedef'd Unions

typedef union {
    unsigned int value;
    struct {
        unsigned int qualifier:2;
        unsigned int code:14;
        unsigned int subclass:8;
        unsigned int classID:8;
    } field;
} CDUnion_1678db3a;

