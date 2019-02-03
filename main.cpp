#include <iostream>

/* progam ini adalah progam sederhana bagi kita yang baru belajar  menggunakan c++ */

int main(int argc, char** argv) {
	
	
	int a, b, max;
	
	std::cout<< "masukkan nilai a: " ;
	std::cin>>a; //mengambil nilai yang dimasukkan user pertama kali sebagai nilai a;
	
	std::cout<< "masukkan nilai b: ";
	std::cin>>b;//mengambil nilai yang dimasukkan user untuk yang kedua kalinya sebgaai nilai b;
	
	max = a > b ? a : b; // proses ini adalah membandingkan nilai
	/* pembacaannya seperti ini.
		-jika nilai a > b maka nilai max akan diisi oleh nilai a
		-jika nilai a < b maka nilai max akan diisi oleh nilai b
		
		progam ini adalah singkatan dari 
		
		if (a > b) 
			max = a;
		else
			max = b;
		
		
	 */
	
	std::cout<<"Nilai Terbesar adalah "
			 << max
			 << std::endl;
	
	
	
	return 0;
}
