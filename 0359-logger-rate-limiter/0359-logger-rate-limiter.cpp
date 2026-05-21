class Logger {
public:

    unordered_map<string, int> lastTime;
    Logger() {

    }

    bool shouldPrintMessage(int timestamp, string message) {

        if (!lastTime.count(message)) {

            lastTime[message] = timestamp;
            return true;
        }

        if (timestamp - lastTime[message] >= 10) {
            lastTime[message] = timestamp;
            return true;
        }

        return false;
    }
};
