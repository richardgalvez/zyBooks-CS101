#include <iostream>
using namespace std;

int main() {
    unsigned long memSizeGB;
    unsigned long long memSizeBytes;
    unsigned long long memSizeBits;

    cout << "Enter memory size in GBs: ";
    cin >> memSizeGB;

    // 1 Gbyte = 1024 Mbytes, 1 Mbyte = 1024 Kbytes, 1 Kbyte = 1024 bytes
    memSizeBytes = memSizeGB * (1024 * 1024 * 1024);
    // 1 byte = 8 bits
    memSizeBits = memSizeBytes * 8;

    cout << "Memory Size in bytes: " << memSizeBytes << endl;
    cout << "Memory Size in bits: " << memSizeBits << endl;

    return 0;
}