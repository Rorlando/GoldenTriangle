//
//  TriangleViewController.h
//  GoldenTriangle
//
//  Created by Anthony Orlando on 10/18/12.
//  Copyright (c) 2012 Ryan Orlando. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import <Cocoa/Cocoa.h>

@interface TriangleViewController : GLKViewController//NSOpenGLView 

- (void) drawRect: (NSRect) bounds;

@end
