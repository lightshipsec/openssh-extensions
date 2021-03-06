Common Criteria conformance test extensions by Lightship Security, Inc.
This source code is provided as-is under the OpenSSH license and is based on the OpenSSH v7.1p2 release.

Lightship extensions are disabled by default and need to configured with --enable-lightship.  Enabling these extensions will result in the following functionality being added to the stock ciphers and MACs.

Do not use this build of OpenSSH for anything other than test purposes.  Lightship does not accept any liability for use of this software.  This software should be considered experimental.


# Support for the "none" MAC #
Support was added for the "none" mac: `ssh -m none -c aes128-cbc user@host`

This will work when the underlying cipher requires a hashing algorithm to perform the MAC.  If a cipher is chosen that has built-in integrity support (eg. chacha20-poly1305@openssh.com, or similar), then this option has no effect.

It has been tested both with the use of OpenSSL as the underlying cryptographic implementation as well as when OpenSSL is disabled using the --without-openssl configuration option.

The "none" MAC in the client or server can be used to directly test against requirements in the Network Devices collaborative Protection Profile (NDcPP) v1.0 for FCS_SSHS_EXT.1.6 and FCS_SSHC_EXT.1.6.  It can also be used to satisfy test requirements for FCS_SSHC_EXT.1.5 and FCS_SSHS_EXT.1.5 in NIAP's Extended Package for Secure Shell v1.0.


# Support for the "none" cipher #
Patched to allow the "none" cipher to be supported: `ssh -m hmac-sha1 -c none user@host`

Based heavily on information from: https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=24559#58

This is provided to ensure that SSH traffic can be viewed in cleartext over the wire to verify functionality, including, but not limited to, the use of the "none" MAC.


# Additional functionality #
Lightship builds conformance test software.  We have constructed specific test tools to address SSH (among other) test requirements in current Common Criteria protection profiles.  Contact us at info@lightshipsec.com to learn more.
