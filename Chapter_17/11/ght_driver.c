#include "dht_driver.h"

dht_data* get_data(dht_data *pdata)
{

    pdata->temperature=36.6f;
    pdata->humidity=20.3f;

    return pdata;
}
