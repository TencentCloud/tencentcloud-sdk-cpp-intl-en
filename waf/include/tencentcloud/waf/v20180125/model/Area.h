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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_AREA_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_AREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Region information
                */
                class Area : public AbstractModel
                {
                public:
                    Area();
                    ~Area() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country. Except for support for the specific country identifiers, it also supports domestic and foreign identifiers.
                     * @return Country Country. Except for support for the specific country identifiers, it also supports domestic and foreign identifiers.
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置Country. Except for support for the specific country identifiers, it also supports domestic and foreign identifiers.
                     * @param _country Country. Except for support for the specific country identifiers, it also supports domestic and foreign identifiers.
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
                     * 获取Province
                     * @return Region Province
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Province
                     * @param _region Province
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
                     * 获取City
                     * @return City City
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City
                     * @param _city City
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                private:

                    /**
                     * Country. Except for support for the specific country identifiers, it also supports domestic and foreign identifiers.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Province
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * City
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_AREA_H_
