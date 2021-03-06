/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCStackQueue : NSObject {
    unsigned long long  _count;
    struct _SCRCStackNode { id x1; void x2; void *x3; } * _firstNode;
    struct _SCRCStackNode { id x1; void x2; void *x3; } * _lastNode;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)dequeueObject;
- (id)dequeueObjectRetained;
- (id)description;
- (void)enqueueObject:(id)arg1;
- (bool)isEmpty;
- (id)objectEnumerator;
- (id)popObject;
- (id)popObjectRetained;
- (void)pushArray:(id)arg1;
- (void)pushObject:(id)arg1;
- (void)removeAllObjects;
- (id)topObject;

@end
