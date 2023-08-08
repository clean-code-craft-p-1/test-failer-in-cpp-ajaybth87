#include "pch.h"

#include "TestWeatherReport.h"

namespace senseweather
{
    int SensorStubRainy::Humidity() const
    {
        return 72;
    }
    int SensorStubRainy::Precipitation() const
    {
        return 70;
    }
    double SensorStubRainy::TemperatureInC() const
    {
        return 26;
    }
    int SensorStubRainy::WindSpeedKMPH() const
    {
        return 52;
    }

    int SensorStubHighPrecipitation::Humidity() const
    {
        return 72;
    }

    int SensorStubHighPrecipitation::Precipitation() const
    {
        return 65;
    }

    int SensorStubHighPrecipitation::WindSpeedKMPH() const
    {
        //low wind - speed(< 50)
        return 48;
    }

    double SensorStubHighPrecipitation::TemperatureInC() const
    {
        return 26;
    }

    int SensorStubHeatWave::Humidity() const
    {
        return 18;
    }
    int SensorStubHeatWave::Precipitation() const
    {
        return 17;
    }
    double SensorStubHeatWave::TemperatureInC() const
    {
        return 55;
    }
    int SensorStubHeatWave::WindSpeedKMPH() const
    {
        return 10;
    }

    int SensorStubStorm::Humidity() const
    {
        return 25;
    }
    int SensorStubStorm::Precipitation() const
    {
        return 18;
    }
    double SensorStubStorm::TemperatureInC() const
    {
        return 30;
    }
    int SensorStubStorm::WindSpeedKMPH() const
    {
        return 75;
    }
}

namespace reporttest
{
    void TestRainy()
    {
        senseweather::SensorStubRainy sensor;
        std::string report = Report(sensor);
        std::cout << report << std::endl;
        assert(report.find("rain") != std::string::npos);
    }

    void TestHighPrecipitation()
    {
        // This instance of stub needs to be different-
        // to give high precipitation (>60) and low wind-speed (<50)
        // strengthen the assert to expose the bug
        // (function returns Sunny day, it should predict rain)
        senseweather::SensorStubHighPrecipitation possiblePrecipitation;
        std::string report = Report(possiblePrecipitation);
        assert(report.length() > 0);
        assert(report == "Alert, Stormy with heavy rain");
    }

    void TestHeatWave()
    {
        senseweather::SensorStubHeatWave possibleHeatWave;
        std::string report = Report(possibleHeatWave);
        assert(report.length() > 0);
        assert(report.find("heat") != std::string::npos);

    }

    void TestStormWearther()
    {
        senseweather::SensorStubStorm possibleStorm;
        std::string report = Report(possibleStorm);
        assert(report.length() > 0);
        assert(report == "Alert, Stormy withiout rain");
    }

    void testForWeatherReport()
    {
        TestRainy();
        TestHighPrecipitation();
        TestHeatWave();
        TestStormWearther();
        std::cout << "All is well (maybe)\n";
    }

}

