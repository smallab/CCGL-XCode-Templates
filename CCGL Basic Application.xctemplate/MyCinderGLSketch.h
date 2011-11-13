//
//  MyCinderGLSketch.h
//  CCGLBasic example
//
//  Created by Matthieu Savary on 03/03/11.
//  Copyright (c) 2011 SMALLAB.ORG. All rights reserved.
//
//  More info on the CCGL project >> http://www.smallab.org/code/ccgl/
//  License & disclaimer >> see license.txt file included in the distribution package
//

#include "CCGLView.h"

#include "cinder/Camera.h"
#include "cinder/MayaCamUI.h"

@interface MyCinderGLSketch : CCGLView
{
	MayaCamUI mMayaCam;
	int mCubeSize;
}

/**
 *  Cocoa UI methods
 */

- (void) setCubeSize: (int) bits;

@end
