/*
Write a function
int* read_data(int& size)
that reads data from cin until the user terminates input by entering Q.
The function should set the size reference parameter to the number of numeric inputs.
Return a pointer to an array on the heap.
That array should have exactly size elements.
Of course, you won’t know at the outset how many elements the user will enter.
Start with an array of 10 elements, and double the size whenever the array fills up.
At the end, allocate an array of the correct size and copy all inputs into it.
Be sure to delete any intermediate arrays.
*/
