//
// Created by vivien on 27/01/2021.
//

#include "OutputManager.h"

OutputManager::OutputManager() {
    OutputManager(OutputManager::lengthDefault, OutputManager::widthDefault);
}

OutputManager::OutputManager(int length, int width) : length(length), width(width) {}

OutputManager::OutputManager(const OutputManager &o) {
    OutputManager(o.length, o.width);
}

void OutputManager::renderScene() {

}
