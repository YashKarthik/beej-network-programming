#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main() {
  struct addrinfo hints;
  struct addrinfo *servinfo;

  memset(&hints, 0, sizeof hints);
  hints.ai_family = AF_UNSPEC;
  hints.ai_socktype = SOCK_STREAM;

  int status = getaddrinfo("yashkarthik.xyz", "http", &hints, &servinfo);

  printf("Status: %i\n", status);
  if (status != 0) {
    fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(status));
    return 2;
  }

  for (struct addrinfo *p = servinfo; p != NULL; p = p->ai_next) {
    void *addr;
    char *ipver;

    if (p->ai_family == AF_INET) {
      addr = &((struct sockaddr_in *)(p->ai_addr))->sin_addr;
      ipver = "IPv4";
    } else {
      addr = &((struct sockaddr_in6 *)(p->ai_addr))->sin6_addr;
      ipver = "IPv6";
    }

    char ipstr[INET6_ADDRSTRLEN];
    inet_ntop(p->ai_family, addr, ipstr, sizeof ipstr);
    printf(" %s: %s\n", ipver, ipstr);

  }

  freeaddrinfo(servinfo);
  return 0;
}
