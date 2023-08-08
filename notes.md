# 3.3 `structs`

- `addrinfo`
- socket descriptors are int;

- `getaddrinfo()` returns pointer to linked list of `addrinfo`s. Sets up structs we need later on.
- `addrinfo` contains a `sockaddr` struct which has the actual ip addr, host.

- `inet_pton()`: converts dots/hex+colons notation to numbers.
- `inet_ntop()`: converts numbers to dots/hex+colons notation.

- Network Address Translation: the external-internal IP addresses thingy. Behind firewall etc.

- `getaddrinfo` sets up data we will need later on. Visible effect: does DNS lookup on url.
