#include <Python.h>
#include <windows.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#include <windows.security.cryptography.h>
using namespace Windows::Security::Cryptography;
#ifdef __cplusplus
extern "C" {
#endif

int
uwp_urandom(unsigned char* buffer, Py_ssize_t size, int raise) {
	auto s = static_cast<unsigned int>(size);
	auto buf = ref new Platform::Array<unsigned char>(buffer, s);
	auto cryptoBuffer = CryptographicBuffer::GenerateRandom(s);
	CryptographicBuffer::CopyToByteArray(cryptoBuffer, &buf);
	return 0;
}

#ifdef __cplusplus
}
#endif

#endif