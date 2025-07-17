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

#ifndef TENCENTCLOUD_REGION_V20220627_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_REGION_V20220627_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Region
    {
        namespace V20220627
        {
            namespace Model
            {
                /**
                * Region information
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name, such as ap-guangzhou.
                     * @return Region Region name, such as ap-guangzhou.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name, such as ap-guangzhou.
                     * @param _region Region name, such as ap-guangzhou.
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
                     * 获取Region description, for example, South China (Guangzhou).
                     * @return RegionName Region description, for example, South China (Guangzhou).
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region description, for example, South China (Guangzhou).
                     * @param _regionName Region description, for example, South China (Guangzhou).
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
                     * 获取Whether the region is in an available state.
                     * @return RegionState Whether the region is in an available state.
                     * 
                     */
                    std::string GetRegionState() const;

                    /**
                     * 设置Whether the region is in an available state.
                     * @param _regionState Whether the region is in an available state.
                     * 
                     */
                    void SetRegionState(const std::string& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     * 
                     */
                    bool RegionStateHasBeenSet() const;

                    /**
                     * 获取Console type. defaults to null when called via api.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionTypeMC Console type. defaults to null when called via api.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRegionTypeMC() const;

                    /**
                     * 设置Console type. defaults to null when called via api.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionTypeMC Console type. defaults to null when called via api.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionTypeMC(const int64_t& _regionTypeMC);

                    /**
                     * 判断参数 RegionTypeMC 是否已赋值
                     * @return RegionTypeMC 是否已赋值
                     * 
                     */
                    bool RegionTypeMCHasBeenSet() const;

                    /**
                     * 获取Region for different languages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocationMC Region for different languages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocationMC() const;

                    /**
                     * 设置Region for different languages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _locationMC Region for different languages.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocationMC(const std::string& _locationMC);

                    /**
                     * 判断参数 LocationMC 是否已赋值
                     * @return LocationMC 是否已赋值
                     * 
                     */
                    bool LocationMCHasBeenSet() const;

                    /**
                     * 获取Region description on console display.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionNameMC Region description on console display.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionNameMC() const;

                    /**
                     * 设置Region description on console display.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionNameMC Region description on console display.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionNameMC(const std::string& _regionNameMC);

                    /**
                     * 判断参数 RegionNameMC 是否已赋值
                     * @return RegionNameMC 是否已赋值
                     * 
                     */
                    bool RegionNameMCHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionIdMC 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionIdMC() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionIdMC 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionIdMC(const std::string& _regionIdMC);

                    /**
                     * 判断参数 RegionIdMC 是否已赋值
                     * @return RegionIdMC 是否已赋值
                     * 
                     */
                    bool RegionIdMCHasBeenSet() const;

                private:

                    /**
                     * Region name, such as ap-guangzhou.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region description, for example, South China (Guangzhou).
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Whether the region is in an available state.
                     */
                    std::string m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * Console type. defaults to null when called via api.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionTypeMC;
                    bool m_regionTypeMCHasBeenSet;

                    /**
                     * Region for different languages.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_locationMC;
                    bool m_locationMCHasBeenSet;

                    /**
                     * Region description on console display.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionNameMC;
                    bool m_regionNameMCHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionIdMC;
                    bool m_regionIdMCHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REGION_V20220627_MODEL_REGIONINFO_H_
