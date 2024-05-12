#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <linux/i2c.h>

int readReg(int filedesc, uint8_t reg_addr, uint8_t *data)
{
  /* TODO */
  return 0;
}

int writeReg(int filedesc, uint8_t reg_addr, uint8_t *data)
{
  /* TODO */
  return 0;
}

int main(int argc, char *argv[])
{
  if (argc < 3)
  {
    printf("./i2cvga [PATH] [REG]");
  }

  char    *fd_path = (char *)argv[1];
  int     fd = open(fd_path, O_RDWR);
  uint8_t reg_addr = atoi(argv[2]);

  if (fd < 0)
  {
      perror("open");
      return 1;
  }

  close(fd);

  return 0;
}
