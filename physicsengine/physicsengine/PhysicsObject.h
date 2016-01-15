#include "pch.h"

namespace Physics
{
	class PhysicsObject
	{
		
	public:
		PhysicsObject();
		~PhysicsObject();
		std::vector<int> getposition();
		void setposition(std::vector<int> posit);
		int getitemid();
		void setitemid(int itemident);
		int getcharge();
		void setcharge(int chargetoset);
		double getmass();
		void setmass(double masstoset);
		std::vector<double> getvelocity();
		void setvelocity(std::vector<double> newv);
		std::vector<double> getaccel();
	private:
		std::vector<int> position;
		std::vector<double> velocity;
		std::vector<double> acceleration;
		double mass;
		int charge;
		int itemid;
	};

}
