//
//  SceneManager.cpp
//  XiaoMieStar
//
//  Created by wwj on 14/11/25.
//
//

#include "SceneManager.h"

SceneManager::SceneManager()
{
    instance = NULL;
}

SceneManager::~SceneManager()
{
    delete instance;
    instance = NULL;
}

SceneManager* SceneManager::getMe()
{
    if (instance==NULL) {
        instance = new SceneManager;
    }
    return instance;
}