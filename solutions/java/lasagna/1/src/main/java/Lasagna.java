public class Lasagna {

	int	expectedMinutesInOven()
	{
		return (40);
	}

	int	remainingMinutesInOven(int minuts_in_oven)
	{
		return (this.expectedMinutesInOven() - minuts_in_oven);
	}
	
	int	preparationTimeInMinutes(int layers)
	{
		return (layers * 2); 
	}

	totalTimeInMinutes(int layers_number, int minuts_in_oven)
	{
		return (preparationTimeInMinutes(layers_number) + minuts_in_oven);
	}
}
