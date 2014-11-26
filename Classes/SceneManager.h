//
//  SceneManager.h
//  XiaoMieStar
//
//  Created by wwj on 14/11/25.
//
//

#ifndef __XiaoMieStar__SceneManager__
#define __XiaoMieStar__SceneManager__

#include <stdio.h>
#include "cocos2d.h"
using namespace cocos2d;

class SceneManager
{
public:
    ~SceneManager();
    SceneManager* getMe();
private:
    SceneManager();
    SceneManager* instance;
};

#endif /* defined(__XiaoMieStar__SceneManager__) */
