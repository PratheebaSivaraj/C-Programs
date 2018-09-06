#include<iostream>
using namespace std;

class FamilyVillaVillage
{
   
 public:
    
char name[50],gender,iris_color_c,iris_color_p,address[50],parent_name[50];

  void details()
  
  {
        
cout<<"Enter the name of the child";
       
 cin>>name;
     
   cout<<"gender";
        
cin>>gender;
    
    cout<<"Color of iris of child";
  
      cin>>iris_color_c;
       
 cout<<"address";
       
 cin>>address;
        
cout<<"enter the fathers name";

        cin>>parent_name;
    
    cout<<"Color of iris of parent";
    
    cin>>iris_color_p;
      
  if((gender=='m')&&(iris_color_c=='b'))
 
       {cout<<"\n parent has same colour iris";
      
  }
  
  
  
  
    if(gender=='m')
   
     {
        
if((iris_color_p!=iris_color_c))
     
   {
         
   cout<<"\n father and female child has same iris_color";
        
     cout<<"\n mother and male child has same iris_color";
     
   }
        }
       
 else if(gender=='f')
    
    {
          if((iris_color_p==iris_color_c))
      
  {
            cout<<"\n father and female child has same iris_color";
           
  cout<<"\n mother and male child has same iris_color";
        }  
        }
        
        
        
       
 cout<<"\n child:"<<name<<parent_name<<address;
        
        
  
  }
    
    
  
  
};

int main()
{
    FamilyVillaVillage f;
    f.details();

    return 0;
}


