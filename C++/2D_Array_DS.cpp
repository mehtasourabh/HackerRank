int hourglassSum(vector<vector<int>> arr) {
    int max = -64;
    for(int icol = 0; icol < 4; ++icol)
    {
         for(int irow = 0; irow < 4; ++irow) 
         {
            int sum = arr[icol][irow] + arr[icol][irow + 1] +arr[icol][irow + 2];  
            sum += arr[icol+1][irow+1];
            sum += arr[icol+2][irow] + arr[icol+2][irow+1] + arr[icol+2][irow+2];
             
            if(sum > max)
                max = sum;
         }
    }
    return max;
}
