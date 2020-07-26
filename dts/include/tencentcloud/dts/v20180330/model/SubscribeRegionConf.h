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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEREGIONCONF_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEREGIONCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Sale information of data subscription region
                */
                class SubscribeRegionConf : public AbstractModel
                {
                public:
                    SubscribeRegionConf();
                    ~SubscribeRegionConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name, such as Guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionName Region name, such as Guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name, such as Guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RegionName Region name, such as Guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Region ID, such as ap-guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Region Region ID, such as ap-guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region ID, such as ap-guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Region Region ID, such as ap-guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Region name, such as South China
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Area Region name, such as South China
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region name, such as South China
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Area Region name, such as South China
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Whether it is the default region. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsDefaultRegion Whether it is the default region. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsDefaultRegion() const;

                    /**
                     * 设置Whether it is the default region. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsDefaultRegion Whether it is the default region. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsDefaultRegion(const int64_t& _isDefaultRegion);

                    /**
                     * 判断参数 IsDefaultRegion 是否已赋值
                     * @return IsDefaultRegion 是否已赋值
                     */
                    bool IsDefaultRegionHasBeenSet() const;

                    /**
                     * 获取Purchasable status of current region. 1: normal, 2: beta test, 3: not purchasable
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Purchasable status of current region. 1: normal, 2: beta test, 3: not purchasable
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Purchasable status of current region. 1: normal, 2: beta test, 3: not purchasable
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Status Purchasable status of current region. 1: normal, 2: beta test, 3: not purchasable
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Region name, such as Guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region ID, such as ap-guangzhou
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region name, such as South China
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether it is the default region. 0: no, 1: yes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isDefaultRegion;
                    bool m_isDefaultRegionHasBeenSet;

                    /**
                     * Purchasable status of current region. 1: normal, 2: beta test, 3: not purchasable
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEREGIONCONF_H_
