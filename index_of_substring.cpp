#include <bits/stdc++.h>
using namespace std;

void IndexofSubstring(const char str[], const char s[]) {
    int i, j, k, l, ct = 0;
    l = strlen(s);
    
    for (i = 0; str[i]; i++) {
        k = i;
        for (j = 0; j < l; j++) {
            if (str[k] != s[j])
                break;
            k++;
        }
        
        if (j == l) {
            cout << "Substring found at index " << i << endl;
            ct++;
        }
    }
    
    if (ct == 0) {
        cout << "Substring not found." << endl;
    }
}

int main() {
    IndexofSubstring("aabbabaabbbaabbabaabbba", "aabb");
    return 0;
}
