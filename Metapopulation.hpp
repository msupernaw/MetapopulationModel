
#ifndef METAPOPULATION_HPP
#define	METAPOPULATION_HPP

#include <vector>
#include <iostream>

#include "Subpopulation.hpp"
#include "Observation.hpp"
#include "Environment.hpp"

template<class T>
class Metapopulation {
    std::vector<Subpopulation<T> > subpopulations_m;
    Environment<T>* environment_m;
    Observation<T>* observation_m;

public:

    Metapopulation() {

    }

    operator T() {
        return this->Evaluate();
    }

    virtual const T Evaluate() {
        std::cout <<"Warning: virtual function \""<< __func__ << "\" not yet implemented!" << std::endl;
        return 0.0;
    }

    Environment<T>* GetEnvironment() const {
        return environment_m;
    }

    void SetEnvironment(Environment<T>* environment) {
        this->environment_m = environment;
    }

    Observation<T>* GetObservation() const {
        return observation_m;
    }

    void SetObservation(Observation<T>* observation) {
        this->observation_m = observation;
    }

    std::vector<Subpopulation<T> > GetSubpopulations() const {
        return subpopulations_m;
    }

    void SetSubpopulations(std::vector<Subpopulation<T> > subpopulations) {
        this->subpopulations_m = subpopulations;
    }


};

#endif	/* METAPOPULATION_HPP */

