//
// Created by Collin Rottinghaus on 2/24/2021.
//

#ifndef CPPCCNN_NEURON_H
#define CPPCCNN_NEURON_H

#include <iostream>
#include <vector>

using namespace std;

class Neuron {
private:
    vector<Neuron> connections;
    vector<int> weights;
public:
    Neuron();

    [[nodiscard]] const vector<Neuron> &getConnections() const;

    Neuron &setConnections(const vector<Neuron> &neurons);

    [[nodiscard]] const vector<int> &getWeights() const;

    Neuron &setWeights(const vector<int> &weights);
};


#endif //CPPCCNN_NEURON_H
