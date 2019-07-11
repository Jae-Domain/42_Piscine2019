
git log -5 > temp.txt
grep "commit " temp.txt > temp2.txt
sed 's/commit //' temp2.txt
