#Find a Motif in DNA:
string = "AACTATGCAACTATGAAACTATGAACTATGATTCCAACTATGTAACTATGATGCATTAAACTATGAAACTATGAACTATGAACTATGAACTATGAAACTATGCGGAACTATGAACTATGGGGACAACTATGGAACTATGAGAACTATGTCAATTAACTATGCGTAACTATGGTCGAAACTATGAACTATGGAACTATGGCAACTATGCAAACTATGAAACTATGTAACTATGTGAAGGACGCACTAACTATGAGAAACTATGAACTATGAACTATGAACTATGCACGCGTTGTAACTATGATGACGATGAACTATGTATTAACTATGACCGAACTATGTCAACTATGTTTTAACTATGAAACTATGTAACTATGTGGTCAACTATGGCATTCCAACTATGGAACTATGAACTATGGTACCTAACTATGATCTGAAACTATGAACTATGGCAACTATGAACTATGGAAGAATCGCGGCTACCTTTCTCGAACTATGGAATTTAACTATGGAACTATGCTGAAACTATGAACCAAACTATGTAAACTATGAACTATGAAACTATGGCTAGAACTATGATGTAACTATGAAACTATGAACTATGAACTATGAACTATGGAACTATGGTTGATAACTATGCAACGGTACGATGGTCGTCAACTATGAACTATGGAAACTATGGAACTATGAACTATGTGTCAACTATGAACTATGTGGAACTATGCCTAAACTATGCTTCCTCTCACGTGTACGAAACTATGCGAAACTATGAACTATGATGCTCAATGAACTATGCAACTATGCTAACTATGTCTTTGTTCAACTATGACAACTATGTGGGCAACTATGAACTATGGGAACTATGAACTATGAACTATGTCATATATGAAGTAACTATGAACTATGAACTATGCAACTATGGAACTATGGAACTATGAAACTATGAACTATGGCAACTATGAAGCGAACTATGCAGAAACTATG"

for i in range(len(string)):
    if string[i:].startswith("AACTATGAA"):
        print(i + 1)
