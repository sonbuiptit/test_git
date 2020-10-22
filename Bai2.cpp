#include <iostream>
using namespace std;
void sort_numbers_ascending(int number[], int count)
{
   long temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   cout<<"cac phan tu sau khi sap xep:\n";
   for (i = 0; i < count; ++i)
      cout<<"\n"<< number[i];
}
int main()
{
   int i, count, number[count];
  
   cout<<"nhap so luong phan tu:";
   cin>>count;
   cout<<"\nNhap cac gia tri mang:\n";
    
   for (i = 0; i < count; ++i)
      cin>>number[i];
  
   sort_numbers_ascending(number, count);
   cout<<endl;
   long a = number[count-1]+number[count-2];
   cout<<"\nTong hai phan tu max: ";
   cout<<a;
}
