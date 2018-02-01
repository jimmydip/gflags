CC = g++
CFLAGS = -Wall -lgflags
TARGET = test

OBJS = test.o
OBJSDIR = $(PWD)/objs
SRCDIR = $(PWD)/../src

all: BUILDDIR $(TARGET) 

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJSDIR)/$(OBJS) $(CFLAGS)

BUILDDIR:
	mkdir -p $(OBJSDIR)

%.o:$(SRCDIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -o $(OBJSDIR)/$@

clean:
	rm -rf $(TARGET) $(OBJSDIR)
