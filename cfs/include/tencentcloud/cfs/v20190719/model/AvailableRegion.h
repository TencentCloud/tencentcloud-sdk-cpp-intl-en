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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEREGION_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AvailableZone.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Versioning - array of regions
                */
                class AvailableRegion : public AbstractModel
                {
                public:
                    AvailableRegion();
                    ~AvailableRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name, such as "ap-beijing"
                     * @return Region Region name, such as "ap-beijing"
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name, such as "ap-beijing"
                     * @param _region Region name, such as "ap-beijing"
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
                     * 获取Region name, such as "bj"
                     * @return RegionName Region name, such as "bj"
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name, such as "bj"
                     * @param _regionName Region name, such as "bj"
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Region availability. If a region has at least one AZ where resources are purchasable, this value will be `AVAILABLE`; otherwise, it will be `UNAVAILABLE`
                     * @return RegionStatus Region availability. If a region has at least one AZ where resources are purchasable, this value will be `AVAILABLE`; otherwise, it will be `UNAVAILABLE`
                     * 
                     */
                    std::string GetRegionStatus() const;

                    /**
                     * 设置Region availability. If a region has at least one AZ where resources are purchasable, this value will be `AVAILABLE`; otherwise, it will be `UNAVAILABLE`
                     * @param _regionStatus Region availability. If a region has at least one AZ where resources are purchasable, this value will be `AVAILABLE`; otherwise, it will be `UNAVAILABLE`
                     * 
                     */
                    void SetRegionStatus(const std::string& _regionStatus);

                    /**
                     * 判断参数 RegionStatus 是否已赋值
                     * @return RegionStatus 是否已赋值
                     * 
                     */
                    bool RegionStatusHasBeenSet() const;

                    /**
                     * 获取Array of AZs
                     * @return Zones Array of AZs
                     * 
                     */
                    std::vector<AvailableZone> GetZones() const;

                    /**
                     * 设置Array of AZs
                     * @param _zones Array of AZs
                     * 
                     */
                    void SetZones(const std::vector<AvailableZone>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Region name, such as "Guangzhou"
                     * @return RegionCnName Region name, such as "Guangzhou"
                     * 
                     */
                    std::string GetRegionCnName() const;

                    /**
                     * 设置Region name, such as "Guangzhou"
                     * @param _regionCnName Region name, such as "Guangzhou"
                     * 
                     */
                    void SetRegionCnName(const std::string& _regionCnName);

                    /**
                     * 判断参数 RegionCnName 是否已赋值
                     * @return RegionCnName 是否已赋值
                     * 
                     */
                    bool RegionCnNameHasBeenSet() const;

                private:

                    /**
                     * Region name, such as "ap-beijing"
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region name, such as "bj"
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region availability. If a region has at least one AZ where resources are purchasable, this value will be `AVAILABLE`; otherwise, it will be `UNAVAILABLE`
                     */
                    std::string m_regionStatus;
                    bool m_regionStatusHasBeenSet;

                    /**
                     * Array of AZs
                     */
                    std::vector<AvailableZone> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Region name, such as "Guangzhou"
                     */
                    std::string m_regionCnName;
                    bool m_regionCnNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEREGION_H_
