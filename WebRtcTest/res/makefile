#Makefile for building webrtc library


CC= gcc -std=gnu99
CFLAGS= -O2 -Wall $(MYCFLAGS)
LDFLAGS= $(SYSLDFLAGS) $(MYLDFLAGS)
LIBS= -lm $(SYSLIBS) $(MYLIBS)

SYSLIBS=
SYSLDFLAGS=

MYLDFLAGS=
MYCFLAGS=
MYLIBS=


RM= rm -f


WRTC_T= wrtc
WRTC_A= libwrtc.a

$(WRTC_A): $(BASE_O)


$(WRTC_T): $(WRTC_O) $(WRTC_A)
	$(CC) -o $@ $(LDFLAGS) $(WRTC_O) $(WRTC_A) $(LIBS)


