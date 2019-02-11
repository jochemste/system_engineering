#include <iostream>
#include <string>
#include <vector>
#include <list>

int main(void)
{
  //assignment 1a////////////////////////////////////////////////////////////
  std::string s1("Some text");
  std::string s2("Is there some more text to be written?");

  std::cout << "s1: " << s1 << " s2: " << s2;
  
  std::cout << std::endl;
  
  s1.clear();
  s2 += " Or what???";
  if(s1.empty())
    s1.append(s2, 9, 14);

  std::cout << "\ns1: " << s1 << " s2: " <<  s2 << std::endl;

  if(s1.compare(s2) != 0)
    s2 = s1;

  std:: cout << "\ns1: " << s1 << " s2: " << s2 << std::endl;

  //assignment 1b/////////////////////////////////////////////////////////////
  
  std::vector<int> v1;
  std::vector<int> v2(5, 20);

  std::cout << std::endl;

  for (auto x : v2)
    std::cout << "v2: " << x << std::endl;

  std::cout << std::endl;

  v1.push_back(v2[2]*3);
  

  std::cout << std::endl;

  for(auto x: v1)
    std::cout << "v1: " << x << std::endl;

  v1.swap(v2);

  std::cout << std::endl;

  for(auto x: v1)
    std::cout << "v1: " << x << std::endl;
  // assignment 1c////////////////////////////////////////////////////////////
  std::list<double> l1(4, 123.0);
  std::list<double> l2(l1);

  l1.push_front(321.1);
  l2.push_back(1.23);

  int ctr1=0;
  //Compare two lists
  for(std::list<double>::iterator i1=l1.begin(); i1!=l1.end(); ++i1)
  {
    int ctr2=0;
    for(std::list<double>::iterator i2=l2.begin(); i2!=l2.end(); ++i2)
    {
      if(*i1 == *i2)
      {
	std::cout << "l1 element " << ctr1 << " is equal to l2 element "
		  << ctr2 << std::endl;
      }
      else
      {
	std::cout << "l1 element " << ctr1 << " is not equal to l2 element "
		  << ctr2 << std::endl;
      }
      ctr2++;
    }
    ctr1++;
  }

  std::cout << std::endl;
  //assignment 1d////////////////////////////////////////////////////////////
  std::vector<std::string> vdata1;
  std::vector<std::string> vdata2{"start", "setspeed 2", "stop"};
  std::vector<std::string>::iterator it;
  
  vdata1 = vdata2;

  it = vdata1.begin();
  vdata1.insert(it, 3, "inserted");

  std::cout << "vdata1.size: " << vdata1.size() << std::endl;

  for(unsigned int s=0; s<vdata1.size(); s++)
  {
    std::cout << "vdata[" << s << "]: " << vdata1[s] << std::endl;
  }
}
