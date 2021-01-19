#include "space_age.h"

namespace space_age {
    space_age::space_age(long long sec) : sec_passed{sec} {}

    long long space_age::seconds() const
    {
        return sec_passed;
    }

    double space_age::on_earth() const
    {
        return sec_passed / earth_year_in_seconds;
    }

    double space_age::on_mercury() const
    {
        return sec_passed / earth_year_in_seconds / mercury_year_in_earth_years;
    }
    double space_age::on_venus() const
    {
        return sec_passed / earth_year_in_seconds / venus_year_in_earth_years;
    }

    double space_age::on_mars() const
    {
        return sec_passed / earth_year_in_seconds / mars_year_in_earth_years;
    }

    double space_age::on_jupiter() const
    {
        return sec_passed / earth_year_in_seconds / jupiter_year_in_earth_years;
    }

    double space_age::on_saturn() const
    {
        return sec_passed / earth_year_in_seconds / saturn_year_in_earth_years;
    }

    double space_age::on_uranus() const
    {
        return sec_passed / earth_year_in_seconds / uranus_year_in_earth_years;
    }

    double space_age::on_neptune() const
    {
        return sec_passed / earth_year_in_seconds / neptune_year_in_earth_years;
    }

}  // namespace space_age
