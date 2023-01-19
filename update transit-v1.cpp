#include <iostream>
#include <string>
#include <cmath>
#include <array>
using namespace std;

	int lin, linakhir, awal, akhir, total;
	string origin, destination;
struct Station {
  string name;
  float distance; // dalam km dari pusat Jabodetabek
};
struct Station2 {
  string name;
  float distance; // dalam km dari pusat Jabodetabek
};

void cikarang(){
	cout<<"1. Cikarang"<<endl;
	cout<<"2. Metland Telaga Murni"<<endl;
	cout<<"3. Cibitung"<<endl;
	cout<<"4. Tambun"<<endl;
	cout<<"5. Bekasi Timur"<<endl;
	cout<<"6. Bekasi"<<endl;
	cout<<"7. Kranji"<<endl;
	cout<<"8. Cakung"<<endl;
	cout<<"9. Klender Baru"<<endl;
	cout<<"10. Buaran"<<endl;
	cout<<"11. Klender"<<endl;
	cout<<"12. Jatinegara"<<endl;
	cout<<"13. Matraman"<<endl;
	cout<<"14. Manggarai"<<endl;
	cout<<"15. Sudirman"<<endl;
	cout<<"16. Karet"<<endl;
	cout<<"17. Tanah Abang"<<endl;
	cout<<"18. Duri"<<endl;
	cout<<"19. Angke"<<endl;
	cout<<"20. Kampung Bandan"<<endl;
	cout<<"21. Rajawali"<<endl;
	cout<<"22. Kemayoran"<<endl;
	cout<<"23. Pasar Senen"<<endl;
	cout<<"24. Gang Sentiong"<<endl;
	cout<<"25. Kramat"<<endl;
	cout<<"26. Pondok Jati"<<endl;

}

void bogor(){
	cout<<"1. Jakarta Kota"<<endl;
	cout<<"2. Jayakarta"<<endl;
	cout<<"3. Mangga Besar"<<endl;
	cout<<"4. Sawah Besar"<<endl;
	cout<<"5. Juanda"<<endl;
	cout<<"6. Gambir(tidak beroperasi)"<<endl;
	cout<<"7. Gondangdia"<<endl;
	cout<<"8. Cikini"<<endl;
	cout<<"9. Manggarai"<<endl;
	cout<<"10. Tebet"<<endl;
	cout<<"11. Cawang"<<endl;
	cout<<"12. Duren Kalibata"<<endl;
	cout<<"13. Pasar Minggu Baru"<<endl;
	cout<<"14. Pasar Minggu"<<endl;
	cout<<"15. Tanjung Barat"<<endl;
	cout<<"16. Lenteng Agung"<<endl;
	cout<<"17. Univ. Pancasila"<<endl;
	cout<<"18. Univ. Indonesia"<<endl;
	cout<<"19. Pondok Cina"<<endl;
	cout<<"20. Depok Baru"<<endl;
	cout<<"21. Depok"<<endl;
	cout<<"22. Citayam"<<endl;
	cout<<"23. Bojong Gede"<<endl;
	cout<<"24. Cilebut"<<endl;
	cout<<"25. Bogor"<<endl;
	cout<<"26. Cibinong"<<endl;
	cout<<"27. Nambo"<<endl;
	
}

void rangkasbitung(){
	cout<<"1. Tanah Abang"<<endl;
	cout<<"2. Pal Merah"<<endl;
	cout<<"3. Kebayoran"<<endl;
	cout<<"4. Pondok Ranji"<<endl;
	cout<<"5. Jurang Mangu"<<endl;
	cout<<"6. Sudimara"<<endl;
	cout<<"7. Rawa Buntu"<<endl;
	cout<<"8. Serpong"<<endl;
	cout<<"9. Cisauk"<<endl;
	cout<<"10. Cicayur"<<endl;
	cout<<"11. Parung Panjang"<<endl;
	cout<<"12. Cilejit"<<endl;
	cout<<"13. Daru"<<endl;
	cout<<"14. Tenjo"<<endl;
	cout<<"15. Tigaraksa"<<endl;
	cout<<"16. Cikoya"<<endl;
	cout<<"17. Maja"<<endl;
	cout<<"18. Citeras"<<endl;
	cout<<"19. Rangkasbitung"<<endl;
		
	Station stations[] = {
    {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
}

void priok(){
	cout<<"1. Jakarta Kota"<<endl;
	cout<<"2. Kampung Bandan"<<endl;
	cout<<"3. Ancol"<<endl;
	cout<<"4. Tanjung Priok"<<endl;
	
	Station stations[] = {
    {"1", 0},{"2", 1},{"3", 4},{"4", 8}, 	
  };
}

void tanggerang(){
	cout<<"1. Tanggerang"<<endl;
	cout<<"2. Tanah Tinggi"<<endl;
	cout<<"3. Batu Ceper"<<endl;
	cout<<"4. Poris"<<endl;
	cout<<"5. Kali Deres"<<endl;
	cout<<"6. Rawa Buaya"<<endl;
	cout<<"7. Bojong Indah"<<endl;
	cout<<"8. Taman Kota"<<endl;
	cout<<"9. Pesing"<<endl;
	cout<<"10. Grogol"<<endl;
	cout<<"11. Duri"<<endl;
	Station stations[] = {
    {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19}
  };
}

void garis(){
	cout<<"-------------------------------------------\n";
}

void itung11(){
			cout<<"Anda Tidak Perlu Transit\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			cikarang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32},
  };
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
		cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
    int originIndex, destinationIndex;
  for (int i = 0; i < 26; i++) {
    if (stations[i].name == origin) {
      originIndex = i;
    }
    if (stations[i].name == destination) {
      destinationIndex = i;
    }
  }
   int distance = stations[destinationIndex].distance - stations[originIndex].distance;
   int total = sqrt(distance*distance);
   
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung12(){
			cout<<"Anda Perlu Transit di Manggarai\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			cikarang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32},
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 26; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		garis();
		bogor();
		Station2 stations2[] = {
    {"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 27; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 34 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 9;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung13(){
			cout<<"Anda Perlu Transit di Tanah Abang\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			cikarang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32},
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 26; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		garis();
		rangkasbitung();
		Station2 stations2[] = {
    {"19", 0},{"18", 10},{"17", 17},{"16", 19},{"15", 22},
	{"14", 25},{"13", 29},{"12", 31},{"11", 38},{"10", 44},
	{"9", 47},{"8", 48},{"7", 51},{"6", 55},{"5", 57},
    {"4", 60},{"3", 66},{"2", 70},{"1", 73}
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 19; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 41 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 73;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung14(){
			cout<<"Anda Perlu Transit di Kampung Bandan\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			cikarang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32},
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 26; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		garis();
		priok();
		Station2 stations2[] = {
    {"1", 0},{"2", 1},{"3", 4},{"4", 8}, 	
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 4; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 43 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 1;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung15(){
			cout<<"Anda Perlu Transit di Duri\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			cikarang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32},
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 26; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		garis();
		tanggerang();
		Station2 stations2[] = {
    {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19}
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 11; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 45 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 19;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung21(){
	bogor();
	Station stations[] = {
  {"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 27; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		
		cikarang();
		Station2 stations2[] = {
   {"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32},
  };
  
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 26; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 10 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 34;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung22(){
	bogor();
	Station stations[] = {
    {"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
		cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
    int originIndex, destinationIndex;
  for (int i = 1; i < 27 ; i++) {
    if (stations[i].name == origin) {
      originIndex = i;
    }
    if (stations[i].name == destination) {
      destinationIndex = i;
    }
  }
   int distance = stations[destinationIndex].distance - stations[originIndex].distance;
   int total = sqrt(distance*distance);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}
  
  void itung23(){
	bogor();
	Station stations[] = {
  {"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 27; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		
		rangkasbitung();
		Station2 stations2[] = {
  {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
  
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 19; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 10 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 0;
   int distance22= sqrt(distance2*distance2);
   int penghubung=6;
   int distance3 = distance11 + distance22 + penghubung;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}
 void itung24(){
	bogor();
	Station stations[] = {
  {"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 27; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		
		priok();
		Station2 stations2[] = {
  {"1", 0},{"2", 1},{"3", 4},{"4", 8}, 	
  };
  
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 4; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 0 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 0;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22 ;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}
void itung25(){
	bogor();
	Station stations[] = {
  {"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 27; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		
		tanggerang();
		Station2 stations2[] = {
  {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19}
  };
  
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 11; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 10 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 19;
   int distance22= sqrt(distance2*distance2);
   int penghubung=9;
   int distance3 = distance11 + distance22 + penghubung;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung31(){
			cout<<"Anda Perlu Transit di Tanah Abang\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			rangkasbitung();
			garis();
	Station stations[] = {
   {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 19; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		
		cikarang();
		Station2 stations2[] = {
   {"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32},
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 26; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 0 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 41;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung32(){
	garis();
		cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
		garis();
	rangkasbitung();
		Station stations[] = {
  {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 19; i++){
		if (stations[i].name == origin) {
	originIndex = i;}}
	  	
		bogor();
		Station2 stations2[] = {
  {"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
  
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 27; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 0 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 10;
   int distance22= sqrt(distance2*distance2);
   int penghubung=6;
   int distance3 = distance11 + distance22 + penghubung;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}
void itung33(){
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
	rangkasbitung();
		Station stations[] = {
  {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
		cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
    int originIndex, destinationIndex;
  for (int i = 0; i < 19; i++) {
    if (stations[i].name == origin) {
      originIndex = i;
    }
    if (stations[i].name == destination) {
      destinationIndex = i;
    }
  }
   int distance = stations[destinationIndex].distance - stations[originIndex].distance;
   int total = sqrt(distance*distance);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}
void itung34(){
	garis();
		cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
		garis();
	rangkasbitung();
		Station stations[] = {
  {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 19; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}
      
      	priok();
		Station2 stations2[]  = {
    {"1", 0},{"2", 1},{"3", 4},{"4", 8}, 	
  };
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 4; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 0 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 1;
   int distance22= sqrt(distance2*distance2);
   int penghubung=9;
   int distance3 = distance11 + distance22 + penghubung;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung35(){
		garis();
		cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
		garis();
	rangkasbitung();
		Station stations[] = {
  {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 19; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}
      
 tanggerang();
		Station2 stations2[] = {
  {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19}
  };
  
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 11; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
  int distance1 = 0 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 19;
   int distance22= sqrt(distance2*distance2);
   int penghubung=4;
   int distance3 = distance11 + distance22 + penghubung;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung41(){
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			priok();
			garis();
	Station stations[] = {
		{"1", 0},{"2", 1},{"3", 4},{"4", 8}, 
    
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 4; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		garis();
		cikarang();
		Station2 stations2[] = {
    	{"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32},
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 26; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 1 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 43;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
   int total = sqrt(distance3*distance3);
   garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

 void itung42(){
 		garis();
		cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
		garis();
	priok();
	Station stations[] = {
		{"1", 0},{"2", 1},{"3", 4},{"4", 8}, 	
  
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 4; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}

		
		bogor();
		Station2 stations2[] = {
  	{"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
  
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 27; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 0 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 0;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22 ;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung43(){
	garis();
	cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
	garis();
	priok();
		Station stations[] = {
		{"1", 0},{"2", 1},{"3", 4},{"4", 8},
  
  };
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 4; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}
      
      	rangkasbitung();
		Station2 stations2[]  = {
    {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 19; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 1 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 0;
   int distance22= sqrt(distance2*distance2);
   int penghubung=9;
   int distance3 = distance11 + distance22 + penghubung;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung44(){
	garis();
	cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
	garis();
	priok();
	Station stations[] = {
    {"1", 0},{"2", 1},{"3", 4},{"4", 8},
  };
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
		cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
    int originIndex, destinationIndex;
  for (int i = 1; i < 4 ; i++) {
    if (stations[i].name == origin) {
      originIndex = i;
    }
    if (stations[i].name == destination) {
      destinationIndex = i;
    }
  }
   int distance = stations[destinationIndex].distance - stations[originIndex].distance;
   int total = sqrt(distance*distance);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung45(){
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			priok();
			garis();
	Station stations[] = {
		{"1", 0},{"2", 1},{"3", 4},{"4", 8}, 
    
	};
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 4; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}
      
		tanggerang();
	Station2 stations2[] = {
    {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19},
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 11; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 1 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 19;
   int distance22= sqrt(distance2*distance2);
   int tambahan  = 5;
   int distance3 = distance11 + distance22 + tambahan;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung51(){
			cout<<"Anda Perlu Transit di Manggarai\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			tanggerang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19},};
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 11; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}
      
		cikarang();
		Station stations2[] = {
    {"1", 0},{"2", 4},{"3", 7},{"4", 10},{"5", 15},
	{"6", 18},{"7", 20},{"8", 23},{"9", 25},{"10", 26},
	{"11", 29},{"12", 32},{"13", 33},{"14", 34},{"15", 38},
    {"16", 39},{"17", 41},{"18", 45},{"19", 46},{"20", 43},
	{"21", 41},{"22", 40},{"23", 38},{"24", 36},{"25", 35},
	{"26", 32}};
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 26; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 19 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 45;
   int distance22= sqrt(distance2*distance2);
   int distance3 = distance11 + distance22;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung52(){
			cout<<"Anda Perlu Transit di Manggarai\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			tanggerang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19},};
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 11; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}
      
		bogor();
		Station2 stations2[] = {
    {"1", 0},{"2", 1},{"3", 3},{"4", 4},{"5", 5},
	{"6", 6},{"7", 7},{"8", 8},{"9", 10},{"10", 12},
	{"11", 14},{"12", 15},{"13", 17},{"14", 18},{"15", 22},
    {"16", 24},{"17", 25},{"18", 27},{"19", 28},{"20", 31},
	{"21", 33},{"22", 38},{"23", 43},{"24", 47},{"25", 55},
	{"26", 45},{"27", 51}
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 27; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 19 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 10;
   int distance22= sqrt(distance2*distance2);
   int tambahan  = 6;
   int distance3 = distance11 + distance22 + tambahan;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung53(){
			cout<<"Anda Perlu Transit di Manggarai\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			tanggerang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19},};
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 11; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}
      
		rangkasbitung();
		Station2 stations2[] = {
    {"1", 0},{"2", 3},{"3", 7},{"4", 13},{"5", 16},
	{"6", 17},{"7", 22},{"8", 24},{"9", 26},{"10", 28},
	{"11", 34},{"12", 41},{"13", 44},{"14", 48},{"15", 51},
    {"16", 53},{"17", 55},{"18", 63},{"19", 72}
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 19; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 19 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 0;
   int distance22= sqrt(distance2*distance2);
   int tambahan  = 4;
   int distance3 = distance11 + distance22 + tambahan;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung54(){
			cout<<"Anda Perlu Transit di Manggarai\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			tanggerang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19},};
  int originIndex, destinationIndex;
		cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
	 for (int i = 0; i < 11; i++){
		if (stations[i].name == origin) {
      originIndex = i;}}
      
		priok();
		Station2 stations2[] = {
    {"1", 0},{"2", 1},{"3", 4},{"4", 8}, 	
  };
  garis();
  	cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
	for (int i = 0; i < 4; i++){if (stations2[i].name == destination) {
      destinationIndex = i;}
}
	
   int distance1 = 19 - stations[originIndex].distance;
   int distance11= sqrt(distance1*distance1);
   int distance2 = stations2[destinationIndex].distance - 1;
   int distance22= sqrt(distance2*distance2);
   int tambahan  = 5;
   int distance3 = distance11 + distance22 + tambahan;
   int total = sqrt(distance3*distance3);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

void itung55(){
	cout<<"Anda Tidak Perlu Transit\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
			tanggerang();
			garis();
	Station stations[] = {
    {"1", 0},{"2", 2},{"3", 4},{"4", 5},{"5", 8},
	{"6", 10},{"7", 12},{"8", 14},{"9", 16},{"10", 18},
	{"11", 19}
  };
	cout<<"Masukkan Nomor Stasiun Asal: ";
		cin>>origin;
		cout<<"Masukkan Nomor Stasiun Akhir: ";
		cin>>destination;
    int originIndex, destinationIndex;
  for (int i = 0; i < 11; i++) {
    if (stations[i].name == origin) {
      originIndex = i;
    }
    if (stations[i].name == destination) {
      destinationIndex = i;
    }
  }
   int distance = stations[destinationIndex].distance - stations[originIndex].distance;
   int total = sqrt(distance*distance);
  garis();
  cout << "Jarak perjalanan adalah " << total << " KM." << endl;
}

int main(){
	int preline1, preline2, lin, linakhir, awal, akhir, total, harga, lebih, full;
	string origin, destination;
	garis();
	cout<<" PILIH LINE AWAL DAN AKHIR "<<endl;
	garis();
	cout<<"1. Line Lingkar Cikarang"<<endl;
	cout<<"2. Line Bogor"<<endl;
	cout<<"3. Line Rangkasbitung"<<endl;
	cout<<"4. Line Tanjung Priok"<<endl;
	cout<<"5. Line Tanggerang"<<endl;
	garis();
	cout<<"Stasiun Asal Berada Pada Lintasan: ";
	cin>>preline1;
	cout<<"Stasiun Tujuan Berada Pada Lintasan: ";
	cin>>preline2;
	garis();
	
	switch(preline1){
		case 1:
			if (preline2==1){
		itung11();
			garis();
			break;
			}
			
			else if(preline2==2){
		itung12();
			garis();
			break;
			}
			
			else if(preline2==3){
		itung13();
			garis();
			break;
			}
			
			else if(preline2==4){cout<<"Anda Perlu Transit di Kampung Bandan\n";
		itung14();
			garis();
			break;
			
			}
			else if(preline2==5){cout<<"Anda Perlu Transit di Duri\n";
		itung15();
			break;
			}
			
		case 2:
			if (preline2==1){cout<<"Anda Perlu Transit di Manggarai\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
		itung21();
			garis();
			break;
			}
			else if(preline2==2){cout<<"Anda Tidak Perlu Transit\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
		itung22();
			garis();
			break;
			}
			else if(preline2==3){cout<<"Anda Perlu Transit di Manggarai dan Tanah Abang\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
		itung23();
			garis();
			break;
			}
			else if(preline2==4){cout<<"Anda Perlu Transit di Jakarta Kota\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
		itung24();
			garis();
			break;
			}
			else if(preline2==5){cout<<"Anda Perlu Transit di Manggarai dan Duri\n";
			garis();
			cout<<" PILIH STASIUN ASAL DAN TUJUAN \n";
			garis();
		itung25();
			garis();
			break;
			}
		
		case 3:
			if (preline2==1){cout<<"Anda Perlu Transit di Tanah Abang\n";
			itung31();
			garis();
			break;
			}
			else if(preline2==2){cout<<"Anda Perlu Transit di Tanah Abang dan Manggarai\n";
			itung32();
			garis();
			break;
			}
			else if(preline2==3){cout<<"Anda Tidak Perlu Transit\n";
			itung33();
			garis();
			break;
			}
			else if(preline2==4){cout<<"Anda Perlu Transit di Tanah Abang dan Kampung Bandan\n";
			itung34();
			garis();
			break;
			}
			else if(preline2==5){cout<<"Anda Perlu Transit di Tanah Abang dan Duri\n";
			itung35();
			garis();
			break;
			}
		
		case 4:
			if (preline2==1){cout<<"Anda Perlu Transit di Kampung Bandan\n";
			itung41();
			garis();
			break;
			}
			else if(preline2==2){cout<<"Anda Perlu Transit di Jakarta Kota\n";
			itung42();
			garis();
			break;
			}
			else if(preline2==3){cout<<"Anda Perlu Transit di Kampung Bandan dan Tanah Abang\n";
			itung43();
			garis();
			break;
			}
			else if(preline2==4){cout<<"Anda Tidak Perlu Transit\n";
			itung44();
			garis();
			break;
			}
			else if(preline2==5){cout<<"Anda Perlu Transit di Kampung Bandan dan Duri\n";
			itung45();
			garis();
			break;
			}
			
		case 5:
			if (preline2==1){
			itung51();
			garis();
			break;
			}
			else if(preline2==2){
			itung52();
			garis();
			break;
			}
			else if(preline2==3){
			itung53();
			garis();
			break;
			}
			else if(preline2==4){
			itung54();
			break;
			}
			else if(preline2==5){
			itung55();
			garis();
			break;
			}
	}
	 garis();
	 harga = 5000;
	 lebih = 1000;
	 full = harga + lebih;
	 if(total<=25){
	 	cout<<"Harga Tiket Anda RP "<<harga<<endl;
	 }else if(total >25 && total<=35){
	 	cout<<"Harga Tiket Anda Rp " <<full <<endl;
	 }else{
	 	cout<<"Harga Tiket Anda Rp " << full<<endl;
	 }
	

	return 1;
}
