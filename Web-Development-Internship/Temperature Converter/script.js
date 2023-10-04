function convertTemperature() {
    
    const unit = document.getElementById("unit").value;
    const temperatureInput = document.getElementById("temperature");
    const resultDisplay = document.getElementById("result");
    const answerBox = document.getElementById("answer-box");

    // Get the value entered by the user
    const temperature = parseFloat(temperatureInput.value);

    // Check if the input is a valid number
    if (!isNaN(temperature)) {
        let convertedTemperature;

        if (unit === "celsius") {

            // Convert Celsius to Fahrenheit
            convertedTemperature = (temperature * 9 / 5) + 32;
            resultDisplay.textContent = `Temperature in Fahrenheit ${convertedTemperature.toFixed(2)} °F`;
        } else if (unit === "fahrenheit") {

            // Convert Fahrenheit to Celsius
            convertedTemperature = (temperature - 32) * 5 / 9;
            resultDisplay.textContent = `Temperature in Celsius ${convertedTemperature.toFixed(2)} °C`;
        }

        // Update the answer box with the converted temperature
        // answerBox.textContent = convertedTemperature.toFixed(2);
    } else {
        resultDisplay.textContent = ""; // Clear the answer box if there's no input
        // answerBox.textContent = "";
    }      
}