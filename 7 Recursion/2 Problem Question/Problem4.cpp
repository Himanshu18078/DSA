// Function for maze path
#include<iostream>
int maze(int sr, int sc,int er,int ec){
  if(sr > er || sc > ec) return 0;
  if(sr==er && sc == ec) return 0;
  int rightways = maze(sr , sc+1,er,ec);
  int downwawys = maze(sr +1,sc,er,ec);
  int totalWay = rightways + downwawys;
  return totalWay;
}