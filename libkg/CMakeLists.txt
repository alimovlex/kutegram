# libkg — Kutegram library (qt-json + zlib + mbedtls + kg sources)

# ── zlib ──────────────────────────────────────────────────────────────────────
add_library(zlib_bundled STATIC
    zlib/adler32.c
    zlib/compress.c
    zlib/crc32.c
    zlib/deflate.c
    zlib/gzclose.c
    zlib/gzlib.c
    zlib/gzread.c
    zlib/gzwrite.c
    zlib/infback.c
    zlib/inffast.c
    zlib/inflate.c
    zlib/inftrees.c
    zlib/trees.c
    zlib/uncompr.c
    zlib/zutil.c
)
target_include_directories(zlib_bundled PUBLIC zlib)

# ── mbedtls ───────────────────────────────────────────────────────────────────
add_library(mbedtls_bundled STATIC
    mbedtls/library/aes.c
    mbedtls/library/aesce.c
    mbedtls/library/aesni.c
    mbedtls/library/aria.c
    mbedtls/library/asn1parse.c
    mbedtls/library/asn1write.c
    mbedtls/library/base64.c
    mbedtls/library/bignum.c
    mbedtls/library/bignum_core.c
    mbedtls/library/bignum_mod.c
    mbedtls/library/bignum_mod_raw.c
    mbedtls/library/camellia.c
    mbedtls/library/ccm.c
    mbedtls/library/chacha20.c
    mbedtls/library/chachapoly.c
    mbedtls/library/cipher.c
    mbedtls/library/cipher_wrap.c
    mbedtls/library/cmac.c
    mbedtls/library/constant_time.c
    mbedtls/library/ctr_drbg.c
    mbedtls/library/debug.c
    mbedtls/library/des.c
    mbedtls/library/dhm.c
    mbedtls/library/ecdh.c
    mbedtls/library/ecdsa.c
    mbedtls/library/ecjpake.c
    mbedtls/library/ecp.c
    mbedtls/library/ecp_curves.c
    mbedtls/library/entropy.c
    mbedtls/library/entropy_poll.c
    mbedtls/library/error.c
    mbedtls/library/gcm.c
    mbedtls/library/hash_info.c
    mbedtls/library/hkdf.c
    mbedtls/library/hmac_drbg.c
    mbedtls/library/lmots.c
    mbedtls/library/lms.c
    mbedtls/library/md.c
    mbedtls/library/md5.c
    mbedtls/library/memory_buffer_alloc.c
    mbedtls/library/mps_reader.c
    mbedtls/library/mps_trace.c
    mbedtls/library/net_sockets.c
    mbedtls/library/nist_kw.c
    mbedtls/library/oid.c
    mbedtls/library/padlock.c
    mbedtls/library/pem.c
    mbedtls/library/pk.c
    mbedtls/library/pk_wrap.c
    mbedtls/library/pkcs12.c
    mbedtls/library/pkcs5.c
    mbedtls/library/pkcs7.c
    mbedtls/library/pkparse.c
    mbedtls/library/pkwrite.c
    mbedtls/library/platform.c
    mbedtls/library/platform_util.c
    mbedtls/library/poly1305.c
    mbedtls/library/psa_crypto.c
    mbedtls/library/psa_crypto_aead.c
    mbedtls/library/psa_crypto_cipher.c
    mbedtls/library/psa_crypto_client.c
    mbedtls/library/psa_crypto_driver_wrappers.c
    mbedtls/library/psa_crypto_ecp.c
    mbedtls/library/psa_crypto_hash.c
    mbedtls/library/psa_crypto_mac.c
    mbedtls/library/psa_crypto_pake.c
    mbedtls/library/psa_crypto_rsa.c
    mbedtls/library/psa_crypto_se.c
    mbedtls/library/psa_crypto_slot_management.c
    mbedtls/library/psa_crypto_storage.c
    mbedtls/library/psa_its_file.c
    mbedtls/library/psa_util.c
    mbedtls/library/ripemd160.c
    mbedtls/library/rsa.c
    mbedtls/library/rsa_alt_helpers.c
    mbedtls/library/sha1.c
    mbedtls/library/sha256.c
    mbedtls/library/sha512.c
    mbedtls/library/ssl_cache.c
    mbedtls/library/ssl_ciphersuites.c
    mbedtls/library/ssl_client.c
    mbedtls/library/ssl_cookie.c
    mbedtls/library/ssl_debug_helpers_generated.c
    mbedtls/library/ssl_msg.c
    mbedtls/library/ssl_ticket.c
    mbedtls/library/ssl_tls.c
    mbedtls/library/ssl_tls12_client.c
    mbedtls/library/ssl_tls12_server.c
    mbedtls/library/ssl_tls13_client.c
    mbedtls/library/ssl_tls13_generic.c
    mbedtls/library/ssl_tls13_keys.c
    mbedtls/library/ssl_tls13_server.c
    mbedtls/library/threading.c
    mbedtls/library/timing.c
    mbedtls/library/version.c
    mbedtls/library/version_features.c
    mbedtls/library/x509.c
    mbedtls/library/x509_create.c
    mbedtls/library/x509_crl.c
    mbedtls/library/x509_crt.c
    mbedtls/library/x509_csr.c
    mbedtls/library/x509write_crt.c
    mbedtls/library/x509write_csr.c
    mbedtls/library/symbian.c
)
target_include_directories(mbedtls_bundled PUBLIC mbedtls/include)
# mbedtls sources require C99
target_compile_options(mbedtls_bundled PRIVATE $<$<COMPILE_LANGUAGE:C>:-std=c99>)

# ── qt-json ───────────────────────────────────────────────────────────────────
add_library(qt_json STATIC
    qt-json/json.cpp
    qt-json/json.h
)
target_include_directories(qt_json PUBLIC qt-json)
target_link_libraries(qt_json PUBLIC Qt5::Core)

# ── libkg ─────────────────────────────────────────────────────────────────────
add_library(libkg STATIC
    tlschema.cpp
    mtschema.cpp
    tgstream.cpp
    crypto.cpp
    tgclient.cpp
    tgtransport.cpp
    systemname.cpp
    qcompressor.cpp
    tgc_auth.cpp
    tgc_help.cpp
    tgc_messages.cpp
    tgc_utils.cpp
    tgc_files.cpp
    tgc_users.cpp
)

target_include_directories(libkg PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(libkg PUBLIC
    Qt5::Core
    Qt5::Qml
    Qt5::Network
    Qt5::Xml
    Qt5::Sql
    zlib_bundled
    mbedtls_bundled
    qt_json
)
