#include <assert.h>
#include "weatherreport.h"
#include "TestWeatherReport.h"
using namespace reporttest;
namespace WeatherSpace
{
    std::string Report(const IWeatherSensor& sensor)
    {
        int precipitation = sensor.Precipitation();
        // precipitation < 20 is a sunny day
        std::string report = "Sunny Day";

        if (sensor.TemperatureInC() > 25)
        {
            if (precipitation >= 20 && precipitation < 60)
                report = "Partly Cloudy";
            else if (sensor.WindSpeedKMPH() > 50)
                report = "Alert, Stormy with heavy rain";
        }
        return report;
    }

    
}

int main() {

    reporttest::testForWeatherReport();

    return 0;
}
