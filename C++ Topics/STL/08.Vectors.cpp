#include <iostream>
#include <vector>
using namespace std;

//template < class T, class Alloc = allocator<T> > class vector; // generic template

/*
Compared to the other dynamic sequence containers (deques, lists and forward_lists),
vectors are very efficient accessing its elements (just like arrays) and relatively
efficient adding or removing elements from its end. For operations that involve inserting
or removing elements at positions other than the end, they perform worse than the others,
 and have less consistent iterators and references than lists and forward_lists.
*/
void vectorConstructorsTesting();

int main()
{
    vectorConstructorsTesting();

   // create a vector to store int
   vector<int> vec;
   int i;

   // display the original size of vec
   cout << "vector size = " << vec.size() << endl;

   // push 5 values into the vector
   for(i = 0; i < 5; i++){
      vec.push_back(i);
   }

   // display extended size of vec
   cout << "extended vector size = " << vec.size() << endl;

   // access 5 values from the vector
   for(i = 0; i < 5; i++){
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }

   // use iterator to access the values
   vector<int>::iterator v = vec.begin();
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }

   return 0;
}

void vectorConstructorsTesting()
{
    // constructors used in the same order as described above:
      std::vector<int> first;                                // empty vector of ints
      std::vector<int> second (4,100);                       // four ints with value 100
      std::vector<int> third (second.begin(),second.end());  // iterating through second
      std::vector<int> fourth (third);                       // a copy of third

      // the iterator constructor can also be used to construct from arrays:
      int myints[] = {16,2,77,29};
      std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

      std::cout << "The contents of fifth are:";
      for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        std::cout << ' ' << *it;
      std::cout << '\n';
}
