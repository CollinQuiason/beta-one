//
// Created by Collin Rottinghaus on 2/24/2021.
//

#ifndef CPPCCNN_NETWORK_H
#define CPPCCNN_NETWORK_H

#include "Layer.h"

using namespace std;

class Network {
private:
    vector<Layer> layers;
public:
    virtual ~Network();

    Network();

    const vector<Layer> &getLayers() const;

    Network & setLayers(const vector<Layer> &layers);

};

#endif //CPPCCNN_NETWORK_H