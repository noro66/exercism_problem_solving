public class LogLevels {

	public static String message(String logLine) {
		return (logLine.split(": ")[1]);
	}

	public static String logLevel(String logLine) {
		String logType = logLine.split(":")[0];

		if (logType.equals("[ERROR]"))
			return ("error");
		else if (logType.equals("[WARNING]"))
			return ("warning");
		else
			return ("info");
	}

	public static String reformat(String logLine) {
		String logMessage = message(logLine);
		String log_level = logLevel(logLine);
		return (logMessage + " (" + log_level + ")");
	}
}
