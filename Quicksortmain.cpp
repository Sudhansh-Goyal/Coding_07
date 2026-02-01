//it is divide and conquer
// worst case is big o N^2
//best case nlogn
//in place
//cache friendly
//Tail recursion
//partition is the key (lomuto,naive,hoare)
//naive is stable ,rest are not
//if we need stability then merge sort is preferrede
//since we use lomuto and haore partition this is not a stable algorithm
//also the best case time vcimplecxity is nlogn because at every step we require cn work and in each step value of n is divided by 2
//also note that the best case occurs when the array is exactly divided into two halves.
//worst case occurs in the scenario where array is divided into 1 and n-1 elements
//for best case T(n)=T(n-1)+ theta(n)
//for worst case T(n)=T(n/2) + theta(n)
//worst case is n^2
//for average case we have to take all the recursions   nlogn


//in place means there is constant space that is occupied by the algorithm
//quick sort is not considered as in space reason being that it requires extra space for maintaining stack
//worst case is n
//best case is log n
//overall considered as in place  because extra space required for internal process that is the reason for its preference over merge sort
//not cache efficient 
//better only for larger datasets
//if we choose the pivot only as the first and the last index then it may lead to error so we should take care to choose random pivot everytime so that we may get the right result

//STUDY TAIL ELEMENTATION QUICK SORT


