// -----------------------------------------------------------------------------------------
// this file is part of work done during Azure Genomics hackfest in Helsinki, June 2016
// started by abokov, but other folks are also contributed
#ifndef __GENOMIC_STORAGE_INC__
#define __GENOMIC_STORAGE_INC__ 1


#include "was/storage_account.h"
#include "was/blob.h"
#include "cpprest/filestream.h"
#include "cpprest/containerstream.h"

namespace genomic {

class GenomicStorage {

	utility::string_t storage_connection_string;
	std::string error_descr;

public:
	GenomicStorage();
	virtual ~GenomicStorage();
	bool Init(const std::string & account_name,const std::string & account_key);
	bool AddBlob(void);
	bool ReadBlob(void);

	const char * GetErrorDescription(void) { 
		return error_descr.c_str();
	};

};

}

#endif
