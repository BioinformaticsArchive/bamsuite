bamsuite
========

A collection of utilities for fast processing of bam files

1) bamflag
This utility marks the uniquely mapped reads in a bam file by updating the FLAG field (bit 0x800) or by updating the NH tag (see SAMtools)
./bamflag -in <bam_file> -out <bam_file> [-u default = NO] [-v default = NO] [-m <mode> default = 1] [-lim n_reads, default = NONE]
-in:	input BAM file
-out:	output BAM file
-m:	1 = mark NH tag, 2 = mark FLAG field, 3 = do both
-v:	suppress verbose output
-u:	treat all reads as read1 (unstranded)
-lim:	process only first n_reads (for debugging)
A short report on read counts is written to stderr.

2) sjcount

