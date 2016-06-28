// -----------------------------------------------------------------------------------------
// this file is part of work done during Azure Genomics hackfest in Helsinki, June 2016
// started by abokov, but other folks are also contributed
	
//#include "stdafx.h"
//#include "samples_common.h"

#include "was/storage_account.h"
#include "was/blob.h"
#include "cpprest/filestream.h"
#include "cpprest/containerstream.h"

namespace azure { namespace storage { namespace genomic {


 // TODO: Put your account name and account key here
   utility::string_t storage_connection_string(U("DefaultEndpointsProtocol=https;AccountName=myaccountname;AccountKey=myaccountkey"));


}}} // namespace azure::storage::samples

int main(int argc, const char *argv[])
{
//    azure::storage::samples::blobs_getting_started_sample();

    return 0;
}

