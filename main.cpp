#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct room {
    string nameroom;
    int sizeroom;
};

struct floor {
    int namefloor;
    vector<room> roomN;
};

struct building {
    string namebuilding;
    int sizebuilding;
    vector<floor> floorN;
};

struct region {
    string nameregion;
    int sizeregion;
    vector<building> buildingN;
};

int main() {
    int amount_region = 0;
    int amount_building = 0;
    int amount_floor = 0;
    int amount_room = 0;
    vector<region> regionN;
    vector<building> biuldingN;
    vector<floor> floorN;
    vector<room> roomN;

    cout << "enter amount regions:";
    cin >> amount_region;
    for (int i = 0; i < amount_region; i++) {
        regionN.push_back(region());
        cout << "Name region: " << i+1 << endl;
        cin >> regionN[i].nameregion;
        cout << "Size region: " << i+1 << endl;
        cin >> regionN[i].sizeregion;
    }

    for(int i = 0; i < amount_region; i ++)
    {
        cout << regionN[i].nameregion << " region" << endl;
        cout << "amount building: ";
        cin >> amount_building;
        for(int k = 0; k < amount_building; i ++)
        {
            regionN[i].buildingN.push_back(building());
            cout << " name building: " << k + 1;
            cin >> regionN[i].buildingN[k].namebuilding;
            cout << "size building: " << k + 1 ;
            cin >> regionN[i].buildingN[k].sizebuilding;

        }

    }

    for(int i = 0; i < amount_region; i ++)
    {
       for(int g = 0; g < amount_building; g ++)
       {
           cout << regionN[i].buildingN[g].namebuilding << endl;

       cout << "enter amount floors:";
       cin >> amount_floor;
          for(int j = 0; j < amount_floor; j ++)
          {
              regionN[i].buildingN[g].floorN.push_back(floor());
              regionN[i].buildingN[g].floorN[j].namefloor = j + 1;
          }
       }
    }



    return 0;
}
