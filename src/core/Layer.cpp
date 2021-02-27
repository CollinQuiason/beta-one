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

bool Layer::isHidden() const {
    return hidden;
}

Layer &Layer::setIsHidden(bool isHidden) {
    Layer::hidden = isHidden;
    return *this;
}

Layer::Layer() {}

Layer::Layer(vector<Neuron> &neurons) {
    Layer::neurons = neurons;
}