cmd_lib/gen_crc32table := gcc -Wp,-MD,lib/.gen_crc32table.d -Ilib -Wall -Wstrict-prototypes -O0 -fomit-frame-pointer -o lib/gen_crc32table /workdir/source/linux-2.6.22.5/lib/gen_crc32table.c  

deps_lib/gen_crc32table := \
  /workdir/source/linux-2.6.22.5/lib/gen_crc32table.c \
  /usr/include/stdio.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-32.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /workdir/source/linux-2.6.22.5/lib/crc32defs.h \
  /usr/include/inttypes.h \
  /usr/include/stdint.h \

lib/gen_crc32table: $(deps_lib/gen_crc32table)

$(deps_lib/gen_crc32table):
