#ifndef MIX_H
#define MIX_H

namespace blacktip
{
	class Mix
	{
	private:
		char *name = (char*)"air";
		double fractionNitrogen = 0.79;
		double fractionHelium = 0.0;
		double fractionOxygen = 0.21;

	public:
		Mix(){}
		Mix(char *name, const double pN, const double pHe, const double pO);
		virtual ~Mix() {}

		char const *getName() {return name;}
		double getFractionNitrogen() const {return fractionNitrogen;}
		double getFractionHelium() const {return fractionHelium;}
		double getFractionOxygen() const {return fractionOxygen;}

		static Mix getMixAir();
		static Mix getMixEan32();
		static Mix getMixEan36();
	};
}

#endif
