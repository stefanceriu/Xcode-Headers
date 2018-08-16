//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2018 08:38:15).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAShapeLayer {
    Class _field1;
    struct _CALayerIvars _field2;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct NSObject {
    Class _field1;
};

struct Token {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
};

struct _CALayerIvars {
    int _field1;
    unsigned int _field2;
    void *_field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _xmlDoc;

struct _xmlHashTable;

struct _xmlNode;

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlValidState;

struct option {
    char *_field1;
    int _field2;
    int *_field3;
    int _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long _field1[4];
} CDStruct_68506f87;

typedef struct {
    char *_field1;
    char _field2;
    unsigned long long _field3;
    long long _field4;
    char *_field5;
    char *_field6;
} CDStruct_071f1a99;

typedef struct {
    char *_field1;
    long long _field2;
} CDStruct_ac8ae556;

typedef struct {
    char isHorizontal;
    char isVertical;
    char isRight;
    char isLeft;
    char isDown;
    char isUp;
} CDStruct_92d5623e;

typedef struct {
    char _field1;
    char _field2;
} CDStruct_7ddbbeae;

typedef struct {
    double value;
    unsigned long long unit;
} CDStruct_e454a20b;

typedef struct {
    double minX;
    double minY;
    double maxX;
    double maxY;
} CDStruct_c519178c;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

typedef struct {
    long long _field1;
    id _field2;
} CDStruct_6db0658e;

typedef struct {
    struct {
        char *_field1;
        unsigned long long _field2;
        unsigned long long _field3;
    } _field1;
    char *_field2;
    long long _field3;
    long long _field4;
    struct Token _field5;
    long long _field6;
    long long _field7;
} CDStruct_67f4b74a;

typedef struct {
    struct CGPoint start;
    struct CGPoint end;
} CDStruct_f6143a38;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    struct CGSize _field6;
    struct CGSize _field7;
} CDStruct_a5efb618;

typedef struct {
    struct {
        struct CGRect _field1;
        char _field2;
    } _field1[3][3];
} CDStruct_b58c4854;

// Ambiguous groups
typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

#pragma mark Typedef'd Unions

typedef union {
    double _field1[2];
    CDStruct_34734122 _field2;
} CDUnion_4a127b1b;

typedef union {
    double _field1[4];
    CDStruct_c519178c _field2;
} CDUnion_24d33b01;

typedef union {
    double _field1[5];
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
        double _field5;
    } _field2;
} CDUnion_b8f7e27c;

typedef union {
    struct {
        long long x;
        long long y;
    } ;
    long long components[2];
} CDUnion_31865a80;

