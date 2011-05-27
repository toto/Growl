//
//  GrowlNotificationView.h
//  Growl
//
//  Created by Jamie Kirkpatrick on 27/11/05.
//  Copyright 2005-2006  Jamie Kirkpatrick. All rights reserved.
//

@interface GrowlNotificationView : NSView {
	BOOL				initialDisplayTest;
	BOOL				mouseOver;
	BOOL				closeOnMouseExit;
	NSPoint				closeBoxOrigin;
	SEL					action;
	id					target;
	NSTrackingRectTag	trackingRectTag;
}

- (id) target;
- (void) setTarget:(id)object;

- (SEL) action;
- (void) setAction:(SEL)selector;

- (BOOL) mouseOver;
- (void) setCloseOnMouseExit:(BOOL)flag;

+ (NSButton *) closeButton;
- (BOOL) showsCloseBox;
- (void) setCloseBoxVisible:(BOOL)yorn;
- (void) setCloseBoxOrigin:(NSPoint)inOrigin;
@end
