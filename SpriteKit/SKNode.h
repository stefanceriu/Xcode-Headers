//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class GKEntity, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SKPhysicsBody, SKReachConstraints, SKScene;

@interface SKNode : NSResponder <NSCopying, NSCoding>
{
    // Error parsing type: ^{SKCNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@fB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}IIBqffBB{?=[4]}{?=[4]}}, name: _skcNode
    SKNode *_parent;
    NSMutableArray *_children;
    NSMutableArray *_actions;
    NSMutableDictionary *_keyedActions;
    NSMutableDictionary *_keyedSubSprites;
    NSMutableDictionary *_info;
    NSMutableDictionary *_attributeValues;
    NSString *_name;
    NSMutableDictionary *_userData;
    NSArray *_constraints;
    unsigned int _version;
    BOOL _userInteractionEnabled;
    BOOL __explicitlySetIsAccessibilityElement;
    BOOL _accessibilityElement;
    BOOL _accessibilityEnabled;
    BOOL _performFullCapture;
    SKReachConstraints *_reachConstraints;
    NSString *_accessibilityRole;
    NSString *_accessibilityRoleDescription;
    NSString *_accessibilitySubrole;
    id _accessibilityParent;
    NSArray *_accessibilityChildren;
    NSString *_accessibilityHelp;
    NSString *_accessibilityLabel;
    GKEntity *_entity;
    struct CGRect _accessibilityFrame;
}

+ (id)nodeWithFileNamed:(id)arg1;
+ (id)node;
+ (id)nodeFromCaptureData:(id)arg1;
@property BOOL performFullCapture; // @synthesize performFullCapture=_performFullCapture;
@property(nonatomic) __weak GKEntity *entity; // @synthesize entity=_entity;
@property(nonatomic, getter=isAccessibilityEnabled) BOOL accessibilityEnabled; // @synthesize accessibilityEnabled=_accessibilityEnabled;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityHelp; // @synthesize accessibilityHelp=_accessibilityHelp;
@property(copy, nonatomic) NSArray *accessibilityChildren; // @synthesize accessibilityChildren=_accessibilityChildren;
@property(nonatomic) __weak id accessibilityParent; // @synthesize accessibilityParent=_accessibilityParent;
@property(nonatomic) struct CGRect accessibilityFrame; // @synthesize accessibilityFrame=_accessibilityFrame;
@property(copy, nonatomic) NSString *accessibilitySubrole; // @synthesize accessibilitySubrole=_accessibilitySubrole;
@property(copy, nonatomic) NSString *accessibilityRoleDescription; // @synthesize accessibilityRoleDescription=_accessibilityRoleDescription;
@property(copy, nonatomic) NSString *accessibilityRole; // @synthesize accessibilityRole=_accessibilityRole;
@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) SKReachConstraints *reachConstraints; // @synthesize reachConstraints=_reachConstraints;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(nonatomic, getter=isAccessibilityElement) BOOL accessibilityElement; // @synthesize accessibilityElement=_accessibilityElement;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;
@property(copy, nonatomic) NSDictionary *attributeValues;
// Error parsing type for property globalAccumulatedBoundingVerts:
// Property attributes: T{?=[4]},R,N

// Error parsing type for property globalBoundingVerts:
// Property attributes: T{?=[4]},R,N

- (void)dealloc;
- (BOOL)hasUniformAlphaAndIsVisible;
- (BOOL)intersectsNode:(id)arg1;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;
- (id)nodesAtPoint:(struct CGPoint)arg1;
- (id)nodeAtPoint:(struct CGPoint)arg1;
- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(BOOL)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1 withRadius:(double)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(nonatomic, getter=isHidden) BOOL hidden;
- (void)setScale:(double)arg1;
@property(nonatomic) double yScale;
@property(nonatomic) double xScale;
@property(nonatomic) double yRotation;
@property(nonatomic) double xRotation;
@property(nonatomic) double zRotation;
@property(nonatomic) double zPosition;
- (struct CGRect)calculateAccumulatedFrame;
@property(nonatomic) struct CGPoint position;
- (id)physicsField;
@property(retain, nonatomic) SKPhysicsBody *physicsBody;
- (id)description;
- (BOOL)needsUpdate;
- (BOOL)hasActions;
- (id)containingView;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void)runAction:(id)arg1 withKey:(id)arg2;
@property(nonatomic) double alpha;
@property(nonatomic) double speed;
- (void)runAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runAction:(id)arg1;
- (void)runAction:(id)arg1;
- (void)_descendantsWithPredicate:(CDUnknownBlockType)arg1 toMutableArray:(id)arg2;
- (id)_descendantsWithPredicate:(CDUnknownBlockType)arg1;
- (void)_descendantsToMutableArray:(id)arg1;
- (id)_descendants;
@property(readonly, nonatomic) NSArray *children;
- (BOOL)hasChildren;
- (void)_processSearchTokens:(vector_408ca79d)arg1 visited:(set_23ab0f84 *)arg2 usingBlock:(CDUnknownBlockType)arg3 stopPointer:(char *)arg4;
- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 stopPointer:(char *)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)childNodeWithName:(id)arg1;
- (void)addChild:(id)arg1 withKey:(id)arg2;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
@property(copy, nonatomic) NSArray *constraints;
- (void)_performCleanup;
- (void)removeAllChildren;
- (void)removeChildrenInArray:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)removeChildAtIndex:(long long)arg1;
@property(readonly, nonatomic) struct CGRect frame;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
- (BOOL)inParentHierarchy:(id)arg1;
@property(readonly, nonatomic) const struct CGPath *outline;
@property(readonly, nonatomic) SKNode *parent;
@property(readonly, nonatomic) SKScene *scene;
- (void)_update:(double)arg1;
- (void)moveToParent:(id)arg1;
- (void)removeFromParent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (void)_initAccessibility;
- (id)initWithCoder:(id)arg1;
- (Class)swiftClassFromString:(id)arg1 moduleName:(id)arg2;
- (id)init;
- (void)_didMakeBackingNode;
// Error parsing type for property _backingNode:
// Property attributes: T^{SKCNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@fB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}IIBqffBB{?=[4]}{?=[4]}},R,N

-     // Error parsing type: ^{SKCNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@fB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}IIBqffBB{?=[4]}{?=[4]}}16@0:8, name: _makeBackingNode
- (BOOL)isEqualToNode:(id)arg1;
@property(readonly, nonatomic) shared_ptr_11a7378b _aether;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityNotifiesWhenDestroyed;
- (void)_removeChild:(id)arg1;
- (void)_removeAction:(id)arg1;
- (struct CGRect)_convertFrameToView:(id)arg1;
- (id)_copyImageData;
@property(readonly, nonatomic) NSArray *_allActions;
-     // Error parsing type: c32@0:8^^16^Q24, name: _pathFromPhysicsBodyToPoints:outSize:
- (id)_subnodeFromIndexPath:(id)arg1;
- (id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(BOOL)arg2;
- (BOOL)intersectsNode:(id)arg1 useAlphaTest:(BOOL)arg2;
@property(readonly, nonatomic) struct CGSize _size;
@property(nonatomic) struct CGPoint _anchorPoint;
@property(readonly, nonatomic) struct CGRect _untransformedBounds;
@property(nonatomic) BOOL _showBounds;
@property(retain, nonatomic) NSMutableDictionary *_info;
- (id)childrenInRect:(struct CGRect)arg1;
- (void)updatePhysicsPositionAndScaleFromSprite;
- (void)_getBasePhysicsScale:(float *)arg1 yScale:(float *)arg2;
- (void)_getWorldTransform:(float *)arg1 positionY:(float *)arg2 rotation:(float *)arg3 xScale:(float *)arg4 yScale:(float *)arg5;
- (void)_debugPrint:(int)arg1 mask:(unsigned long long)arg2;
- (void)_debugPrint:(int)arg1;
- (void)debugPrint;
- (id)archiveToFile:(id)arg1;
- (id)createFullCaptureData;
- (void)setParent:(id)arg1;

@end

