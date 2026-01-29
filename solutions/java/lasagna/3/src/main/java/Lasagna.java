public class Lasagna {

	public int	expectedMinutesInOven()
	{
		return (40);
	}

	public int	remainingMinutesInOven(int minuts_in_oven)
	{
		return (this.expectedMinutesInOven() - minuts_in_oven);
	}
	
	public int	preparationTimeInMinutes(int layers)
	{
		return (layers * 2); 
	}

	public int totalTimeInMinutes(int layers_number, int minuts_in_oven)
	{
		return (preparationTimeInMinutes(layers_number) + minuts_in_oven);
	}
}
