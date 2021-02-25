//
// Created by colli on 2/24/2021.
//

#include "Layer.h"

const vector<Neuron> &Layer::getNeurons() const {
    return neurons;
}

Layer &Layer::setNeurons(const vector<Neuron> &neurons) {
    Layer::neurons = neurons;
    return *this;
}

bool Layer::isHidden1() const {
    return isHidden;
}

Layer &Layer::setIsHidden(bool isHidden) {
    Layer::isHidden = isHidden;
    return *this;
}
