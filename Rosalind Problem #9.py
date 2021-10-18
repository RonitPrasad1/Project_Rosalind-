string = "GATATATGCATATACTT" 

for i in range(len(string)):
    if string[i:].startswith("ATAT"):
        print(i + 1)