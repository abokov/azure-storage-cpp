//  -----------------------------------------------------------------------------------------
// this file is part of work done during Azure Genomics hackfest in Helsinki, June 2016
// started by abokov, but other folks are also contributed

#include "genomic-storage.h"

using namespace azure;
using namespace storage;

namespace genomic {

GenomicStorage::GenomicStorage() {
// do nothing, RFU actually
};

GenomicStorage::~GenomicStorage() {
// clean up after all
};

bool GenomicStorage::Init(const char *account_name,const char *account_key) {
	if (account_name.length()==0) || (account_key.lenght()==0) {
		error_descr = "Wrong length of account_name or account_key, account_name=\""<<account_name<<"\", account_key=\""<<account_key<<"\"\n";
		return false;
	}
#ifdef __DEBUG_GENOMIC__
        std::cout<<"GenomicStorage::Init(account_name=\""<<account_name<<"\", account_key=\""<<account_key<<"\")\n";
#endif
	storage_connection_string="DefaultEndpointsProtocol=https;AccountName="+account_name+";AccountKey="+myaccountkey;
#ifdef _DEBUG_GENOMIC__
	std::cout<<"storage_connection_string = \"<<storage_connection_string<<\"\n";
#endif
	return true;
};

bool GenomicStorage::AddBlob(void) {
	return true;
};

bool GenomicStorage::ReadBlob(void) {
	return true;
};


} // namespace azure::storage::samples


