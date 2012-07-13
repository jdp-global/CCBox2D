//
//  CCShape.h
//  CCBox2D
//
//  Created by Brent Gulanowski on 12-07-12.
//  Copyright (c) 2012 Marketcircle Inc. All rights reserved.
//

#import <Cocos2DKit/Cocos2DKit.h>


@class CCBodySprite;

// CCShape represents a fixture definition, which includes a shape

@interface CCShape : NSObject

@property (nonatomic, assign) id userData;

@property (nonatomic, assign) Float32 density;
@property (nonatomic, assign) Float32 friction;
@property (nonatomic, assign) Float32 restitution;
@property (nonatomic, assign, getter = isSensor) BOOL sensor;
@property (nonatomic, assign) UInt16 collisionCategory;
@property (nonatomic, assign) UInt16 collisionMask;
@property (nonatomic, assign) SInt16 collisionGroup;

- (void)addFixtureToBody:(CCBodySprite *)body;
- (void)removeFixtureFromBody:(CCBodySprite *)body;

+ (CCShape *)boxWithRect:(CGRect)rect;
+ (CCShape *)circleWithCenter:(CGPoint)center radius:(Float32)radius;
+ (CCShape *)polygonWithVertices:(CCArray *)shapeVertices bodyPosition:(CGPoint)position;
+ (CCShape *)chainWithVertices:(CGPoint *)chainVertices count:(NSUInteger)count sensor:(BOOL)sensor;

@end