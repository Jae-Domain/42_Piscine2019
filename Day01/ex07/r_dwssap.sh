cat /etc/passwd | grep -v ^# > tmp # pipes file into grep, removes comments
sed '1!n;d' tmp > tmp2
cut -d ":" -f1 tmp2 > tmp 
#skips every other line starting at 2 
#strips lines for logins

rev tmp  > tmp2 #reverses logins 
sort -r tmp2 > tmp #sorts in reverse
sed -n '$FT_LINE1,$FT_LINE2p' tmp > tmp2 # grabs lines from FT_LINE1 to FT_LIN
tr '\n' ', ' < tmp2 > tmp #replaces newlines with commas
echo . >> tmp
cat tmp
