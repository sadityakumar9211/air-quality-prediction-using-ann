#include<stdio.h>

/*
* Function that simulates the 'Neural Network' model for 'Weather AQI Prediction'
* Params:
*  X: a float array of size 9, it represents the input feature vector
*  y: a float which will be used for synthesis using Vivado
* Returns:
*  float, representing the answer (denoting the predicted AQI) computed by the neural network model.
*/
float aqi_prediction_nn(float X[9], float y);

int main(){
	
	// The input features for the model.
	float X[9] = {1, 29.7, 31.4, 27.3, 995.4, 83, 3.7, 5.6, 7.6};
	
	// AQI predicted using the Neural Network model.
	float predicted_aqi = aqi_prediction_nn(X, 2);
	
	printf("The predicted AQI is: %f \n", predicted_aqi);
	
	return 0;
}