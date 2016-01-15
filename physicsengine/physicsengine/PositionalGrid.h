#include "pch.h"
#include "PhysicsObject.h"
namespace Physics
{
	class PositionalGrid
	{
	public:
		PositionalGrid();
		~PositionalGrid();
		void initializeGrid();
		void setDimensions(std::vector<int> dimensions);
		void addObject(PhysicsObject itemtoadd);
		std::vector<std::vector<std::vector<int>>> getField();
		void setPlayingField(std::vector<std::vector<std::vector<int>>> newplayigfield);
	private:
		std::vector<std::vector<std::vector<int>>> playingfield;
		std::vector<int> dimension;
	};

	PositionalGrid::PositionalGrid()
	{

	}

	PositionalGrid::~PositionalGrid()
	{

	}

}