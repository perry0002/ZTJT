//
//  DrawObject.h
//  ZTJT
//
//  Created by PerryMac on 3/19/14.
//  Copyright (c) 2014 PerryMac. All rights reserved.
//

#ifndef __ZTJT__GraphicObject__
#define __ZTJT__GraphicObject__

#include "TypeDef.h"
#include "ZTObject.h"

class GraphicObject : public ZTObject {
    PROTECTED_CONSTRUCTOR_DECLARE(GraphicObject)
    PROTECTED_PROPERTY(ZTBOOL, Focus)
    PROTECTED_PROPERTY(ZTBOOL, Drawing)
    
};

#endif /* defined(__ZTJT__DrawObject__) */