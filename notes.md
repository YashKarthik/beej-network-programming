# 3.3 `structs`

- `addrinfo`
- socket descriptors are int;

- `getaddrinfo()` returns pointer to linked list of `addrinfo`s. Sets up structs we need later on.
- `addrinfo` contains a `sockaddr` struct which has the actual ip addr, host.

- `inet_pton()`: converts dots/hex+colons notation to numbers.
- `inet_ntop()`: converts numbers to dots/hex+colons notation.

- Network Address Translation: the external-internal IP addresses thingy. Behind firewall etc.

- `getaddrinfo` sets up data we will need later on. Visible effect: does DNS lookup on url.

- `socket()` gets the file descriptor (an int) for the connection (or smth like that).

- `bind()`: associates the socket with the host machine's local address. That's why server side
        binds, so that clients can use that address to connect to server. "Assigning a name to a
        socket"
