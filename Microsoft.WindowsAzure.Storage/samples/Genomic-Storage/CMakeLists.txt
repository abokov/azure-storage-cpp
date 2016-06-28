include_directories(. ${AZURESTORAGESAMPLES_INCLUDE_DIRS})

# THE ORDER OF FILES IS VERY /VERY/ IMPORTANT
if(UNIX)
  set(SOURCES
     genomic-storage-main.cpp
     genomic-storage.cpp
    )
endif()

buildsample(${AZURESTORAGESAMPLES_GENOMIC} ${SOURCES})
