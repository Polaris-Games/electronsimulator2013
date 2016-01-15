#include "PositionalGrid.h"

namespace Physics
{
	void PositionalGrid::initializeGrid()
	{
		for (int i = 0; i < dimension.size(); i++)
		{
			for (int j = 0; j < 2; j++)
			{
				playingfield[i][j][0] = 0;
				playingfield[i][j][1] = 0;
			}
		}
	}
	
	void  PositionalGrid::setDimensions(std::vector<int> dimensions)
	{
		dimension = dimensions;
	}

	void  PositionalGrid::addObject(PhysicsObject itemtoadd)
	{
		std::vector<int> position = itemtoadd.getposition();
		playingfield[position[0]][position[1]][0] = itemtoadd.getitemid();
		playingfield[position[0]][position[1]][1] = itemtoadd.getcharge();
	}

	std::vector<std::vector<std::vector<int>>>  PositionalGrid::getField()
	{
		return playingfield;
	}

	void PositionalGrid::setPlayingField(std::vector<std::vector<std::vector<int>>> newplayigfield)
	{
		playingfield = newplayigfield;
	}
}