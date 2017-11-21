# Intro- ASCII Art clock in python 225 bytes.
# Details- https://www.reddit.com/r/tinycode/comments/14rx0l/digital_ascii_art_clock_in_python_225_bytes/

import time as t
while 1:print'\n'*99+'\n'.join([' '.join([['#'*4,"#  #","#   ","   #"][int("01110333330302003030110330203002010033330101001030"[int(z)*5+y])]for z in t.strftime("%H%M%S")])for y in range(5)])+'\n',t.sleep(1)