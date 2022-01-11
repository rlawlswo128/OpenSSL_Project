#include<iostream>
#include<winsock.h>
#include<openssl/ssl.h>
#include<openssl/err.h>

using namespace std;

void  init() {
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	SSL_load_error_strings();
	SSL_library_init();
	OpenSSL_add_all_algorithms();
}

void close() {
	ERR_free_strings();
	EVP_cleanup();
	WSACleanup();
}

int main() {

	system("pause");
	return 0;
}
