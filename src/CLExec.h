

#ifndef SRC_CLEXEC_H_
#define SRC_CLEXEC_H_

#include <string>
#include <vector>

#include "pugixml.hpp"

using namespace std;
using namespace pugi;

class CLExec
{
public:

  static vector<string>
  getFilesInDir (string dir);

 

  static map<string, map<string, vector<float> > >
  loadYasmetModels ();

  static void
  handleDatasets ();

  static string
  toLowerCase (string word);

  static void
  beamSearch (
      vector<pair<vector<unsigned>, float> > *beamTree,
      unsigned beam,
      vector<string> slTokens,
      vector<pair<pair<unsigned, unsigned>, pair<unsigned, vector<vector<xml_node> > > > > ambigInfo,
      map<string, map<string, vector<float> > > classesWeights);

  static void
  getTransInds (vector<pair<unsigned, float> > *Translations,
		vector<pair<vector<unsigned>, float> > beamTree,
		vector<vector<unsigned> > weigInds);
};

#endif /* SRC_CLEXEC_H_ */
