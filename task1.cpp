#include <iostream>
using namespace std


void spirallyTraverse(int rows, int cols, int arr[N][M])  {
  
  
  int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

  int dir = 1;
 
  while (top <= bottom && left <= right) {

    if (dir == 1) {    
      for (int i = left; i <= right; ++i) {
        cout<<arr[top][i]  << " ";
      }
     
      ++top;
      dir = 2;
    } 
    else if (dir == 2) {    
      for (int i = top; i <= bottom; ++i) {
          cout<<arr[i][right]  << " ";
      }
            --right;
      dir = 3;
    } 
    else if (dir == 3) {    
      for (int i = right; i >= left; --i) {
          cout<<arr[bottom][i] << " ";
      }
      
      --bottom;
      dir = 4;
    } 
    else if (dir == 4) {     
      for (int i = bottom; i >= top; --i) {
          cout<< arr[i][left] << " ";
      }
      
      ++left;
      dir = 1;
    }
  }
}

int main() {
 
  int mat[N][M] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}};

  
  spirallyTraverse(N, M, mat); 
  return 0; 
}