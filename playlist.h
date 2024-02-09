#ifndef PLAYLIST_H_
#define PLAYLIST_H_
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Playlist
{
public:
	Playlist();
	Playlist(vector <Song> songs, int number_of_songs);
	~Playlist();
	bool IsListFull() const;
	bool AppendSong(Song& song);
	bool RemoveSong(Song& song);
	bool RearrangeSong(vector <Song> songs);
	friend ostream& operator<<(ostream& os, const Playlist &rhs);
	friend istream& operator>>(istream& is, const Playlist &rhs);
	bool operator==(const Playlist& rhs) const;
	bool operator!=(const Playlist& rhs) const;
	bool operator<=(const Playlist& rhs) const;
	bool operator>=(const Playlist& rhs) const;
	Playlist& operator+=(const Playlist& rhs);
	Playlist& operator-=(const Playlist& rhs);
	Playlist operator+(const Playlist& rhs) const;
	Playlist operator-(const Playlist& rhs) const;

private:
	vector <Song> songs;
	int number_of_songs_;
};

class Song
{
public:
	Song();
	Song(string name);
	Song(string name, string artist);
	~Song();
private:
	string name_;
	string artist_;

};
#endif

