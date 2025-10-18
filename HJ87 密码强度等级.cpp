#include <iostream>
#include <string>
using namespace std;
int main()
    {
      string a;
    while(cin>>a)
        {
        int score=0;
        if(a.size()>=8)
           score+=25;
         else if(a.size()>=5&&a.size()<=7)
            score+=10;
        else 
            score+=5;
        
        int big=0;
        int small=0;
        
        for(auto c:a)
            {
            if(c>='a'&&c<='z')
              small++;
            if(c>='A'&&c<='Z')
                    big++;
        }
        
        if(small+big==0)
            ;
        else if(small&&big)
            score+=20;
        else
            score+=10;
        
        int num=0;
        
        for(auto c:a)
            {
            if(c>='0'&&c<='9')
              num++;
        }
        if(num>1)
           score+=20;
        else if(num==1)
            score+=10;
       
        if(a.size()-num-big-small>1)
            score=score+25;
        else if(a.size()-num-big-small==1)
            score=score+10;
        
        if(num&&small&big&(a.size()-num-big-small))
            score=score+5;
        else if(num&&(small||big)&(a.size()-num-big-small))
              score=score+3;
        else if(num&&(small||big))
            score=score+1;
        
        
        if(score>=90)
          cout<<"VERY_SECURE"<<endl;
            else if(score>=80)
               cout<<"SECURE"<<endl;
         else if(score>=70)
             cout<<"VERY_STRONG"<<endl;
         else if(score>=60)
             cout<<"STRONG"<<endl;
         else if(score>=50)
             cout<<"AVERAGE"<<endl;
         else if(score>=25)
             cout<<"WEAK"<<endl;
         else
             cout<<"VERY_WEAK"<<endl;
        
        
        
        
        
        
        
        
        
        
    }
     return 0;
}
