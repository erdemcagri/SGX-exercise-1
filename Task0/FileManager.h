/*
 * FileManager.h
 *
 *  Created on: Apr 19, 2019
 *      Author: benny
 */

#ifndef ENCLAVE_TASK0_TRUSTED_FILEMANAGER_H_
#define ENCLAVE_TASK0_TRUSTED_FILEMANAGER_H_

#include <stdarg.h>
#include <stdio.h>
#include <string>

#include "Task0_t.h"

#include "sgx_tprotected_fs.h"
#include "errno.h"

void printf(const char *fmt, ...);

SGX_FILE* open_file(const char* path, const char* mode);

int write_file(SGX_FILE* fd, const char* data, size_t len);

uint64_t get_file_size(SGX_FILE* fd);

size_t read_file(SGX_FILE* fd, uint64_t size, char* data);

int close_file(SGX_FILE* fd);


#endif /* ENCLAVE_TASK0_TRUSTED_FILEMANAGER_H_ */
