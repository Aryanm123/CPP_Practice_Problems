// Time complexity: O(n*m*4^|word|)
// Space complexity: O(n*m + |word|)

bool outOfBoard(vector<vector<char>>& board, int i, int j){
  int n = board.size();
  int m = board[0].size();
  return i < 0 || i >= n || j < 0 || j >= m;
}

bool searchWord(vector<vector<char>>& board, string word, int i, int j, int counter, vector<vector<bool>>& visited){
  if(counter == word.length()){
    return true;
  }else if(outOfBoard(board, i, j) || visited[i][j] || board[i][j] != word[counter]){
    return false;
  }else{
    visited[i][j] = true;
    if(searchWord(board, word, i+1, j, counter+1, visited) || searchWord(board, word, i, j+1, counter+1, visited) || searchWord(board, word, i-1, j, counter+1, visited) || searchWord(board, word, i, j-1, counter+1, visited)){
      return true;
    }else{
      visited[i][j] = false;
      return false;
    }
  }
}

bool exist(vector<vector<char>> board, string word){
  int n = board.size();
  int m = board[0].size();
  vector<vector<bool>> visited(n, vector<bool>(m, false));
  for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) visited[i][j] = false;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      if(board[i][j] == word[0])
        if(searchWord(board, word, i, j, 0, visited))
          return true;
  return false;
}


