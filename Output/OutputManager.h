//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_OUTPUTMANAGER_H
#define TRACEUR_DE_RAYONS_OUTPUTMANAGER_H


class OutputManager {
public:
    static const int lengthDefault = 1920;
    static const int widthDefault = 1080;

private:
    int length, width;

public:
    explicit OutputManager(int length = OutputManager::lengthDefault, int width = widthDefault);
    OutputManager(const OutputManager &);
    void renderScene();
};


#endif //TRACEUR_DE_RAYONS_OUTPUTMANAGER_H
