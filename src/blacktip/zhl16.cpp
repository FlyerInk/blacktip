#include "zhl16.h"

namespace blacktip 
{
	AlgorithimZHL16::AlgorithimZHL16() 
	{
		numCompartments = NUM_COMPARTMENTS;

		compartment = new Compartment[NUM_COMPARTMENTS]
		{
			Compartment(COMPARTMENT1B_HALFTIME, COMPARTMENT1B_MVALUE, COMPARTMENT1B_SLOPE),
			Compartment(COMPARTMENT2_HALFTIME, COMPARTMENT2_MVALUE, COMPARTMENT2_SLOPE),
			Compartment(COMPARTMENT3_HALFTIME, COMPARTMENT3_MVALUE, COMPARTMENT3_SLOPE),
			Compartment(COMPARTMENT4_HALFTIME, COMPARTMENT4_MVALUE, COMPARTMENT4_SLOPE),
			Compartment(COMPARTMENT5_HALFTIME, COMPARTMENT5_MVALUE, COMPARTMENT5_SLOPE),
			Compartment(COMPARTMENT6_HALFTIME, COMPARTMENT6_MVALUE, COMPARTMENT6_SLOPE),
			Compartment(COMPARTMENT7_HALFTIME, COMPARTMENT7_MVALUE, COMPARTMENT7_SLOPE),
			Compartment(COMPARTMENT8_HALFTIME, COMPARTMENT8_MVALUE, COMPARTMENT8_SLOPE),
			Compartment(COMPARTMENT9_HALFTIME, COMPARTMENT9_MVALUE, COMPARTMENT9_SLOPE),
			Compartment(COMPARTMENT10_HALFTIME, COMPARTMENT10_MVALUE, COMPARTMENT10_SLOPE),
			Compartment(COMPARTMENT11_HALFTIME, COMPARTMENT11_MVALUE, COMPARTMENT11_SLOPE),
			Compartment(COMPARTMENT12_HALFTIME, COMPARTMENT12_MVALUE, COMPARTMENT12_SLOPE),
			Compartment(COMPARTMENT13_HALFTIME, COMPARTMENT13_MVALUE, COMPARTMENT13_SLOPE),
			Compartment(COMPARTMENT14_HALFTIME, COMPARTMENT14_MVALUE, COMPARTMENT14_SLOPE),
			Compartment(COMPARTMENT15_HALFTIME, COMPARTMENT15_MVALUE, COMPARTMENT15_SLOPE),
			Compartment(COMPARTMENT16_HALFTIME, COMPARTMENT16_MVALUE, COMPARTMENT16_SLOPE)
		};
	}

	AlgorithimZHL16::~AlgorithimZHL16()
	{
		delete [] compartment;
	}
}