CCBox2D-Test
============

Alpha Testing of CCBox2D pod


This project ports across all the c++ sample code for box2d from cocos2d-iphone.
This is a work in progress.


In App Delegate

// switch this to run normal box2d demos
	 if (0){
	     [scene addChild: [MenuLayer menuWithEntryID:0]];
	 }else{
	     [scene  addChild: [[CCBox2DView alloc] initWithEntryID:0]]; 
	 }

![Alt text](/screenshots/kirbydemo.png "Apply Force demo")


Hook into callbacks on touch / start collision / end collision
![Alt text](/screenshots/CCbodysprite.png "Sample Code")



Podfile
============
	platform :ios, '5.0'

	# Using the Default
	pod 'box2d'
	pod 'cocos2d'
	pod 'CCBox2D' , :podspec => 'https://raw.github.com/jdp-global/CCBox2D/master/CCBox2D.podspec'






Goals
============
create ports of demo sample code across.
Stabilise Pod

