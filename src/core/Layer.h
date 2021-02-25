//
// Created by Collin Rottinghaus on 2/24/2021.
//

#ifndef CPPCCNN_LAYER_H
#define CPPCCNN_LAYER_H


#include "Neuron.h"

class Layer {
private:
    bool isHidden;
    vector<Neuron> neurons;
public:
    [[nodiscard]] bool isHidden1() const;

    Layer &setIsHidden(bool isHidden);

    [[nodiscard]] const vector<Neuron> &getNeurons() const;

    Layer &setNeurons(const vector<Neuron> &neurons);
};

#endif //CPPCCNN_LAYER_H