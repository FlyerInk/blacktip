#ifndef RECPLANNER_H
#define RECPLANNER_H

#include "diveplanner.h"
#include "o2toxicity.h"

namespace blacktip
{
	enum DiveMode {SURF, DIVE, DECO, SSTP, DSTP, BSTP};

	class RecreationalPlanner : public DivePlanner
	{
	private:
		double depth = 0.0;
		Mix mix;
		AscentMeter ascentMeter;
		O2Toxicity o2toxicity;

		const double REPETIVE_DIVE_MINS = 360.0;
		const double SINGLE_DIVE_NO_FLY_MINS = 720.0;
		const double MULTI_DIVE_NO_FLY_MINS = 1080.0;
		const double MAX_NO_SAFETY_STOP_DEPTH = 99.999;
		const double MAX_SAFETY_STOP_M_THRESHOLD = 85.0;
		const double MODEL_VIOLATION_NODIVE_MINUTES = 1440.0;
		const double O2_TOXICITY_RESET_MINUTES = 1440.0;

		bool requiredSafetyStop = false;
		bool requiredDecompressionStop = false;
		double repetitiveDiveMinutes = 0.0;
		double noFlyMinutes = 0.0;
		double noDiveMinutes = 0.0;
		double o2ToxicityResetMinutes = O2_TOXICITY_RESET_MINUTES;
		int diveNumber = 0;
		bool diveInProgress = false;
		int gradientFactor = 100;

		void setState(const unsigned long millis, const double depth);
		void startDive();
		void endDive();
		void checkSafetyStopRequired(const double depth);
		void checkDecompressionStopRequired(const double depth);
		void checkModelViolation(const double depth);
		void decrementSurfaceTimers(const unsigned long millis);
		void decrementTimers(const unsigned long millis);

	public:
		RecreationalPlanner(char const *algorithimName);
		virtual ~RecreationalPlanner();

		void calculate(const unsigned long millis, const double depth);
		void setMix(const Mix mix);
		Mix getMix() {return mix;}
		void setGradientFactor(int gradientFactor) {RecreationalPlanner::gradientFactor = gradientFactor;}
		AscentMeter &getAscentMeter() {return ascentMeter;}
		int getDiveNumber() const {return diveNumber;}
		bool getSafetyStopRequired() const {return requiredSafetyStop;}
		bool getDecompressionStopRequired() const {return requiredDecompressionStop;}
		bool getDiveInProgress() const {return diveInProgress;}
		double getRepetitiveDiveMinutes() const {return repetitiveDiveMinutes;}
		double getNoFlyMinutes() const {return noFlyMinutes;}
		double getNoDiveMinutes() const {return noDiveMinutes;}
		const O2Toxicity& getO2Toxicity() const {return o2toxicity;}
	};
}

#endif
