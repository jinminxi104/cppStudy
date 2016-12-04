
import struct

id = 123456
parsedata_id = struct.pack("L",id)
WriteFileData = open('py.dat','wb')
WriteFileData.write(parsedata_id)
WriteFileData.close()

text1 = 'abefg 123'
text1.encode("UTF-16")
texlength = len(text1)
text2 = text1#[2:texlength] // it could be an issue when use it in c/c++
WriteFileData = open('py2.dat','wb')
WriteFileData.write(text2);
WriteFileData.close()
