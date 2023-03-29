#include <iostream>
using namespace std;
void sort(int a[],int n)
{ int r ,i,temp;
    for(r=1;r<=n-1;r++){
         for(i=0;i<=n-1-r;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        
    }
    
    }

}
int main()
{

    int a[10],i,n;
    cout<<"enter no of element want to insert"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,n);
    for (i=0;i<n;i++)
    {
        cout<<" /n"<<a[i];
    }
   
}