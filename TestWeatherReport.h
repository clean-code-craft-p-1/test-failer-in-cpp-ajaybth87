#ifndef TESTWEATHERREPORT_H
#define TESTWEATHERREPORT_H
#include<iostream>
#include "weatherreport.h"

namespace senseweather
{
    /// <summary>
   /// This is a stub for a weather sensor. For the sake of testing 
   /// we create a stub that generates weather data and allows us to
   /// test the other parts of this application in isolation
   /// without needing the actual Sensor during development
   /// </summary>
    class SensorStubRainy : public WeatherSpace::IWeatherSensor {
        int Humidity() const override;

        int Precipitation() const override;

        double TemperatureInC() const override;

        int WindSpeedKMPH() const override;
    };

    class SensorStubHighPrecipitation : public WeatherSpace::IWeatherSensor {

        int Humidity() const override;

        int Precipitation() const override;

        int WindSpeedKMPH() const override;

        double TemperatureInC() const override;
    };

    class SensorStubHeatWave : public WeatherSpace::IWeatherSensor {

        int Humidity() const override;

        int Precipitation() const override;

        int WindSpeedKMPH() const override;

        double TemperatureInC() const override;
    };

    class SensorStubStorm : public WeatherSpace::IWeatherSensor {

        int Humidity() const override;

        int Precipitation() const override;

        int WindSpeedKMPH() const override;

        double TemperatureInC() const override;
    };

    
}

namespace reporttest
{
    void TestRainy();

    void TestHighPrecipitation();

    void TestHeatWave();

    void TestStormWearther();

    void testForWeatherReport();
}

#endif // !TESTWEATHERREPORT_H
