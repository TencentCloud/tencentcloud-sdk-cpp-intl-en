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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_POSITION_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_POSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ZoneInfo.h>
#include <tencentcloud/ecm/v20190719/model/Country.h>
#include <tencentcloud/ecm/v20190719/model/Area.h>
#include <tencentcloud/ecm/v20190719/model/Province.h>
#include <tencentcloud/ecm/v20190719/model/City.h>
#include <tencentcloud/ecm/v20190719/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Location information of the instance.
                */
                class Position : public AbstractModel
                {
                public:
                    Position();
                    ~Position() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Zone information of the instance.
                     * @return ZoneInfo Zone information of the instance.
                     * 
                     */
                    ZoneInfo GetZoneInfo() const;

                    /**
                     * 设置Zone information of the instance.
                     * @param _zoneInfo Zone information of the instance.
                     * 
                     */
                    void SetZoneInfo(const ZoneInfo& _zoneInfo);

                    /**
                     * 判断参数 ZoneInfo 是否已赋值
                     * @return ZoneInfo 是否已赋值
                     * 
                     */
                    bool ZoneInfoHasBeenSet() const;

                    /**
                     * 获取Country/Region information of the instance.
                     * @return Country Country/Region information of the instance.
                     * 
                     */
                    Country GetCountry() const;

                    /**
                     * 设置Country/Region information of the instance.
                     * @param _country Country/Region information of the instance.
                     * 
                     */
                    void SetCountry(const Country& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取Area information of the instance.
                     * @return Area Area information of the instance.
                     * 
                     */
                    Area GetArea() const;

                    /**
                     * 设置Area information of the instance.
                     * @param _area Area information of the instance.
                     * 
                     */
                    void SetArea(const Area& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Province/State information of the instance.
                     * @return Province Province/State information of the instance.
                     * 
                     */
                    Province GetProvince() const;

                    /**
                     * 设置Province/State information of the instance.
                     * @param _province Province/State information of the instance.
                     * 
                     */
                    void SetProvince(const Province& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取City information of the instance.
                     * @return City City information of the instance.
                     * 
                     */
                    City GetCity() const;

                    /**
                     * 设置City information of the instance.
                     * @param _city City information of the instance.
                     * 
                     */
                    void SetCity(const City& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Region information of the instance.
                     * @return RegionInfo Region information of the instance.
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Region information of the instance.
                     * @param _regionInfo Region information of the instance.
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                private:

                    /**
                     * Zone information of the instance.
                     */
                    ZoneInfo m_zoneInfo;
                    bool m_zoneInfoHasBeenSet;

                    /**
                     * Country/Region information of the instance.
                     */
                    Country m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Area information of the instance.
                     */
                    Area m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Province/State information of the instance.
                     */
                    Province m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * City information of the instance.
                     */
                    City m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Region information of the instance.
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_POSITION_H_
