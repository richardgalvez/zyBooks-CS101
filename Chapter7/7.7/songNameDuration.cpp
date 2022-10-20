#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
    public:
        void SetNameAndDuration(string songName, int songDuration) {
            name = songName;
            duration = songDuration;
        }
        void PrintSong() const {
            cout << name << " - " << duration << endl;
        }
        string GetName() const { return name; }
        int GetDuration() const { return duration; }

    private:
        string name;
        int duration;
};

int main() {
    vector<Song> songs;
    Song newSong;
    string songName;
    int songDuration;
    unsigned int i;

    cin >> songName;
    while (songName != "quit") {
        cin >> songDuration;
        newSong.SetNameAndDuration(songName, songDuration);
        songs.push_back(newSong);
        cin >> songName;
    }

    for (i = 0; i < songs.size(); ++i) {
        newSong = songs.at(i);
        newSong.PrintSong();
    }

    return 0;
}