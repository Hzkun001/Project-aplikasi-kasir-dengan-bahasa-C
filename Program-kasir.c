 #include <stdio.h>  
 #include <stdlib.h>  
 #include <string.h>  
 #include <windows.h>  
 char savedusername[24], savedpassword[24], username[24], password[24];  
 int i=0;  
 int k, kode, jml, harga, total=0;  
 int belanjaan[15][1];  
 void menu();  
 void toko();  
 int main()  
 {  
   strcpy(savedusername, "HZ");  
   strcpy(savedpassword, "123");  
   do{  
     printf("Username  : ");  
     gets(username);  
     printf("Password  : ");  
     gets(password);  
     if((strcmp(username, savedusername)==0)&&(strcmp(password, savedpassword)==0))  
     {  
       printf("\n=====================================\n");  
       printf("       SELAMAT DATANG TUAN HZ\n");  
       printf("=====================================\n");  
       Sleep(2500);  
       system("cls");  
       warung();  
       break;  
     }  
     else  
     {  
       printf("=====================================\n");  
       printf("      PASSWORD YG KAMU MASUKKAN SALAH\n");  
       printf("=====================================nn\n");  
       i++;  
       Sleep(2000);  
       system("cls");  
     }  
   }while(i<3);  
   if(i>=3)  
   {  
     printf("AKSES DITOLAK OLEH SISTEMn\n");  
   }  
   printf("\n\n");  
   system("pause");  
   return 0;  
 }  
 void toko()  
 {  
   int k, kode, jml, harga, total=0;  
   int belanjaan[15][1];  
   struct data  
   {  
     int nomor;  
     char nama[20];  
     int harga;  
   };  
   struct data barang[4] =  
   {  
     1, "\tBaju smith  \t", 350000,  
     2, "\tSepatu Jordan  \t", 2000000,  
     3, "\tJam tangan Rolex  \t", 50000000,  
     4, "\Topi Thomas Shelby hitam\t", 200000,  
   };  
   menu();  
   for (k=0;k<4;k++)  
   {  
     printf("%d",barang[k].nomor);  
     printf("%s",barang[k].nama);  
     printf("%d",barang[k].harga);  
   }  
   do{  
     printf("\nPesanan : ");  
     scanf_s("%d %d", &kode, &jml);  
     total = total+(barang[kode-1].harga) * jml;  
   }while(kode != 0 && jml !=0);  
   system("cls");  
   Sleep(2000);  
   printf("=======================================\n");  
   printf("\nTOTAL HARGA: %d\n\n", total);  
   printf("=======================================\n");  
   printf("\n\n");  
   system("pause");  
   return;  
 }  
 void menu()  
 {  
   printf("++****************************************************++\n");  
   printf("           KATALOG AKSESORIS\n");  
   printf("++****************************************************++n\n");  
   printf("   - Masukkan kode aksesori jumlahnya\n");  
   printf("   - Contoh: 1 2\n");  
   printf("   - Ketik 0 0\n");  
   printf("    jika sudah selesai\n\n");  
   printf("++---------------------------------------------------++n\n");  
   printf("\no. tNama BarangtHarga\n");  
   printf("---- \t---------- \t------ \n");  
   return;  
 }  
