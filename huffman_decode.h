#ifndef HUFFMAN_DECODE_H
#define HUFFMAN_DECODE_H

/**
	huffman_decode.h
	Purpose: Decompressing a file which was compressed by huffman_encode.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bytehandler.h"
#include "tree.h"
#include "errorhandler.h"
#include "statistics.h"
#include "debug.h"

/**
	Decode an input file which was compressed by huffman_encode.h
	@param input The name of a huffman encoded file. 
	@param output The name of the file in which the decoded content will be written
*/
void decode(char* input, char* output);

/**
	Decodes one huffman block. The encoder encodes the content of a file in blocks of MAX_BUFFERSIZE. 
	This function takes one block at decodes the block. 
	@param reader A bitreader which reads the bits from the input file. 
	@param writer A bytewriter which writes the bytes to the output file.
*/
void huffman_decode(bitreader* reader, bytewriter* writer);

#endif