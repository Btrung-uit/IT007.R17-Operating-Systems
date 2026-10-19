# BTH2 - 14 ham pthread_attr

Day la dung **14 ham** trong bang cua bao cao. Moi file C dat ten theo mot ham. Cac file `get...` chi doc gia tri mac dinh; cac file `set...` thay doi thuoc tinh va in ket qua. `pthread_attr_init()` va `pthread_attr_destroy()` la hai ham khoi tao/huy bat buoc truoc va sau khi dung attr.

## Danh sach file

| File | Ham minh hoa | Ket qua can quan sat |
|---|---|---|
| `attr_init.c` | `pthread_attr_init` | khoi tao attr thanh cong |
| `attr_destroy.c` | `pthread_attr_destroy` | huy attr thanh cong |
| `attr_getschedparam.c` | `pthread_attr_getschedparam` | priority mac dinh |
| `attr_getschedpolicy.c` | `pthread_attr_getschedpolicy` | policy mac dinh |
| `attr_getdetachstate.c` | `pthread_attr_getdetachstate` | JOINABLE/DETACHED mac dinh |
| `attr_getinheritsched.c` | `pthread_attr_getinheritsched` | cach ke thua lich trinh |
| `attr_getscope.c` | `pthread_attr_getscope` | scope mac dinh |
| `attr_setdetachstate.c` | `pthread_attr_setdetachstate` | JOINABLE -> DETACHED |
| `attr_setguardsize.c` | `pthread_attr_setguardsize` | guard size doi thanh 4096 bytes |
| `attr_setstackaddr.c` | `pthread_attr_setstackaddr` | dat dia chi stack (loi thoi) |
| `attr_setstacksize.c` | `pthread_attr_setstacksize` | stack size doi thanh 1 MiB |
| `attr_getguardsize.c` | `pthread_attr_getguardsize` | guard size mac dinh |
| `attr_getstackaddr.c` | `pthread_attr_getstackaddr` | dia chi stack (loi thoi) |
| `attr_getstacksize.c` | `pthread_attr_getstacksize` | stack size mac dinh |

`pthread_attr_setstackaddr()` va `pthread_attr_getstackaddr()` da loi thoi trong POSIX. Bao cao nen ghi ro dieu nay va uu tien `pthread_attr_setstack()` / `pthread_attr_getstack()` trong code moi.

## Chay tung file

Mo terminal tai thu muc nay, sau do chay theo mau:

```bash
gcc -Wall -Wextra -std=c11 -pthread attr_setguardsize.c -o attr_setguardsize
./attr_setguardsize
```

Thay `attr_setguardsize` bang ten file chuong trinh muon chay. Vi du cho `detachstate`:

```bash
gcc -Wall -Wextra -std=c11 -pthread attr_setdetachstate.c -o attr_setdetachstate
./attr_setdetachstate
```

Hoac bien dich tat ca bang Makefile:

```bash
make
./attr_setdetachstate
./attr_setguardsize
./attr_init
./attr_destroy
./attr_getschedparam
./attr_getschedpolicy
./attr_getdetachstate
./attr_getinheritsched
./attr_getscope
./attr_setdetachstate
./attr_setguardsize
./attr_setstackaddr
./attr_setstacksize
./attr_getguardsize
./attr_getstackaddr
./attr_getstacksize
```

Xoa cac file da bien dich:

```bash
make clean
```

## Anh chup de dua vao bao cao

Voi moi file, chup 2 anh:

1. `nano <ten-file>.c` de thay source code va chu thich.
2. Lenh `gcc ...` va `./<ten-file>` cung ket qua output trong mot cua so terminal.

