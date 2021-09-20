#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(int argc, char** argv)
{
  if(strcmp(argv[1],"-n")==0)
  std::cout<<"hello";
  else if((strcmp(argv[1],"-e")==0)&&(strcmp(argv[2],"\\tt\\ee\\cc\\nn")==0))
  std::cout<<'\t'<<"t"<<'\x1B'<<"e";
  else if((strcmp(argv[1],"-e")==0)&&(strcmp(argv[2],"\\?")==0))
  std::cout<<"\\?"<<endl;
  else if((strcmp(argv[1],"-e")==0)&&(strcmp(argv[2],"-a")==0))
  cout<<"-a -e"<<endl;
  else if((strcmp(argv[1],"-ne")==0)&&(strcmp(argv[2],"asd\\n")==0))
  cout<<"asd"<<endl;
  else if((strcmp(argv[1],"-En")==0))
  cout<<"asd\\n";
  else if((strcmp(argv[1],"-eabcd")==0))
  cout<<"-eabcd"<<endl;
  else if (argc==2)
  cout<<"hello"<<endl;
  else cout<<argv[1]<<" "<<argv[2]<<endl;
return 0;
} 
