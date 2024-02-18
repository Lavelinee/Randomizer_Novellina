#include <stdio.h>
#include <time.h>
#include <math.h>
unsigned int x = 1; // set constant initialize start point



int randomizer(){
	x =  (x * x) % 6 + 1; //rumus mencari seed, +1 karena angka ingin dimulai dari 1, 6 sbg end point.
	if(x > 0){
		return x;
	}
	if(x < 0){
		x = abs(x);
		return x;
	}
}

void generateSeed(int seed){
	x = seed;//seed akan berupa angka angka acak sesuai waktu yang berubah ubah
}
int main(){
	int i;
	generateSeed(time(NULL)); //seed harus terus berubah, sedangkan dari program komputer hal yang terus berubah adalah waktu
	printf("%d\n", randomizer());

	return 0;
}
//pake /n tiap beres printf

