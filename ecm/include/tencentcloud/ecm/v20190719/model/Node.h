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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_NODE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_NODE_H_

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
#include <tencentcloud/ecm/v20190719/model/ISP.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Node information
                */
                class Node : public AbstractModel
                {
                public:
                    Node();
                    ~Node() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Zone information.
                     * @return ZoneInfo Zone information.
                     * 
                     */
                    ZoneInfo GetZoneInfo() const;

                    /**
                     * 设置Zone information.
                     * @param _zoneInfo Zone information.
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
                     * 获取Country/Region information.
                     * @return Country Country/Region information.
                     * 
                     */
                    Country GetCountry() const;

                    /**
                     * 设置Country/Region information.
                     * @param _country Country/Region information.
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
                     * 获取Region information.
                     * @return Area Region information.
                     * 
                     */
                    Area GetArea() const;

                    /**
                     * 设置Region information.
                     * @param _area Region information.
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
                     * 获取Province/State information.
                     * @return Province Province/State information.
                     * 
                     */
                    Province GetProvince() const;

                    /**
                     * 设置Province/State information.
                     * @param _province Province/State information.
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
                     * 获取City information.
                     * @return City City information.
                     * 
                     */
                    City GetCity() const;

                    /**
                     * 设置City information.
                     * @param _city City information.
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
                     * 获取Region information.
                     * @return RegionInfo Region information.
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Region information.
                     * @param _regionInfo Region information.
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取List of ISPs.
                     * @return ISPSet List of ISPs.
                     * 
                     */
                    std::vector<ISP> GetISPSet() const;

                    /**
                     * 设置List of ISPs.
                     * @param _iSPSet List of ISPs.
                     * 
                     */
                    void SetISPSet(const std::vector<ISP>& _iSPSet);

                    /**
                     * 判断参数 ISPSet 是否已赋值
                     * @return ISPSet 是否已赋值
                     * 
                     */
                    bool ISPSetHasBeenSet() const;

                    /**
                     * 获取Number of ISPs.
                     * @return ISPNum Number of ISPs.
                     * 
                     */
                    int64_t GetISPNum() const;

                    /**
                     * 设置Number of ISPs.
                     * @param _iSPNum Number of ISPs.
                     * 
                     */
                    void SetISPNum(const int64_t& _iSPNum);

                    /**
                     * 判断参数 ISPNum 是否已赋值
                     * @return ISPNum 是否已赋值
                     * 
                     */
                    bool ISPNumHasBeenSet() const;

                private:

                    /**
                     * Zone information.
                     */
                    ZoneInfo m_zoneInfo;
                    bool m_zoneInfoHasBeenSet;

                    /**
                     * Country/Region information.
                     */
                    Country m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Region information.
                     */
                    Area m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Province/State information.
                     */
                    Province m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * City information.
                     */
                    City m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Region information.
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * List of ISPs.
                     */
                    std::vector<ISP> m_iSPSet;
                    bool m_iSPSetHasBeenSet;

                    /**
                     * Number of ISPs.
                     */
                    int64_t m_iSPNum;
                    bool m_iSPNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_NODE_H_
