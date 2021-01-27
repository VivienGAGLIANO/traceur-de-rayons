//
// Created by vivien on 27/01/2021.
//

#ifndef TRACEUR_DE_RAYONS_OUTPUTMANAGER_H
#define TRACEUR_DE_RAYONS_OUTPUTMANAGER_H


class OutputManager {
public:
    int lengthDefault = 1920;
    int widthDefault = 1080;

private:
    int length, width;

public:

    OutputManager();
    OutputManager(int, int);
    OutputManager(const OutputManager &);
    void renderScene();
};


#endif //TRACEUR_DE_RAYONS_OUTPUTMANAGER_H
