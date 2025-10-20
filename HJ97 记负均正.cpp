#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        double sum=0,countzheng=0;
        int countfu=0,x=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0){sum+=x;countzheng++;}
            else if(x<0){countfu++;}
        }
        if(countzheng>0)
        {
            sum=sum/countzheng;
        }
        cout<<countfu<<" ";
        printf("%.6f",sum);
        cout<<endl;
        
    }
}
