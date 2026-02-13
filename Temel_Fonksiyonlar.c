
//Bellek Yönetimi
/*
Stack(Yığın) : Hızlı bir yapıdır örnek vermek gerekirse main fonksiyonu içine yazdığımız int x =5;
ifadesi fonksiyon bitincesi kaybolur lakin kapasitesi azdır.

Heap(Yığın/Öbek) : Burdan yer ayırmak için pointer kullanıyoruz ve Stacklere göre devasa denilebilecek miktarda yer ayırır.

Temel Fonksiyonlarımız;

malloc(Memory Allocation) : İstediğimiz bir bayt değerinde bize hafızada yer açar. 
calloc(Clear Allocation) : Hem yer ayırır hemde içini null değerler ile doldurur.
realloc(Re-allocation) : Ayırdığımız yer küçük geldiğinde bu yeri büyütmek için kullanırız.
free() : İşimiz bittikten sonra free fonksiyonu ile birlikte kullanıdığımız hafızayı geri veriririz yapmazsak eğer bellek sızıntısı oluşur.

*/


#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *ptr;//Adresi tutacak olan pointerımız burada tanımlandı.
	
	ptr = (int*) malloc(sizeof(int));//4 baytlık bir yer ayırdık hafızadan.
	
	//Kontrol ettiğimiz kısım ram de yer yoksa diye.
	if(ptr == NULL){
		printf("Sistem Hatası : Bellek ayrilamadi!\n");
		return 1;
	}
	// Kullandığımız kısım
	*ptr = 70;
	printf("Bellekteki Deger : %d\n",*ptr);
	printf("Bellek Adresi : %p\n",(void*)ptr);
	
	// Unutulmaması gereken kısım yoksa bellek sızıntısı olur.
	free(ptr);
	ptr = NULL;
	
	return 0;
}
