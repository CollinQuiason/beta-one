//
// Created by Collin Rottinghaus on 2/24/2021.
//

#include "Network.h"

Network::Network() {}

Network::~Network() {

}

const vector<Layer> &Network::getLayers() const {
    return layers;
}

Network &Network::setLayers(const vector<Layer> &layers) {
    Network::layers = layers;
    return *this;
}
