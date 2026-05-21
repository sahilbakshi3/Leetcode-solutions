class StringIterator {
public:

    string s;
    int index;
    char currChar;
    int count;

    StringIterator(string compressedString) {

        s = compressedString;
        index = 0;
        currChar = ' ';
        count = 0;
    }

    char next() {

        if (!hasNext()) {
            return ' ';
        }

        if (count == 0) {

            currChar = s[index++];

            while (index < s.size() &&
                   isdigit(s[index])) {

                count =
                    count * 10 +
                    (s[index] - '0');

                index++;
            }
        }

        count--;

        return currChar;
    }

    bool hasNext() {

        return index < s.size() || count > 0;
    }
};
