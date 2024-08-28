/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PLACE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PLACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Log-in location information
                */
                class Place : public AbstractModel
                {
                public:
                    Place();
                    ~Place() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取City ID
                     * @return CityId City ID
                     * 
                     */
                    uint64_t GetCityId() const;

                    /**
                     * 设置City ID
                     * @param _cityId City ID
                     * 
                     */
                    void SetCityId(const uint64_t& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                    /**
                     * 获取Province ID
                     * @return ProvinceId Province ID
                     * 
                     */
                    uint64_t GetProvinceId() const;

                    /**
                     * 设置Province ID
                     * @param _provinceId Province ID
                     * 
                     */
                    void SetProvinceId(const uint64_t& _provinceId);

                    /**
                     * 判断参数 ProvinceId 是否已赋值
                     * @return ProvinceId 是否已赋值
                     * 
                     */
                    bool ProvinceIdHasBeenSet() const;

                    /**
                     * 获取Country ID. Currently, only 1 is supported, indicating China.
                     * @return CountryId Country ID. Currently, only 1 is supported, indicating China.
                     * 
                     */
                    uint64_t GetCountryId() const;

                    /**
                     * 设置Country ID. Currently, only 1 is supported, indicating China.
                     * @param _countryId Country ID. Currently, only 1 is supported, indicating China.
                     * 
                     */
                    void SetCountryId(const uint64_t& _countryId);

                    /**
                     * 判断参数 CountryId 是否已赋值
                     * @return CountryId 是否已赋值
                     * 
                     */
                    bool CountryIdHasBeenSet() const;

                    /**
                     * 获取Location name
                     * @return Location Location name
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Location name
                     * @param _location Location name
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * City ID
                     */
                    uint64_t m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * Province ID
                     */
                    uint64_t m_provinceId;
                    bool m_provinceIdHasBeenSet;

                    /**
                     * Country ID. Currently, only 1 is supported, indicating China.
                     */
                    uint64_t m_countryId;
                    bool m_countryIdHasBeenSet;

                    /**
                     * Location name
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PLACE_H_
