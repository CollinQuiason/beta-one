//
// Created by Collin Rottinghaus on 2/24/2021.
//

#ifndef CPPCCNN_LAYER_H
#define CPPCCNN_LAYER_H


#include "Neuron.h"

class Layer {
private:
    Layer(vector<Neuron> &neurons);

    bool hidden;
    vector<Neuron> neurons;
public:
    Layer();

    [[nodiscard]] bool isHidden() const;

    Layer &setIsHidden(bool isHidden);

    [[nodiscard]] const vector<Neuron> &getNeurons() const;

    Layer &setNeurons(const vector<Neuron> &neurons);
};

#endif //CPPCCNN_LAYER_H