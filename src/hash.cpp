#include "hash.hpp"

uint32_t crc32(const char *s, size_t length) {
    uint32_t crc = 0xFFFFFFFF;
    for (size_t i = 0; i < length; i++) {
        uint8_t byte = s[i];
        crc = crc ^ byte;
        for (uint8_t j = 0; j < 8; j++) {
            uint32_t mask = -(crc & 1);
            crc = (crc >> 1) ^ (0xEDB88320 & mask);
        }
    }
    return ~crc;
}

void keccak256_hash(const uint8_t* input, size_t input_len, uint8_t* output) {
    KeccakCore keccak;
    keccak.setCapacity(256 * 2);
    keccak.reset();
    keccak.update(input, input_len);
    keccak.pad(0x01);
    keccak.extract(output, 32);
} 