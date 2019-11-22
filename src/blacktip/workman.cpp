#include "workman.h"

namespace blacktip 
{
	AlgorithimWorkman::AlgorithimWorkman() 
	{
		numCompartments = NUM_COMPARTMENTS;

		compartment = new Compartment[NUM_COMPARTMENTS]
		{
			Compartment(COMPARTMENT_5MIN_HALFTIME, COMPARTMENT_5MIN_MVALUE, COMPARTMENT_5MIN_SLOPE),
			Compartment(COMPARTMENT_10MIN_HALFTIME, COMPARTMENT_10MIN_MVALUE, COMPARTMENT_10MIN_SLOPE),
			Compartment(COMPARTMENT_20MIN_HALFTIME, COMPARTMENT_20MIN_MVALUE, COMPARTMENT_20MIN_SLOPE),
			Compartment(COMPARTMENT_40MIN_HALFTIME, COMPARTMENT_40MIN_MVALUE, COMPARTMENT_40MIN_SLOPE),
			Compartment(COMPARTMENT_80MIN_HALFTIME, COMPARTMENT_80MIN_MVALUE, COMPARTMENT_80MIN_SLOPE),
			Compartment(COMPARTMENT_120MIN_HALFTIME, COMPARTMENT_120MIN_MVALUE, COMPARTMENT_120MIN_SLOPE),
			Compartment(COMPARTMENT_160MIN_HALFTIME, COMPARTMENT_160MIN_MVALUE, COMPARTMENT_160MIN_SLOPE),
			Compartment(COMPARTMENT_200MIN_HALFTIME, COMPARTMENT_200MIN_MVALUE, COMPARTMENT_200MIN_SLOPE),
			Compartment(COMPARTMENT_240MIN_HALFTIME, COMPARTMENT_240MIN_MVALUE, COMPARTMENT_240MIN_SLOPE)
		};
	}

	AlgorithimWorkman::~AlgorithimWorkman()
	{
		delete [] compartment;
	}

}