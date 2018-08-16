//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSXMLParserDelegate-Protocol.h>

@class IBXMLDecoderArchiveElement, IBXMLDecoderElement, IBXMLDecoderParserStringTable, NSError, NSMutableArray, NSString;

@interface IBXMLDecoderParser : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *_elementStack;
    NSError *_parseError;
    IBXMLDecoderArchiveElement *_archiveElement;
    struct _xmlParserCtxt {
        struct _xmlSAXHandler *_field1;
        void *_field2;
        struct _xmlDoc *_field3;
        int _field4;
        int _field5;
        char *_field6;
        char *_field7;
        int _field8;
        int _field9;
        struct _xmlParserInput *_field10;
        int _field11;
        int _field12;
        struct _xmlParserInput **_field13;
        struct _xmlNode *_field14;
        int _field15;
        int _field16;
        struct _xmlNode **_field17;
        int _field18;
        struct _xmlParserNodeInfoSeq {
            unsigned long long _field1;
            unsigned long long _field2;
            struct _xmlParserNodeInfo *_field3;
        } _field19;
        int _field20;
        int _field21;
        int _field22;
        int _field23;
        int _field24;
        int _field25;
        struct _xmlValidCtxt {
            void *_field1;
            CDUnknownFunctionPointerType _field2;
            CDUnknownFunctionPointerType _field3;
            struct _xmlNode *_field4;
            int _field5;
            int _field6;
            struct _xmlNode **_field7;
            unsigned int _field8;
            struct _xmlDoc *_field9;
            int _field10;
            struct _xmlValidState *_field11;
            int _field12;
            int _field13;
            struct _xmlValidState *_field14;
            struct _xmlAutomata *_field15;
            struct _xmlAutomataState *_field16;
        } _field26;
        int _field27;
        int _field28;
        char *_field29;
        char *_field30;
        int _field31;
        int _field32;
        char **_field33;
        long long _field34;
        long long _field35;
        int _field36;
        int _field37;
        int _field38;
        char *_field39;
        char *_field40;
        char *_field41;
        int *_field42;
        int _field43;
        int _field44;
        int *_field45;
        int _field46;
        struct _xmlParserInput *_field47;
        int _field48;
        int _field49;
        int _field50;
        int _field51;
        void *_field52;
        int _field53;
        int _field54;
        void *_field55;
        int _field56;
        int _field57;
        struct _xmlDict *_field58;
        char **_field59;
        int _field60;
        int _field61;
        char *_field62;
        char *_field63;
        char *_field64;
        int _field65;
        int _field66;
        int _field67;
        char **_field68;
        int *_field69;
        void **_field70;
        struct _xmlHashTable *_field71;
        struct _xmlHashTable *_field72;
        int _field73;
        int _field74;
        int _field75;
        int _field76;
        struct _xmlNode *_field77;
        int _field78;
        struct _xmlAttr *_field79;
        struct _xmlError {
            int _field1;
            int _field2;
            char *_field3;
            int _field4;
            char *_field5;
            int _field6;
            char *_field7;
            char *_field8;
            char *_field9;
            int _field10;
            int _field11;
            void *_field12;
            void *_field13;
        } _field80;
        int _field81;
        unsigned long long _field82;
        unsigned long long _field83;
        struct _xmlParserNodeInfo *_field84;
        int _field85;
        int _field86;
        struct _xmlParserNodeInfo *_field87;
        int _field88;
        unsigned long long _field89;
    } *_context;
    IBXMLDecoderParserStringTable *_stringTable;
    IBXMLDecoderElement *_currentElement;
}

+ (id)parseArchive:(id)arg1 error:(id *)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (id)parseArchive:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

