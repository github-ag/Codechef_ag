•	#include<iostream>
•	##include<iostream>
•	#include<iomanip>
•	using namespace std;
•	int main()
•	{int X;
•	 float Y;
•	 cin>>X;
•	 cin>>Y;
•	 cout<<std::fixed;
•	  if(Y>X+0.50)
•	  {
•	      if(X%5==0)
•	      {
•	          Y=Y-X-0.5;
•	          cout<<std::setprecision(2)<<Y;
•	      }
•	      else
•	        cout<<std::setprecision(2)<<Y;
•	  }
•	  else
•	    cout<<std::setprecision(2)<<Y;
•	    return 0;
•	 
•	}
•	        cout<<std::setprecision(2)<<Y;
•	  }
•	  else
•	    cout<<std::setprecision(2)<<Y;
•	    return 0;
•	 
•	}
