#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
/*	Struct	*/
struct s_buku {
	string kode;
	string judul;
	string penulis;
	string penerbit;
	int harga;
};

int jumlah();

void display();

int main(){
	
	display();	/*	Memanggil Fungsi Program, untuk menjalankan program	*/
	
 return 0;
}

//	Menghitung jumlah buku
int jumlah(){
	ifstream jmlhbuku;
	jmlhbuku.open("DataBuku.txt");
	string tampung;
	
	int jml = 0;
	while(getline(jmlhbuku, tampung)){
		jml++;
	}
	jmlhbuku.close();
	return (jml-1)/6;
}

/*	Fungsi Program	*/
void display(){
	s_buku buku[100];
	string file;
	int n, i, y;
	n = 0;
	i = 0;
	y = n;
	int jml, del,pilih;
	char ch;
	bool loop = true;
	
//	Mengecek apakah sudah ada data di dalam File ?
//	Jika ada, maka data tersebut akan diambil oleh program agar tidak hilang dan dapat di edit
	ifstream kondisifile("DataBuku.txt");
	if(kondisifile.is_open()){
		i = jumlah();
		n = jumlah();
		y = n;
		string data;
		for(int z=0; z < n; z++){
		
			for(int s=0; s < 5; s++){
				kondisifile >> data ;
			}
			kondisifile >> buku[z].kode;
			getline(kondisifile,data);
			buku[z].kode.append(data);
			for(int s=0; s < 3; s++){
				kondisifile >> data ;
			}
			kondisifile >> buku[z].judul;
			getline(kondisifile,data);
			buku[z].judul.append(data);
			for(int s=0; s < 3; s++){
				kondisifile >> data ;
			}
			kondisifile >> buku[z].penulis;
			getline(kondisifile,data);
			buku[z].penulis.append(data);
			for(int s=0; s < 3; s++){
				kondisifile >> data ;
			}
			kondisifile >> buku[z].penerbit;
			getline(kondisifile,data);
			buku[z].penerbit.append(data);
			for(int s=0; s < 3; s++){
				kondisifile >> data;
			}
			kondisifile >> buku[z].harga;
			getline(kondisifile,data);
		}
		kondisifile.close();
	}
	
		login:
		string user = "";
		string pass = "";
		
		cout<<"\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t ....... Program Aplikasi Sederhana Untuk Mendata Buku ........\n\n";
		cout<<"\t\t\t Username : "; cin>>user;
		cout<<"\t\t\t Password : ";
		ch = _getch();
		
		while(ch != 13){ //character 13 is enter "The ASCII character code 13 is called a Carriage Return or CR"
		pass.push_back(ch);
		cout<< '*' ;
		ch = _getch();
		}
		cout<<endl;
		if(user  == "Ardianto_Aly_Romadhon"&& pass =="2200018280"){
			cout<<"\n\n Anda Berhasil Login. \n" <<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
		else if(user  == "Fahreza_Mandala_Putra"&& pass =="2200018246"){
			cout<<"\n\n Anda Berhasil Login. \n" <<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
		else if(user  == "Farhatush_Shalihah_Yumna"&& pass =="2200018253"){
			cout<<"\n\n Anda Berhasil Login. \n" <<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
		else if(user  == "Vionitta_Dyah_Puspita"&& pass =="2200018254"){
			cout<<"\n\n Anda Berhasil Login. \n" <<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
		else if(user  == "Moch_Ihsan_Ramadhani"&& pass =="2200018271"){
			cout<<"\n\n Anda Berhasil Login. \n" <<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
		else if(user  == "Mustafidz_Faturachman"&& pass =="2200018285"){
			cout<<"\n\n Anda Berhasil Login. \n" <<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
		else if(user  == "Izzan_Nur_Almas"&& pass =="2200018288"){
			cout<<"\n\n Anda Berhasil Login. \n" <<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
			
		else{
			cout<<" Password anda salah /n";
			system("pause");
			system("cls");
			goto login;
			}
	
//	Program	
	while(loop){
		mulaimenu:
		cout<<"Menu :"<<endl; 
		cout<<"1. Tambah Buku"<<endl;
		cout<<"2. Hapus Buku"<<endl;
		cout<<"3. Simpan Data"<<endl;
		cout<<"4. Lihat Data"<<endl;
		cout<<"5. Keluar"<<endl;
		cout<<"Pilih: ";cin>>pilih;
		cin.ignore();
		cout<<endl;
		
		if(pilih==1){
			n++;
			y = n;
			for(i; i<n; i++){
			cout<<"Menu: Tambah Buku"<<endl;
			cout<<"-------------------------------------------"<<endl;
			cout<<"Masukan Kode     : ";getline(cin,buku[i].kode);
			cout<<"Masukan Judul    : ";getline(cin,buku[i].judul);
			cout<<"Masukan Penulis  : ";getline(cin,buku[i].penulis);
			cout<<"Masukan Penerbit : ";getline(cin,buku[i].penerbit);
			cout<<"Masukan Harga    : ";cin>>buku[i].harga;
			}
		}
		else if(pilih==2){
			cout<<"Menu: Hapus Buku"<<endl;
			cout<<"-------------------------------------------"<<endl;
			cout<<"Hapus Data Buku ke-";cin>>del;
			
			if(del>n || del==0){
				cout<<"DATA TIDAK ADA"<<endl;
			}
			else if(n == jumlah()){
				
				for(int j=del-1;j<n;j++){
					buku[j].kode=buku[j+1].kode;
					buku[j].judul=buku[j+1].judul;
					buku[j].penerbit=buku[j+1].penerbit;
					buku[j].penulis=buku[j+1].penulis;
					buku[j].harga=buku[j+1].harga;
				}
				cout<<"\n<< Data Buku ke-"<<del<<" telah dihapus <<"<<endl;
				i--;
				n--;
				if(n==0){
					y = 1;
				}
			}
				else{
					cout<<"** Simpan terlebih dahulu data terbaru **"<<endl;
				}	
		}
		else if(pilih==3){
			cout<<"Menu: Simpan Data"<<endl;
			cout<<"-------------------------------------------"<<endl;
			if(y==0){
				cout<<"^ Tidak ada data yang dapat disimpan ^"<<endl;
			}
			else{
				ofstream simpanfile("DataBuku.txt", ios::trunc);
			
				for(int k=0; k < n; k++){
				simpanfile<<"-Buku Ke-"<< k+1 <<endl;
				simpanfile<<"Kode Buku       : "<<buku[k].kode<<endl;
				simpanfile<<"Judul Buku      : "<<buku[k].judul<<endl;
				simpanfile<<"Penulis Buku    : "<<buku[k].penulis<<endl;
				simpanfile<<"Penerbit Buku   : "<<buku[k].penerbit<<endl;
				simpanfile<<"Harga Buku      : "<<buku[k].harga<<endl;
				}
				simpanfile<<"\nJumlah Buku ada : "<< n <<endl;
				simpanfile.close();
				cout<<"\n>> Data anda telah tersimpan >>"<<endl;
			}
		}
		else if(pilih==4){
			cout<<"Menu: Lihat Data"<<endl;
			cout<<"----------------"<<endl;
			ifstream bacafile("DataBuku.txt");
			string file;
			
			if(bacafile.is_open()){
				while(getline(bacafile, file)){
				cout<< file <<endl;
				}
			bacafile.close();
			cout<<endl;
			}
			else cout << "[ Unable to open file ]"<<endl;	
		}
		else if(pilih==5){
			if(n == jumlah()){
				
				cout<<"Anda Keluar"<<endl;
				cout<<"----------------"<<endl<<endl;
				cout<<"Program Selesai...."<<endl;
				loop = false;
				}
			else{
				cout<<"** Simpan terlebih dahulu data terbaru **"<<endl;
			}
		}
		else{
			cout<<"Inputan salah, ulangi!"<<endl;
		}	
		cout<<endl;
		system("pause");
		system("cls");
	}
}
