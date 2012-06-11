//
//  CCBox2DPrivate.h
//  CCBox2D
//
//  Created by Brent Gulanowski on 12-05-13.
//  Copyright (c) 2012 Lichen Labs. All rights reserved.
//

#ifndef CCBox2D_CCBox2DPrivate_h
#define CCBox2D_CCBox2DPrivate_h

#import "CCBodySprite.h"
#import "CCWorldLayer.h"
#import <Box2D/Box2D.h>


@interface CCBodySprite (CCBox2DPrivate)
@property (nonatomic, readonly) b2Body *body;
@end

@interface CCWorldLayer (CCBox2DPrivate)
@property (nonatomic, readonly) b2World *world;
@end

class ContactConduit : public b2ContactListener
{
public:
    ContactConduit(id<ContactListenizer> listenizer);
    
	virtual void BeginContact(b2Contact* contact);
	virtual void EndContact(b2Contact* contact);
	virtual void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse);
	
	id<ContactListenizer> listener;
};


#endif
