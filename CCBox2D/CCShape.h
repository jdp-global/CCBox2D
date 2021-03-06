//
//  CCShape.h
//  CCBox2D
//
//  Created by Brent Gulanowski on 12-07-12.
//  Copyright (c) 2012 Marketcircle Inc. All rights reserved.
//

#import "cocos2d.h"
#import "Box2D.h"

@class CCBodySprite;

// CCShape represents a fixture definition, which includes a shape

@interface CCShape : NSObject<NSCoding>



@property (nonatomic, assign) b2FixtureDef *fixtureDef;
@property (nonatomic, assign) b2Fixture *fixture;

@property (nonatomic, assign) id userData;

@property (nonatomic, assign) Float32 density;
@property (nonatomic, assign) Float32 friction;
@property (nonatomic, assign) Float32 restitution;
@property (nonatomic, assign) UInt16 collisionCategory;
@property (nonatomic, assign) UInt16 collisionMask;
@property (nonatomic, assign) SInt16 collisionGroup;
@property (nonatomic, assign, getter = isSensor) BOOL sensor;

@property (nonatomic, readonly) CGRect boundingBox;

//- (id)initWithShape:(b2Shape *)shape;
- (void)addFixtureToBody:(CCBodySprite *)body userData:(id)userData;
- (void)addFixtureToBody:(CCBodySprite *)body;
- (void)removeFixtureFromBody:(CCBodySprite *)body;

- (NSString *)shapeDescription;
+ (CCShape *)boxWithFixtureDef:(b2FixtureDef)fixtureDef;
+ (CCShape *)boxWithRect:(CGRect)rect;
+ (CCShape *)circleWithCenter:(CGPoint)center radius:(Float32)radius;
+ (CCShape *)polygonWithVertices:(CCArray *)shapeVertices;
+ (CCShape *)chainWithVertices:(CGPoint *)chainVertices count:(NSUInteger)count;
+ (CCShape *)edgeWithVec1:(b2Vec2 )vec1 vec2:(b2Vec2 )vec2;

//helpers
+ (CCShape *)polygonWithVecVertices:(b2Vec2 *)vertices count:(int)count;
@end
