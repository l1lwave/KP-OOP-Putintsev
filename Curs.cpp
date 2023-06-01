#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <sstream>

using namespace std;

//???? ????????
class CulturalFacility {
public:
	string name;
	string type;
	int capacity;

	CulturalFacility(string name, string type, int capacity) {
		this->name = name;
		this->type = type;
		this->capacity = capacity;
	}
};

//????? ???? ????????
void printAllFacilities(const vector<CulturalFacility>& facilities) {
	cout << "All Cultural Buildings:" << endl;
	for (const auto& facility : facilities) {
		cout << "Name: " << facility.name << ", Type: " << facility.type << ", Capacity: " << facility.capacity << endl;
	}
}

//????? ???????? ?? ?? ?????
vector<CulturalFacility> filterByType(const vector<CulturalFacility>& facilities, string targetType) {
	vector<CulturalFacility> filteredFacilities;
	for (const auto& facility : facilities) {
		if (facility.type == targetType) {
			filteredFacilities.push_back(facility);
		}
	}
	return filteredFacilities;
}

//????? ???????? ?? ?? ?????????
vector<CulturalFacility> filterByCapacity(const vector<CulturalFacility>& facilities, int minCapacity) {
	vector<CulturalFacility> filteredFacilities;
	for (const auto& facility : facilities) {
		if (facility.capacity >= minCapacity) {
			filteredFacilities.push_back(facility);
		}
	}
	return filteredFacilities;
}

//???? ????????
class ARTIST {
private:
	string name_artist;
	string suname_artist;
	int age;
	int numb_ganre;
	int numb_impresario;
	string ganre_artist;
	string impresario_artist;
	vector<vector<string> > genres_history_;
	vector<vector<string> > impresarios_history_;

public:
	int user_marks1;
	int user_marks2;
	int user_marks3;
	int user_marks4;
	void artist1();
	void artist2();
	void artist3();
	void artist4();
	void artist5();
	void pattern();
	void input_ARTIST();
	void output_ARTIST();
	vector<string> genres_;
	vector<string> impresario_;
	vector<ARTIST> find_ARTIST_by_genre(string genre);
	vector<ARTIST> find_ARTIST_by_impresario(string impresario);
	bool isMultiGenre();
	vector<ARTIST> find_ARTIST_by_genre2(string genre);
	void Export();
};

//????????? ??????? ?1 ??? ??????
void ARTIST::artist1() {
	name_artist = "Maksim";
	suname_artist = "Franuk";
	age = 34;
	genres_.clear();
	impresario_.clear();
	genres_.push_back("Classic");
	genres_.push_back("Rock");
	genres_history_.push_back(genres_);
	impresario_.push_back("Ivanov");
	impresarios_history_.push_back(impresario_);
	user_marks1 = 20;
	user_marks2 = 60;
	user_marks3 = 55;
	user_marks4 = 15;
}

//????????? ??????? ?2 ??? ??????
void ARTIST::artist2() {
	name_artist = "Oleg";
	suname_artist = "Petriv";
	age = 21;
	genres_.clear();
	impresario_.clear();
	genres_.push_back("Rock");
	genres_history_.push_back(genres_);
	impresario_.push_back("Mikulyan");
	impresarios_history_.push_back(impresario_);
	user_marks1 = 32;
	user_marks2 = 75;
	user_marks3 = 10;
	user_marks4 = 5;
}

//????????? ??????? ?3 ??? ??????
void ARTIST::artist3() {
	name_artist = "Vasyl";
	suname_artist = "Mihovskiu";
	age = 45;
	genres_.clear();
	impresario_.clear();
	genres_.push_back("Classic");
	genres_.push_back("Jazz");
	genres_history_.push_back(genres_);
	impresario_.push_back("Ivanov");
	impresarios_history_.push_back(impresario_);
	user_marks1 = 45;
	user_marks2 = 30;
	user_marks3 = 25;
	user_marks4 = 89;
}

//????????? ??????? ?4 ??? ??????
void ARTIST::artist4() {
	name_artist = "Mukuta";
	suname_artist = "Franuk";
	age = 35;
	genres_.clear();
	impresario_.clear();
	genres_.push_back("Classic");
	genres_history_.push_back(genres_);
	impresario_.push_back("Promich");
	impresario_.push_back("Mikulyan");
	impresarios_history_.push_back(impresario_);
	user_marks1 = 33;
	user_marks2 = 52;
	user_marks3 = 98;
	user_marks4 = 55;
}

//????????? ??????? ?5 ??? ??????
void ARTIST::artist5() {
	name_artist = "Rostislav";
	suname_artist = "Doruk";
	age = 34;
	genres_.clear();
	impresario_.clear();
	genres_.push_back("Classic");
	genres_.push_back("Rock");
	genres_history_.push_back(genres_);
	impresario_.push_back("Kruchivskiu");
	impresarios_history_.push_back(impresario_);
	user_marks1 = 50;
	user_marks2 = 69;
	user_marks3 = 88;
	user_marks4 = 22;
}

//????????? ???????? ????
vector<ARTIST> A2;
ARTIST artist;
int count = 0;

//??????? ????? ???????? ? ?????? ????????
void ARTIST::pattern() {
	if (count < 15) {
		artist.artist1();
		A2.push_back(artist);
		count++;

		artist.artist2();
		A2.push_back(artist);
		count++;

		artist.artist3();
		A2.push_back(artist);
		count++;

		artist.artist4();
		A2.push_back(artist);
		count++;

		artist.artist5();
		A2.push_back(artist);
		count++;
		cout << "Additing is finished" << endl;
	}
}

//??????? ????? ????????
void ARTIST::input_ARTIST() {
	cout << "Enter artist's first name: " << endl;
	cin >> name_artist;
	cout << "Enter artist's last name: " << endl;
	cin >> suname_artist;
	cout << "Enter artist's age: " << endl;
	cin >> age;
	cout << "The number of genres in which the artist plays: " << endl;
	cin >> numb_ganre;
	for (size_t i = 0; i < numb_ganre; i++)
	{
		cout << "Enter artist genre #" << (i + 1) << ": " << endl;
		cin >> ganre_artist;
		genres_.push_back(ganre_artist);
		genres_history_.push_back(genres_);
	}

	cout << "The number of artist's impresarios in which the artist plays: " << endl;
	cin >> numb_impresario;
	for (size_t i = 0; i < numb_impresario; i++)
	{
		cout << "Enter artist impresario #" << (i + 1) << ": " << endl;
		cin >> impresario_artist;
		impresario_.push_back(impresario_artist);
		impresarios_history_.push_back(impresario_);
	}
	cout << "Enter artist's marks for Concert #1: ";
	cin >> user_marks1;
	cout << "Enter artist's marks for Concert #2: ";
	cin >> user_marks2;
	cout << "Enter artist's marks for Concert #3: ";
	cin >> user_marks3;
	cout << "Enter artist's marks for Concert #4: ";
	cin >> user_marks4;
}

//??????? ?????? ????????
void ARTIST::output_ARTIST() {
	cout << "Artist's first and last name: " << name_artist << " " << suname_artist << endl;
	cout << "Artist's age: " << age << " y.o." << endl;
	cout << "Artist's ganres: ";
	for (size_t i = 0; i < genres_.size(); i++)
	{
		cout << genres_[i] << "; ";
	}
	cout << endl;
	cout << "Artist's impresarios: ";
	for (size_t i = 0; i < impresario_.size(); i++)
	{
		cout << impresario_[i] << "; ";
	}
	cout << endl;
	cout << "Artist's marks for Concert #1: " << user_marks1 << endl;
	cout << "Artist's marks for Concert #2: " << user_marks2 << endl;
	cout << "Artist's marks for Concert #3: " << user_marks3 << endl;
	cout << "Artist's marks for Concert #4: " << user_marks4 << endl;
}

//??????? ?????? ???????? ?? ??????
vector<ARTIST> ARTIST::find_ARTIST_by_genre(string genre) {
	int numb_artist = 1;
	vector<ARTIST> matching_artists;
	for (size_t i = 0; i < genres_history_.size(); i++) {
		for (size_t j = 0; j < genres_history_[i].size(); j++) {
			if (genres_history_[i][j] == genre) {
				matching_artists.push_back(A2[i]);
				break;
			}
		}
	}
	return matching_artists;
}

//??????? ?????? ???????? ?? ??????????
vector<ARTIST> ARTIST::find_ARTIST_by_impresario(string impresario) {
	vector<ARTIST> matching_artists;
	for (size_t i = 0; i < impresarios_history_.size(); i++) {
		for (size_t j = 0; j < impresarios_history_[i].size(); j++) {
			if (impresarios_history_[i][j] == impresario) {
				matching_artists.push_back(A2[i]);
				break;
			}
		}
	}
	return matching_artists;
}

bool ARTIST::isMultiGenre() {
	return genres_.size() > 1;
}

//??????? ?????? ?????????? ?? ??????
vector<string> getImpresariosByGenre(const vector<ARTIST>& artists, string genre) {
	vector<string> impresarios;
	for (const auto& artist : artists) {
		for (const auto& artistGenre : artist.genres_) {
			if (artistGenre == genre) {
				for (const auto& impresario : artist.impresario_) {
					impresarios.push_back(impresario);
				}
				break;
			}
		}
	}
	return impresarios;
}

//???? ????????????
class Organizer {
public:
	string name;
	Organizer(string name) {
		this->name = name;
	}
};

//???? ???????
class ConcertEvent {
public:
	string name;
	const Organizer* organizer;
	const CulturalFacility* facility;
	string date;

	ConcertEvent(string name, const Organizer* organizer, const CulturalFacility* facility, string date) {
		this->name = name;
		this->organizer = organizer;
		this->facility = facility;
		this->date = date;
	}
};

//??????? ?????? ?? ?????? ???????, ?? ?????????????, ?? ?????
vector<ConcertEvent> searchConcertsByFacility(const vector<ConcertEvent>& events, const vector<Organizer>& organizers, string targetFacility, string startDate, string endDate, string targetOrganizer) {
	vector<ConcertEvent> filteredConcerts;
	for (const auto& event : events) {
		if ((targetFacility.empty() || event.facility->name == targetFacility) &&
			(startDate.empty() || event.date >= startDate) &&
			(endDate.empty() || event.date <= endDate) &&
			(targetOrganizer.empty() || event.organizer->name == targetOrganizer)) {
			filteredConcerts.push_back(event);
		}
	}
	return filteredConcerts;
}

//?????
void search_concerts() {
	vector<CulturalFacility> facilities;
	facilities.push_back(CulturalFacility("Museum", "Museum", 100));
	facilities.push_back(CulturalFacility("Theart", "Theart", 500));
	facilities.push_back(CulturalFacility("Concert Hall", "Hall", 1000));
	facilities.push_back(CulturalFacility("Gallery", "Museum", 50));

	vector<Organizer> organizers;
	organizers.push_back(Organizer("Organizer A"));
	organizers.push_back(Organizer("Organizer B"));
	organizers.push_back(Organizer("Organizer C"));

	vector<ConcertEvent> concerts;
	concerts.push_back(ConcertEvent("Concert 1", &organizers[0], &facilities[0], "2023-05-21 19:30"));
	concerts.push_back(ConcertEvent("Concert 2", &organizers[1], &facilities[1], "2023-05-22 20:00"));
	concerts.push_back(ConcertEvent("Concert 3", &organizers[0], &facilities[2], "2023-05-23 18:45"));
	concerts.push_back(ConcertEvent("Concert 4", &organizers[2], &facilities[3], "2023-05-24 21:15"));

	string targetFacility;
	cout << "Enter the name of the cultural facility (leave empty to skip): ";
	cin.ignore();
	getline(cin, targetFacility);

	string targetOrganizer;
	cout << "Enter the name of the organizer (leave empty to skip): ";
	getline(cin, targetOrganizer);

	string startDate;
	cout << "Enter the start date(YYYY-MM-DD) (leave empty to skip): ";
	getline(cin, startDate);

	string endDate;
	cout << "Enter the end date(YYYY-MM-DD) (leave empty to skip): ";
	getline(cin, endDate);

	vector<ConcertEvent> filteredConcerts = searchConcertsByFacility(concerts, organizers, targetFacility, startDate, endDate, targetOrganizer);

	if (filteredConcerts.empty()) {
		cout << "There are no concerts that meet the specified conditions." << endl;
	}
	else {
		cout << "Results:" << endl;
		for (const auto& concert : filteredConcerts) {
			cout << "Name: " << concert.name << ", Organizer: " << concert.organizer->name << ", Building: " << concert.facility->name << ", Date: " << concert.date << endl;
		}
	}
}

//??????? ?????? ????????? ? ???????? ?1
void Winners_concurs1() {
	vector<ARTIST> max_artists;
	int max_marks = 1;
	for (size_t i = 0; i < A2.size(); i++) {
		if (A2[i].user_marks1 > max_marks) {
			max_artists.clear();
			max_artists.push_back(A2[i]);
			max_marks = A2[i].user_marks1;
		}
		else if (A2[i].user_marks1 == max_marks) {
			max_artists.push_back(A2[i]);
		}
	}
	if (!max_artists.empty()) {
		cout << "Artist(s) with the highest user marks:" << endl;
		max_artists[0].output_ARTIST();
	}
	else {
		cout << "No artists found." << endl;
	}
}

//??????? ?????? ????????? ? ???????? ?2
void Winners_concurs2() {
	vector<ARTIST> max_artists;
	int max_marks = 1;
	for (size_t i = 0; i < A2.size(); i++) {
		if (A2[i].user_marks2 > max_marks) {
			max_artists.clear();
			max_artists.push_back(A2[i]);
			max_marks = A2[i].user_marks2;
		}
		else if (A2[i].user_marks2 == max_marks) {
			max_artists.push_back(A2[i]);
		}
	}
	if (!max_artists.empty()) {
		cout << "Artist(s) with the highest user marks:" << endl;
		max_artists[0].output_ARTIST();
	}
	else {
		cout << "No artists found." << endl;
	}
}

//??????? ?????? ????????? ? ???????? ?3
void Winners_concurs3() {
	vector<ARTIST> max_artists;
	int max_marks = 1;
	for (size_t i = 0; i < A2.size(); i++) {
		if (A2[i].user_marks3 > max_marks) {
			max_artists.clear();
			max_artists.push_back(A2[i]);
			max_marks = A2[i].user_marks3;
		}
		else if (A2[i].user_marks4 == max_marks) {
			max_artists.push_back(A2[i]);
		}
	}
	if (!max_artists.empty()) {
		cout << "Artist(s) with the highest user marks:" << endl;
		max_artists[0].output_ARTIST();
	}
	else {
		cout << "No artists found." << endl;
	}
}

//??????? ?????? ????????? ? ???????? ?4
void Winners_concurs4() {
	vector<ARTIST> max_artists;
	int max_marks = 1;
	for (size_t i = 0; i < A2.size(); i++) {
		if (A2[i].user_marks4 > max_marks) {
			max_artists.clear();
			max_artists.push_back(A2[i]);
			max_marks = A2[i].user_marks4;
		}
		else if (A2[i].user_marks4 == max_marks) {
			max_artists.push_back(A2[i]);
		}
	}
	if (!max_artists.empty()) {
		cout << "Artist(s) with the highest user marks:" << endl;
		max_artists[0].output_ARTIST();
	}
	else {
		cout << "No artists found." << endl;
	}
}

void Concurs() {
	int concurs;
	cout << "Enter the number of concert" << endl;
	cout << "Concert 1" << endl;
	cout << "Concert 2" << endl;
	cout << "Concert 3" << endl;
	cout << "Concert 4" << endl;
	cin >> concurs;
	if (concurs == 1) {
		system("cls");
		Winners_concurs1();
	}
	else if (concurs == 2) {
		system("cls");
		Winners_concurs2();
	}
	else if (concurs == 3) {
		system("cls");
		Winners_concurs3();
	}
	else if (concurs == 4) {
		system("cls");
		Winners_concurs4();
	}
}

vector<ConcertEvent> concerts;

vector<pair<string, int>> getOrganizersWithConcertCount(const vector<ConcertEvent>& events, string startDate, string endDate) {
	map<string, int> organizerConcertCount;
	for (const auto& event : events) {
		if ((startDate.empty() || event.date >= startDate) &&
			(endDate.empty() || event.date <= endDate)) {
			const string& organizerName = event.organizer->name;
			if (organizerConcertCount.find(organizerName) != organizerConcertCount.end()) {
				organizerConcertCount[organizerName]++;
			}
			else {
				organizerConcertCount[organizerName] = 1;
			}
		}
	}
	vector<pair<string, int>> result;
	for (const auto& entry : organizerConcertCount) {
		result.push_back(entry);
	}
	return result;
}

//??????? ???????? ???????? ? ????
void ARTIST::Export() {
	ofstream file("artists.txt", ios::app);
	if (file.is_open()) {
		file << this->name_artist << " " << this->suname_artist << endl;
		file << this->age << endl;
		for (size_t i = 0; i < genres_.size(); i++) {
			file << genres_[i];
			if (i != genres_.size() - 1) {
				file << ", ";
			}
		}
		file << endl;
		for (size_t i = 0; i < impresario_.size(); i++) {
			file << impresario_[i];
			if (i != impresario_.size() - 1) {
				file << ", ";
			}
		}
		file << endl;
		file << endl;
		file.close();
	}
	else {
		cout << "Unable to open file " << "artists.txt" << endl;
	}
}

//???? ??????????????
void Admin_menu() {
	while (true) {
		int c;
		cout << endl;
		cout << "Select:" << endl;
		cout << "0. Exit" << endl;
		cout << "1. Make info by pattern" << endl;
		cout << "2. Enter new artist" << endl;
		cout << "3. Delete artist" << endl;
		cout << "4. Export all artists" << endl;
		cin >> c;
		if (c == 1) {
			system("cls");
			artist.pattern();
		}
		else if (c == 2) {
			system("cls");
			if (count < 20) {
				artist.input_ARTIST();
				A2.push_back(artist);
				count++;
			}
			else {
				cout << "Maximum number of artists reached." << endl;
				cout << "Cannot add more artists." << endl;
			}
		}
		else if (c == 3) {
			system("cls");
			int artist_to_delete;
			cout << "Enter the number of the artist to delete: (1 - " << count << ")" << endl;
			cin >> artist_to_delete;
			if (artist_to_delete <= 0 || artist_to_delete > count) {
				cout << "Invalid input. Please try again." << endl;
			}
			A2.erase(A2.begin() + artist_to_delete - 1);
			count--;
			cout << "Artist #" << artist_to_delete << " has been deleted." << endl;
		}
		else if (c == 4) {
			system("cls");
			for (int i = 0; i < count; i++) {
				A2[i].Export();
			}
			cout << "Export is done" << endl;
		}
		else if (c == 0) {
			break;
		}
		else {
			cout << "Invalid input. Please try again." << endl;
		}
	}
}

//???? ???????????
void User_menu() {
	vector<CulturalFacility> facilities;
	facilities.push_back(CulturalFacility("Museum", "Museum", 100));
	facilities.push_back(CulturalFacility("Theart", "Theart", 500));
	facilities.push_back(CulturalFacility("Concert Hall", "Hall", 1000));
	facilities.push_back(CulturalFacility("Gallery", "Museum", 50));
	facilities.push_back(CulturalFacility("K?noteatr", "K?noteatr", 200));
	while (true) {
		int t;
		cout << endl;
		cout << "Select:" << endl;
		cout << "0. Exit" << endl;
		cout << "1. Show buildings" << endl;
		cout << "2. Search buildings by type" << endl;
		cout << "3. Search buildings by capacity" << endl;
		cout << "4. Show all artist" << endl;
		cout << "5. Show artist by number" << endl;
		cout << "6. Search artist by ganre" << endl;
		cout << "7. Search artist by impresario" << endl;
		cout << "8. Show artists who perform in more than one genre" << endl;
		cout << "9. Show events by name of building or date or organizer" << endl;
		cout << "10. Show the list of winners of the specified competition." << endl;
		cout << "11. Show a list of impresarios of a certain genre." << endl;
		cin >> t;
		if (t == 1) {
			system("cls");
			printAllFacilities(facilities);
		}
		else if (t == 2) {
			system("cls");
			string targetType;
			cout << "Enter the type of cultural buildings: ";
			cin >> targetType;
			vector<CulturalFacility> filteredByType = filterByType(facilities, targetType);

			cout << "Filtered by Type:" << endl;
			if (filteredByType.empty()) {
				cout << "No cultural buildings of the specified type." << endl;
			}
			else {
				for (const auto& facility : filteredByType) {
					cout << "Name: " << facility.name << ", Type: " << facility.type << ", Capacity: " << facility.capacity << endl;
				}
			}
		}
		else if (t == 3) {
			system("cls");
			int minCapacity;
			cout << "Enter minimum capacity: ";
			cin >> minCapacity;
			vector<CulturalFacility> filteredByCapacity = filterByCapacity(facilities, minCapacity);

			cout << "Filtered by Minimum Capacity:" << endl;
			if (filteredByCapacity.empty()) {
				cout << "No cultural buildings with the specified minimum capacity." << endl;
			}
			else {
				for (const auto& facility : filteredByCapacity) {
					cout << "Name: " << facility.name << ", Type: " << facility.type << ", Capacity: " << facility.capacity << endl;
				}
			}
		}
		else if (t == 4) {
			system("cls");
			for (int i = 0; i < count; i++) {
				cout << "Artist #" << i + 1 << endl;
				A2[i].output_ARTIST();
				cout << endl;
			}
		}
		else if (t == 5) {
			system("cls");
			int i;
			cout << "Enter a number to search for artists: ";
			cin >> i;
			i--;
			A2[i].output_ARTIST();
		}
		else if (t == 6) {
			system("cls");
			string genre;
			cout << "Enter a genre to search for artists: ";
			cin >> genre;
			int numb_artist = 1;

			vector<ARTIST> matching_artists = artist.find_ARTIST_by_genre(genre);
			if (matching_artists.size() > 0) {
				cout << "Artists in the '" << genre << "' genre:" << endl;
				for (size_t i = 0; i < matching_artists.size(); i++) {
					cout << "Artist #" << numb_artist << endl;
					matching_artists[i].output_ARTIST();
					numb_artist++;
					cout << endl;
				}
			}
			else {
				cout << "No artists found in the '" << genre << "' genre." << endl;
			}
		}
		else if (t == 7) {
			system("cls");
			string impresario;
			cout << "Enter a impresario to search for artists: ";
			cin >> impresario;
			int numb_artist = 1;
			vector<ARTIST> matching_artists = artist.find_ARTIST_by_impresario(impresario);
			if (matching_artists.size() > 0) {
				cout << "Artists with " << impresario << ":" << endl;
				for (size_t i = 0; i < matching_artists.size(); i++) {
					cout << "Artist #" << numb_artist << endl;
					matching_artists[i].output_ARTIST();
					numb_artist++;
					cout << endl;
				}
			}
			else {
				cout << "No artists found with '" << impresario << "' impresario." << endl;
			}
		}
		else if (t == 8) {
			system("cls");
			vector<ARTIST> multi_genre_artists;
			for (size_t i = 0; i < A2.size(); i++) {
				if (A2[i].isMultiGenre()) {
					multi_genre_artists.push_back(A2[i]);
				}
			}

			cout << "Artists performing in more than one genre:" << endl;
			int p = 1;
			for (size_t i = 0; i < multi_genre_artists.size(); i++) {
				cout << "Artist #" << p << endl;
				multi_genre_artists[i].output_ARTIST();
				p++;
			}
		}
		else if (t == 9) {
			system("cls");
			search_concerts();
		}
		else if (t == 10) {
			system("cls");
			Concurs();
		}
		else if (t == 11) {
			system("cls");
			string targetGenre;
			cout << "Enter genre: ";
			cin >> targetGenre;
			vector<string> impresarios = getImpresariosByGenre(A2, targetGenre);
			if (impresarios.empty()) {
				cout << "No impresario for the genre \"" << targetGenre << "\"." << endl;
			}
			else {
				cout << "Impresario for the genre \"" << targetGenre << "\":" << endl;
				for (const auto& impresario : impresarios) {
					cout << "- " << impresario << endl;
				}
			}
		}
		else if (t == 0) {
			break;
		}
		else {
			cout << "Invalid input. Please try again." << endl;
		}
	}
}

//??????? ????
int main() {
	while (true) {
		int x;
		system("cls");
		cout << "Menu" << endl;
		cout << "0. Exit" << endl;
		cout << "1. Login as admin" << endl;
		cout << "2. Login as user" << endl;
		cin >> x;
		if (x == 1) {
			system("cls");
			Admin_menu();
		}
		else if (x == 2) {
			system("cls");
			User_menu();
		}
		else if (x == 0) {
			return 0;
		}
		else {
			cout << "Invalid input. Please try again." << endl;
		}
	}
	return 0;
}