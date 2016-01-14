/*basic starting point for the electron simulator 2015 physics engine*/

#include <string>
#include <vector>
#include <cmath>

using namespace std;

namespace physics
{
	double k; //vlaue of k
	double g; //value of g
	// other contants here, based on unit system or just arbatrarily doing stuff
	class item
	{
		vector<int> position;
		vector<double> velocity;
		vector<double> acceleration;
		double mass;
		int charge;
		int itemid;
	public:
		vector<int> getposition()
		{
			return position;
		}
		void setposition(vector<int> posit)
		{
			position = posit;
		}
		int getitemid()
		{
			return itemid;
		}
		void setitemid(int itemident)
		{
			itemident = itemid;
		}
		int getcharge()
		{
			return charge;
		}
		void setcharge(int chargetoset)
		{
			charge = chargetoset;
		}
		double getmass() 
		{
			return mass;
		}
		void setmass(double masstoset)
		{
			mass = masstoset;
		}
		vector<double> getvelocity()
		{
			return velocity;
		}
		void setvelocity(vector<double> newv)
		{
			velocity = newv;
		}
		vector<double> getaccel()
		{
			return acceleration;
		}
	};
	class positionalgrid
	{
		// first vector stores x cord, second stores y cord, and third stores spacial properties
		vector<vector<vector<int>>> playingfield;
		vector<int> dimension;
	public:
		void initializegrid()
		{
			for (int i = 0; i < dimension.size(); i++)
			{
				for (int j = 0; j < 2; j++)
				{
					dimension[i][j][0] = 0;
					dimension[i][j][1] = 0;
				}
			}
		}
		void setdimensions(vector<int> dimensions)
		{
			dimension = dimensions;
		}
		void addobject(item itemtoadd)
		{
			vector<int> position = itemtoadd.getposition();
			playingfield[position[0]][position[1]][0] = itemtoadd.getitemid();
			playingfield[position[0]][position[1]][1] = itemtoadd.getcharge();
		}
		vector<vector<vector<int>>> getfield()
		{
			return playingfield;
		}
		void setplayingfield(vector<vector<vector<int>>> newplayigfield)
		{
			playingfield = newplayigfield;
		}
	};
	vector<double> accelfinder (item itemtouse, positionalgrid plane)
	{
		vector<int> charges;
		vector<vector<int>> relativedists;
		vector<double> accel = { 0, 0 };
		vector<vector<vector<int>>> grid = plane.getfield();
		int m;
		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid[i].size(); j++)
			{
				if (grid[i][j][0] != 0)
				{
					charges[m] = grid[i][j][1];
					relativedists[m][0] = itemtouse.getposition()[0] - i;
					relativedists[m][1] = itemtouse.getposition()[1] - j;
					m++;
				}
			}
		}
		for (int u = 0; u < m; u++)
		{
			accel[0] += itemtouse.getmass() / ((k * charges[u] * itemtouse.getcharge()) / (relativedists[u][0] ^ 2));
			accel[1] += itemtouse.getmass() / ((k * charges[u] * itemtouse.getcharge()) / (relativedists[u][1] ^ 2));
		}
		return accel;
	}
}
