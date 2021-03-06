//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Address;

struct Breakpoint;

struct BreakpointLocation;

struct Broadcaster;

struct CommandInterpreter;

struct CommandReturnObject;

struct CompileUnit;

struct Connection {
    struct shared_ptr<rpc_common::Connection> m_connection_sp;
};

struct DataExtractor;

struct Debugger;

struct Error;

struct EvaluateExpressionOptions;

struct Event;

struct ExecutionContextRef;

struct FileSpec;

struct FileSpecList;

struct LineEntry;

struct Listener;

struct Module;

struct ObjectRef;

struct Process;

struct QueueImpl;

struct QueueItem;

struct SBAttachInfo;

struct SBLaunchInfo;

struct Section;

struct Stream;

struct StringList;

struct Symbol;

struct SymbolContext;

struct Target;

struct ThreadCollection;

struct TypeImpl;

struct TypeMemberImpl;

struct TypeSummaryOptions;

struct ValueImpl;

struct ValueListImpl;

struct Watchpoint;

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

struct __shared_weak_count;

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct shared_ptr<ValueImpl> {
    struct ValueImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Breakpoint> {
    struct Breakpoint *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::BreakpointLocation> {
    struct BreakpointLocation *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Broadcaster> {
    struct Broadcaster *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::DataExtractor> {
    struct DataExtractor *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Debugger> {
    struct Debugger *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Event> {
    struct Event *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::ExecutionContextRef> {
    struct ExecutionContextRef *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Listener> {
    struct Listener *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Module> {
    struct Module *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::QueueImpl> {
    struct QueueImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::QueueItem> {
    struct QueueItem *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Target> {
    struct Target *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::ThreadCollection> {
    struct ThreadCollection *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::TypeImpl> {
    struct TypeImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<lldb_private::Watchpoint> {
    struct Watchpoint *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<rpc::ObjectRef> {
    struct ObjectRef *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<rpc_common::Connection> {
    struct Connection *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<ValueListImpl, std::__1::default_delete<ValueListImpl>> {
    struct __compressed_pair<ValueListImpl *, std::__1::default_delete<ValueListImpl>> {
        struct ValueListImpl *__first_;
    } __ptr_;
};

struct unique_ptr<lldb::SBAttachInfo, std::__1::default_delete<lldb::SBAttachInfo>> {
    struct __compressed_pair<lldb::SBAttachInfo *, std::__1::default_delete<lldb::SBAttachInfo>> {
        struct SBAttachInfo *__first_;
    } __ptr_;
};

struct unique_ptr<lldb::SBLaunchInfo, std::__1::default_delete<lldb::SBLaunchInfo>> {
    struct __compressed_pair<lldb::SBLaunchInfo *, std::__1::default_delete<lldb::SBLaunchInfo>> {
        struct SBLaunchInfo *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::Address, std::__1::default_delete<lldb_private::Address>> {
    struct __compressed_pair<lldb_private::Address *, std::__1::default_delete<lldb_private::Address>> {
        struct Address *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::CommandReturnObject, std::__1::default_delete<lldb_private::CommandReturnObject>> {
    struct __compressed_pair<lldb_private::CommandReturnObject *, std::__1::default_delete<lldb_private::CommandReturnObject>> {
        struct CommandReturnObject *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::Error, std::__1::default_delete<lldb_private::Error>> {
    struct __compressed_pair<lldb_private::Error *, std::__1::default_delete<lldb_private::Error>> {
        struct Error *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::EvaluateExpressionOptions, std::__1::default_delete<lldb_private::EvaluateExpressionOptions>> {
    struct __compressed_pair<lldb_private::EvaluateExpressionOptions *, std::__1::default_delete<lldb_private::EvaluateExpressionOptions>> {
        struct EvaluateExpressionOptions *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::FileSpec, std::__1::default_delete<lldb_private::FileSpec>> {
    struct __compressed_pair<lldb_private::FileSpec *, std::__1::default_delete<lldb_private::FileSpec>> {
        struct FileSpec *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::FileSpecList, std::__1::default_delete<lldb_private::FileSpecList>> {
    struct __compressed_pair<lldb_private::FileSpecList *, std::__1::default_delete<lldb_private::FileSpecList>> {
        struct FileSpecList *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::LineEntry, std::__1::default_delete<lldb_private::LineEntry>> {
    struct __compressed_pair<lldb_private::LineEntry *, std::__1::default_delete<lldb_private::LineEntry>> {
        struct LineEntry *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::Stream, std::__1::default_delete<lldb_private::Stream>> {
    struct __compressed_pair<lldb_private::Stream *, std::__1::default_delete<lldb_private::Stream>> {
        struct Stream *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::StringList, std::__1::default_delete<lldb_private::StringList>> {
    struct __compressed_pair<lldb_private::StringList *, std::__1::default_delete<lldb_private::StringList>> {
        struct StringList *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::SymbolContext, std::__1::default_delete<lldb_private::SymbolContext>> {
    struct __compressed_pair<lldb_private::SymbolContext *, std::__1::default_delete<lldb_private::SymbolContext>> {
        struct SymbolContext *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::TypeMemberImpl, std::__1::default_delete<lldb_private::TypeMemberImpl>> {
    struct __compressed_pair<lldb_private::TypeMemberImpl *, std::__1::default_delete<lldb_private::TypeMemberImpl>> {
        struct TypeMemberImpl *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_private::TypeSummaryOptions, std::__1::default_delete<lldb_private::TypeSummaryOptions>> {
    struct __compressed_pair<lldb_private::TypeSummaryOptions *, std::__1::default_delete<lldb_private::TypeSummaryOptions>> {
        struct TypeSummaryOptions *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_rpc::SBAttachInfo, std::__1::default_delete<lldb_rpc::SBAttachInfo>> {
    struct __compressed_pair<lldb_rpc::SBAttachInfo *, std::__1::default_delete<lldb_rpc::SBAttachInfo>> {
        struct SBAttachInfo *__first_;
    } __ptr_;
};

struct unique_ptr<lldb_rpc::SBLaunchInfo, std::__1::default_delete<lldb_rpc::SBLaunchInfo>> {
    struct __compressed_pair<lldb_rpc::SBLaunchInfo *, std::__1::default_delete<lldb_rpc::SBLaunchInfo>> {
        struct SBLaunchInfo *__first_;
    } __ptr_;
};

struct weak_ptr<lldb_private::Process> {
    struct Process *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<lldb_private::Section> {
    struct Section *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

