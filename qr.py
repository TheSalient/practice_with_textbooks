import pyqrcode
import png

link = "https://github.com/TheSalient"   # this is to initialise the link variable with  my git profile.

qr_code = pyqrcode.create(link)

qr_code.png("github.png", scale="5")
