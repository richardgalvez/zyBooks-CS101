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

class Album {
    public:
        void SetName(string albumName) { name = albumName; }
        void InputSongs();
        void PrintName() const { cout << name << endl; }
        void PrintSongsLongerThan(int songDuration) const;

    private:
        string name;
        vector<Song> albumSongs;
};

void Album::InputSongs() {
    Song currSong;
    string currName;
    int currDuration;

    cin >> currName;
    while (currName != "quit") {
        cin >> currDuration;
        currSong.SetNameAndDuration(currName, currDuration);
        albumSongs.push_back(currSong);
        cin >> currName;
    }
}

void Album::PrintSongsLongerThan(int songDuration) const {
    unsigned int i;
    Song currSong;

    cout << "Songs longer than " << songDuration << " seconds:" << endl;

    for (i = 0; i < albumSongs.size(); i++) {
        if (albumSongs[i].GetDuration() > songDuration) {
            currSong = albumSongs[i];
            currSong.PrintSong();
        }
    }
}

int main() {
    Album musicAlbum;
    string albumName;

    getline(cin, albumName);
    musicAlbum.SetName(albumName);
    musicAlbum.InputSongs();
    musicAlbum.PrintName();
    musicAlbum.PrintSongsLongerThan(180);

    return 0;
}