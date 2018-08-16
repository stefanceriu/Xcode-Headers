//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct Function {
    struct CoreFunction _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
    unsigned short _field5;
    unsigned short _field6;
    int _field7;
    void *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct Function *_field13;
    void *_field14;
};

struct ProgressDigest<4> {
    long long MaxMonitorValue;
    long long InvalidIndex;
    long long _indices[4];
    struct vector<long long, std::__1::allocator<long long>> _monitorValues;
};

struct _CSTypeRef {
    unsigned long long _opaque_1;
    unsigned long long _opaque_2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*> *__next_;
};

struct deque<DeviceResourceRequest *, std::__1::allocator<DeviceResourceRequest *>> {
    struct __split_buffer<DeviceResourceRequest *__strong *, std::__1::allocator<DeviceResourceRequest *__strong *>> {
        id **__first_;
        id **__begin_;
        id **__end_;
        struct __compressed_pair<DeviceResourceRequest *__strong **, std::__1::allocator<DeviceResourceRequest *__strong *>> {
            id **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<DeviceResourceRequest *>> {
        unsigned long long __value_;
    } __size_;
};

struct dy_timebase {
    struct mach_timebase_info mach_timebase;
    unsigned long long nanoseconds_since_epoch_timestamp;
    unsigned long long mach_timestamp;
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<unsigned long long, DYDevice *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DYDevice *>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, DYDevice *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DYDevice *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DYDevice *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, DYDevice *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DYDevice *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DYDevice *>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DYDevice *>, std::__1::equal_to<unsigned long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<GPUTools::FD::Function, std::__1::allocator<GPUTools::FD::Function>> {
    struct Function *__begin_;
    struct Function *__end_;
    struct __compressed_pair<GPUTools::FD::Function *, std::__1::allocator<GPUTools::FD::Function>> {
        struct Function *__value_;
    } __end_cap_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    unsigned int bytes;
    unsigned int messages;
    unsigned int buffers;
    unsigned int aliases;
    unsigned long long standbyTimestamp;
    unsigned long long capturingTimestamp;
    unsigned long long processingTimestamp;
    unsigned long long invalidTimestamp;
    unsigned long long duration;
} CDStruct_faeedbfb;

typedef struct {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
} CDStruct_fc1d2ed0;

