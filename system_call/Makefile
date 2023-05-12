KDIR =/home/udooer/kernel/linux_kernel-3.14-1.0.x-udoo
INCLUDEDIRS += -I$(KDIR)/arch/arm/include
INCLUDEDIRS += -I$(KDIR)/include/generated
CC = arm-linux-gnueabihf-gcc
CFLAGS += $(INCLUDEDIRS)
CFLAGS += -Wall -O2
TARGET =syscall_app_shift
OBJS = $(TARGET).o
SRCS = $(TARGET).c
$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o $@
clean :
	rm -rf $(OBJS) $(TARGET) 
