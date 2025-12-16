public class CarsAssemble {

	public double productionRatePerHour(int speed) {
		int success_rate;

		success_rate = 0;
		if (speed <= 4 && speed >= 1)
			success_rate = 100;
		else if (speed > 4 && speed <= 8)
			success_rate = 90;
		else if (speed > 8 && speed < 10)
			success_rate = 80;
		else if (speed > 10)
			success_rate = 77;
		return (speed * 221 * success_rate / 100);
	}

	public int workingItemsPerMinute(int speed) {
		return ((int) productionRatePerHour(speed) / 60);
	}
}
