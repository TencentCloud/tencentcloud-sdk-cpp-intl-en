/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_IPLOCATION_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_IPLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The geographical location of the IP address
                */
                class IPLocation : public AbstractModel
                {
                public:
                    IPLocation();
                    ~IPLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The country of the IP address</p>
                     * @return Country <p>The country of the IP address</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>The country of the IP address</p>
                     * @param _country <p>The country of the IP address</p>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取<p>The region of the IP address</p>
                     * @return Region <p>The region of the IP address</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>The region of the IP address</p>
                     * @param _region <p>The region of the IP address</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>The city of the IP address</p>
                     * @return City <p>The city of the IP address</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>The city of the IP address</p>
                     * @param _city <p>The city of the IP address</p>
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取<p>The district of the IP address</p>
                     * @return District <p>The district of the IP address</p>
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置<p>The district of the IP address</p>
                     * @param _district <p>The district of the IP address</p>
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取<p>The longitude of the IP address</p>
                     * @return Longitude <p>The longitude of the IP address</p>
                     * 
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置<p>The longitude of the IP address</p>
                     * @param _longitude <p>The longitude of the IP address</p>
                     * 
                     */
                    void SetLongitude(const std::string& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取<p>The latitude of the IP address</p>
                     * @return Latitude <p>The latitude of the IP address</p>
                     * 
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置<p>The latitude of the IP address</p>
                     * @param _latitude <p>The latitude of the IP address</p>
                     * 
                     */
                    void SetLatitude(const std::string& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取<p>The timezone of the IP address</p>
                     * @return Timezone <p>The timezone of the IP address</p>
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置<p>The timezone of the IP address</p>
                     * @param _timezone <p>The timezone of the IP address</p>
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                    /**
                     * 获取<p>The zip code of the IP address</p>
                     * @return ZipCode <p>The zip code of the IP address</p>
                     * 
                     */
                    std::string GetZipCode() const;

                    /**
                     * 设置<p>The zip code of the IP address</p>
                     * @param _zipCode <p>The zip code of the IP address</p>
                     * 
                     */
                    void SetZipCode(const std::string& _zipCode);

                    /**
                     * 判断参数 ZipCode 是否已赋值
                     * @return ZipCode 是否已赋值
                     * 
                     */
                    bool ZipCodeHasBeenSet() const;

                private:

                    /**
                     * <p>The country of the IP address</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>The region of the IP address</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>The city of the IP address</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>The district of the IP address</p>
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * <p>The longitude of the IP address</p>
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * <p>The latitude of the IP address</p>
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * <p>The timezone of the IP address</p>
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * <p>The zip code of the IP address</p>
                     */
                    std::string m_zipCode;
                    bool m_zipCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_IPLOCATION_H_
