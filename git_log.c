#define LOG_BUF_MAX 1
unsigned long git_deflate_bound(z_streamp strm, unsigned long size)
{
  return deflateBound(strm, size);
}
