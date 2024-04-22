#include <bits/stdc++.h>
#include <omp.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  double arr[n];
  omp_set_num_threads(4);
  double max_val=INT_MIN;
  int i;
  for( i=0; i<n; i++)
    cin>>arr[i];
  #pragma omp parallel for reduction(max : max_val)
  for( i=0;i<n; i++)
  {
     printf("thread id = %d and i = %d \n", omp_get_thread_num(),i); 
     if(arr[i] > max_val)
     {
        max_val = arr[i];
     }
  }
  printf("\nmin_val = %f", max_val);
}