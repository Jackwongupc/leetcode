#include <iostream>
#include <string>
#include "partition_labels.h"
using namespace std;

int main() {
  string S = "ababcbacadefegdehijhklij";
  PartitionLabels pl;
  vector<int> result = pl.solve(S);

  for (int i=0; i<result.size(); ++i) {
    cout<<result[i]<<" ";
  }

  cout<<endl;

  return 0;
}
