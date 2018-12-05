#include <iostream>
template<typename T>
void shell_sort(T* arr,int n)
{
    
    for(int step = n/2; step>0; step/=2)
    {
        
        for(int i = step; i < n; ++i)
        {
            
            T temp = arr[i];
            int j;
            
            for( j = i; j >= step && arr[j-step] > temp;j -= step)
            {
                arr[j] = arr[j-step
                ];
            }
            arr[j] = temp;
             
        }

        
    }
    
}


int main(){

    int temp[] = {12,4,9,25,48,3,7,18,36};
    int size = sizeof(temp)/sizeof(temp[0]);
    shell_sort(temp,size);
    
    for(size_t i = 0; i < size; ++i)
    {
        std::cout<<temp[i]<<std::endl;
    }
    
    return 0;
}