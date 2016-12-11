import requests
import os
print "////////////////////////////////////////////\n"
print "////////////////////////////////////////////\n"
print "  _____  ______ _____   _____________ ____ /\n"
print "/|  __ \|  ____|  __ \ / ____|  ____/ ____|/\n"
print "/| |  | | |__  | |  | | (___ | |__ | |     /\n"
print "/| |  | |  __| | |  | |\___ \|  __|| |     /\n"
print "/| |__| | |____| |__| |____) | |___| |____ /\n"
print "/|_____/|______|_____/|_____/|______\_____|/\n"
print "////////////////////////////////////////////\n"
print "////////////////////////////////////////////\n"
print "////////////////////////////////////////////\n"
                                          
                                          
opo = raw_input('Input web address: ')
try:
    r = requests.head(opo)
    print(r.status_code)
    # prints the int of the status code. Find more at httpstatusrappers.com :)
except requests.ConnectionError:
    print("failed to connect")

try: 
    a = requests.head(opo + 'query=<h1>HELLLO</h1>')
    print(a.status_code)
except requests.ConnectionError:
    print("Failed to Connect")
