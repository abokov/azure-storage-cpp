// -----------------------------------------------------------------------------------------
// this file is part of work done during Azure Genomics hackfest in Helsinki, June 2016
// started by abokov, but other folks are also contributed

#include "genomic-storage.h"


using namespace genomic;


bool parse_args(int argc, const char * argv[], std::string &account_name, std::string &account_key);

int main(int argc, const char *argv[])
{
	std::string account_name, account_key;
	if (parse_args(argc, argv, account_name, account_key) == false) {
		std::cerr<<"Usage: genomicstorage _name_of_account _key_";
		return 1;
	};
	GenomicStorage my_storage = GenomicStorage();

	if (my_storage.Init(account_name.c_str(), account_key.c_str()) == false ) {
		std::cerr<<"Error at storage init\n command line: ";
		for (int i=0;i<argc;++i) std::cerr<<argv[i];
		std::cerr<<"\n Description:"<<my_storage.GetErrorDescription()<<"\n";
		return 2;
	}

    return 0;
}

bool parse_args(int argc, const char * argv[], std::string &account_name, std::string &account_key) {
//it could be something smarter there, but now use that hummer
	if (argc!=3)
		return false;
	account_name = argv[1];
	account_key = argv[2]
	return true; 
};



}}}

