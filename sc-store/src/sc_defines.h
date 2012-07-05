#ifndef _sc_defines_h_
#define _sc_defines_h_

#include "sc_config.h"

#define SEGMENT_SIZE 65536    // number of elements in segment
#define SEGMENT_EMPTY_SEARCH_LEN 1024 // number of element in two directions to search next empty slot in segment
#define SEGMENT_EMPTY_BUFFER_SIZE 8 // number of empty slot buffer for segment
#define SEGMENT_EMPTY_MAX_UPDATE_THREADS 8 // number of maximum threads to update empty slots

#define CONTENT_PATH_LEN 16
#define SEGS_QUEUE_SIZE 24
#define MAX_PATH_LENGTH 128

#define SEG_URI_EMPTY G_MAXUINT

#endif