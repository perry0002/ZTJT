//
//  Lamp.h
//  ZTJT
//  路灯
//  Created by PerryMac on 3/20/14.
//  Copyright (c) 2014 PerryMac. All rights reserved.
//

#ifndef __ZTJT__Lamp__
#define __ZTJT__Lamp__
#include "TypeDef.h"
#include "GraphicObject.h"

namespace ZTNAMESPACE
{
    
    class Lamp : public GraphicObject
    {
    public:
        Lamp();
        Lamp(POINT center, LampType type);
        ~Lamp();
        
        PRIVATE_PROPERTY(POINT,Center)
        PRIVATE_PROPERTY(LampType,Type)
        
    public:
        static ZTBOOL CanInSameGroup(const Lamp *lamp1, const Lamp*lamp2);
        
        ZTBOOL HitTest(POINT point);
        
        void GenerateBinary(BYTE *&pByte, INT &length);
    };
    
}

#endif /* defined(__ZTJT__Lamp__) */
