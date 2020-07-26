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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_REGIONSELLCONF_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_REGIONSELLCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ZoneSellConf.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Sale configuration of the region
                */
                class RegionSellConf : public AbstractModel
                {
                public:
                    RegionSellConf();
                    ~RegionSellConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name
                     * @return RegionName Region name
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
                     * @param RegionName Region name
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Area
                     * @return Area Area
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Area
                     * @param Area Area
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Whether it is a default region
                     * @return IsDefaultRegion Whether it is a default region
                     */
                    int64_t GetIsDefaultRegion() const;

                    /**
                     * 设置Whether it is a default region
                     * @param IsDefaultRegion Whether it is a default region
                     */
                    void SetIsDefaultRegion(const int64_t& _isDefaultRegion);

                    /**
                     * 判断参数 IsDefaultRegion 是否已赋值
                     * @return IsDefaultRegion 是否已赋值
                     */
                    bool IsDefaultRegionHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return Region Region name
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name
                     * @param Region Region name
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Sale configuration of the AZ
                     * @return ZonesConf Sale configuration of the AZ
                     */
                    std::vector<ZoneSellConf> GetZonesConf() const;

                    /**
                     * 设置Sale configuration of the AZ
                     * @param ZonesConf Sale configuration of the AZ
                     */
                    void SetZonesConf(const std::vector<ZoneSellConf>& _zonesConf);

                    /**
                     * 判断参数 ZonesConf 是否已赋值
                     * @return ZonesConf 是否已赋值
                     */
                    bool ZonesConfHasBeenSet() const;

                private:

                    /**
                     * Region name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Area
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether it is a default region
                     */
                    int64_t m_isDefaultRegion;
                    bool m_isDefaultRegionHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Sale configuration of the AZ
                     */
                    std::vector<ZoneSellConf> m_zonesConf;
                    bool m_zonesConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_REGIONSELLCONF_H_
