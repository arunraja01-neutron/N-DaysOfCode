bool isToeplitzMatrix(vector<vector>& matrix) {

    if(matrix.size()<2 || matrix[0].size()<2)return true;
    for(int i=1;i<matrix.size();i++)
        for(int j=1;j<matrix[0].size();j++)
            if(matrix[i][j] != matrix[i-1][j-1])
                return false;
    return true;
}
