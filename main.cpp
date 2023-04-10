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
    int height_floor;
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
        for(int g = 0; g < amount_building; g ++)
        {
            regionN[i].buildingN.push_back(building());
            cout << " name building: " << g + 1 << endl;
            cin >> regionN[i].buildingN[g].namebuilding;
            cout << "size building: " << g + 1 << endl;
            cin >> regionN[i].buildingN[g].sizebuilding;

        }

    }

    for(int i = 0; i < amount_region; i ++)
    {
       for(int g = 0; g < amount_building; g ++)
       {
           cout << regionN[i].buildingN[g].namebuilding << " building" << endl;

           cout << "enter amount floors:";
           cin >> amount_floor;

          for(int j = 0; j < amount_floor; j ++)
          {
              regionN[i].buildingN[g].floorN.push_back(floor());
              regionN[i].buildingN[g].floorN[j].namefloor = j + 1;
//              cout << "enter height ceiling: " << j +1 << endl;
//              cin >> regionN[i].buildingN[g].floorN[j].height_floor;
          }
       }
    }

    for(int i = 0; i < amount_region; i ++)
    {
        for(int g = 0; g < amount_building; g ++){

            for(int j = 0; j < amount_floor; j ++) {

                cout << regionN[i].buildingN[g].floorN[j].namefloor << " floor" << endl;
                cout << "enter amount rooms:";
                cin >> amount_room;

                for(int k = 0; k < amount_room; k ++){

                    regionN[i].buildingN[g].floorN[j].roomN.push_back(room());
                    cout << "enter name room:" << k + 1 << endl;
                    cin >> regionN[i].buildingN[g].floorN[j].roomN[k].nameroom;
                    cout << "enter size room:" << k + 1 << endl;
                    cin >> regionN[i].buildingN[g].floorN[j].roomN[k].sizeroom;

                }
            }

        }
    }

    for(int i = 0; i < amount_region; i ++){

        cout << "region: " << regionN[i].nameregion << ", ";
        cout << "size region: " << regionN[i].sizeregion << endl;

        for(int g = 0; g < amount_building; g ++){

            cout << "building: " << regionN[i].buildingN[g].namebuilding << ", ";
            cout << "size building: " << regionN[i].buildingN[g].sizebuilding << endl;

            for(int j = 0; j < amount_floor; j ++){

                cout << "floors: " << regionN[i].buildingN[g].floorN[j].namefloor << ", ";
//                cout << "height floor: " << regionN[i].buildingN[g].floorN[j].height_floor << endl;

                for(int k = 0; k < amount_room; k ++){

                    cout << "room: " << regionN[i].buildingN[g].floorN[j].roomN[k].nameroom << ", ";
                    cout << "size room: " << regionN[i].buildingN[g].floorN[j].roomN[k].sizeroom << endl;
                }
            }
        }
    }

    return 0;
}
