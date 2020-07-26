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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_COUNTRYAREAMAP_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_COUNTRYAREAMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Country/region code mapping (name and code)
                */
                class CountryAreaMap : public AbstractModel
                {
                public:
                    CountryAreaMap();
                    ~CountryAreaMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country name.
                     * @return NationCountryName Country name.
                     */
                    std::string GetNationCountryName() const;

                    /**
                     * 设置Country name.
                     * @param NationCountryName Country name.
                     */
                    void SetNationCountryName(const std::string& _nationCountryName);

                    /**
                     * 判断参数 NationCountryName 是否已赋值
                     * @return NationCountryName 是否已赋值
                     */
                    bool NationCountryNameHasBeenSet() const;

                    /**
                     * 获取Country code.
                     * @return NationCountryInnerCode Country code.
                     */
                    std::string GetNationCountryInnerCode() const;

                    /**
                     * 设置Country code.
                     * @param NationCountryInnerCode Country code.
                     */
                    void SetNationCountryInnerCode(const std::string& _nationCountryInnerCode);

                    /**
                     * 判断参数 NationCountryInnerCode 是否已赋值
                     * @return NationCountryInnerCode 是否已赋值
                     */
                    bool NationCountryInnerCodeHasBeenSet() const;

                    /**
                     * 获取Region name.
                     * @return GeographicalZoneName Region name.
                     */
                    std::string GetGeographicalZoneName() const;

                    /**
                     * 设置Region name.
                     * @param GeographicalZoneName Region name.
                     */
                    void SetGeographicalZoneName(const std::string& _geographicalZoneName);

                    /**
                     * 判断参数 GeographicalZoneName 是否已赋值
                     * @return GeographicalZoneName 是否已赋值
                     */
                    bool GeographicalZoneNameHasBeenSet() const;

                    /**
                     * 获取Region code.
                     * @return GeographicalZoneInnerCode Region code.
                     */
                    std::string GetGeographicalZoneInnerCode() const;

                    /**
                     * 设置Region code.
                     * @param GeographicalZoneInnerCode Region code.
                     */
                    void SetGeographicalZoneInnerCode(const std::string& _geographicalZoneInnerCode);

                    /**
                     * 判断参数 GeographicalZoneInnerCode 是否已赋值
                     * @return GeographicalZoneInnerCode 是否已赋值
                     */
                    bool GeographicalZoneInnerCodeHasBeenSet() const;

                    /**
                     * 获取Continent name.
                     * @return ContinentName Continent name.
                     */
                    std::string GetContinentName() const;

                    /**
                     * 设置Continent name.
                     * @param ContinentName Continent name.
                     */
                    void SetContinentName(const std::string& _continentName);

                    /**
                     * 判断参数 ContinentName 是否已赋值
                     * @return ContinentName 是否已赋值
                     */
                    bool ContinentNameHasBeenSet() const;

                    /**
                     * 获取Continent code.
                     * @return ContinentInnerCode Continent code.
                     */
                    std::string GetContinentInnerCode() const;

                    /**
                     * 设置Continent code.
                     * @param ContinentInnerCode Continent code.
                     */
                    void SetContinentInnerCode(const std::string& _continentInnerCode);

                    /**
                     * 判断参数 ContinentInnerCode 是否已赋值
                     * @return ContinentInnerCode 是否已赋值
                     */
                    bool ContinentInnerCodeHasBeenSet() const;

                private:

                    /**
                     * Country name.
                     */
                    std::string m_nationCountryName;
                    bool m_nationCountryNameHasBeenSet;

                    /**
                     * Country code.
                     */
                    std::string m_nationCountryInnerCode;
                    bool m_nationCountryInnerCodeHasBeenSet;

                    /**
                     * Region name.
                     */
                    std::string m_geographicalZoneName;
                    bool m_geographicalZoneNameHasBeenSet;

                    /**
                     * Region code.
                     */
                    std::string m_geographicalZoneInnerCode;
                    bool m_geographicalZoneInnerCodeHasBeenSet;

                    /**
                     * Continent name.
                     */
                    std::string m_continentName;
                    bool m_continentNameHasBeenSet;

                    /**
                     * Continent code.
                     */
                    std::string m_continentInnerCode;
                    bool m_continentInnerCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_COUNTRYAREAMAP_H_
