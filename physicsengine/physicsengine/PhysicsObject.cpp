#include "PhysicsObject.h"

namespace Physics
{
	PhysicsObject::PhysicsObject()
	{
	}

	PhysicsObject::~PhysicsObject()
	{
	}
	
	std::vector<int> PhysicsObject::getposition()
	{
		return this->position;
	}

	void  PhysicsObject::setposition(std::vector<int> posit)
	{
		this->position = posit;
	}

	int  PhysicsObject::getitemid()
	{
		return this->itemid;
	}

	void  PhysicsObject::setitemid(int itemident)
	{
		this->itemid = itemident;
	}

	int  PhysicsObject::getcharge()
	{
		return this->charge;
	}

	void  PhysicsObject::setcharge(int chargetoset)
	{
		this->charge = chargetoset;
	}

	double  PhysicsObject::getmass()
	{
		return this->mass;
	}

	void  PhysicsObject::setmass(double masstoset)
	{
		this->mass = masstoset;
	}

	std::vector<double>  PhysicsObject::getvelocity()
	{
		return this->velocity;
	}

	void  PhysicsObject::setvelocity(std::vector<double> newv)
	{
		this->velocity = newv;
	}

	std::vector<double>  PhysicsObject::getaccel()
	{
		return this->acceleration;
	}
}