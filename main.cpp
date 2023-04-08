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
        cout << "NameRegion: " << i+1 << endl;
        cin >> regionN[i].nameregion;
        cout << "SizeRegion: " << i+1 << endl;
        cin >> regionN[i].sizeregion;
    }

    

    cout << "hello world";

    cout << "footbal is the best play";

    return 0;
}
