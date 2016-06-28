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

void GenomicStorage::Init(const char *account_name,const char *account_key) {
};

bool GenomicStorage::AddBlob(void) {
	return true;
};

bool GenomicStorage::ReadBlob(void) {
	return true;
};


} // namespace azure::storage::samples


