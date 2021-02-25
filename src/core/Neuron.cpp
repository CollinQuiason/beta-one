//
// Created by Collin Rottinghaus on 2/24/2021.
//

#include "Neuron.h"


Neuron::Neuron() {}

const vector<Neuron> & Neuron::getConnections() const {
    return connections;
}

Neuron& Neuron::setConnections(const vector<Neuron> &neurons) {
    Neuron::connections = neurons;
    return *this;
}

const vector<int> &Neuron::getWeights() const {
    return weights;
}

Neuron& Neuron::setWeights(const vector<int> &connectionWeights) {
    Neuron::weights = weights;
    return *this;
}

