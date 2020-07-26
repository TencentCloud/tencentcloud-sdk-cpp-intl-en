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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REGIONCONF_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REGIONCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ZoneCapacityConf.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Region information
                */
                class RegionConf : public AbstractModel
                {
                public:
                    RegionConf();
                    ~RegionConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param RegionId Region ID
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

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
                     * 获取Region abbreviation
                     * @return RegionShortName Region abbreviation
                     */
                    std::string GetRegionShortName() const;

                    /**
                     * 设置Region abbreviation
                     * @param RegionShortName Region abbreviation
                     */
                    void SetRegionShortName(const std::string& _regionShortName);

                    /**
                     * 判断参数 RegionShortName 是否已赋值
                     * @return RegionShortName 是否已赋值
                     */
                    bool RegionShortNameHasBeenSet() const;

                    /**
                     * 获取Name of the area where a region is located
                     * @return Area Name of the area where a region is located
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Name of the area where a region is located
                     * @param Area Name of the area where a region is located
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取AZ information
                     * @return ZoneSet AZ information
                     */
                    std::vector<ZoneCapacityConf> GetZoneSet() const;

                    /**
                     * 设置AZ information
                     * @param ZoneSet AZ information
                     */
                    void SetZoneSet(const std::vector<ZoneCapacityConf>& _zoneSet);

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     */
                    bool ZoneSetHasBeenSet() const;

                private:

                    /**
                     * Region ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region abbreviation
                     */
                    std::string m_regionShortName;
                    bool m_regionShortNameHasBeenSet;

                    /**
                     * Name of the area where a region is located
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * AZ information
                     */
                    std::vector<ZoneCapacityConf> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REGIONCONF_H_
