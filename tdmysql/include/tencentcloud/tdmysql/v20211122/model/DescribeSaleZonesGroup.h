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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESGROUP_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Query sales regions and recommend availability zone combinations
                */
                class DescribeSaleZonesGroup : public AbstractModel
                {
                public:
                    DescribeSaleZonesGroup();
                    ~DescribeSaleZonesGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of availability zones</p>
                     * @return ZoneNum <p>Number of availability zones</p>
                     * 
                     */
                    int64_t GetZoneNum() const;

                    /**
                     * 设置<p>Number of availability zones</p>
                     * @param _zoneNum <p>Number of availability zones</p>
                     * 
                     */
                    void SetZoneNum(const int64_t& _zoneNum);

                    /**
                     * 判断参数 ZoneNum 是否已赋值
                     * @return ZoneNum 是否已赋值
                     * 
                     */
                    bool ZoneNumHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone combination</p>
                     * @return Zones <p>Availability zone combination</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>Availability zone combination</p>
                     * @param _zones <p>Availability zone combination</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>Supported types</p>
                     * @return SupportTypes <p>Supported types</p>
                     * 
                     */
                    std::vector<std::string> GetSupportTypes() const;

                    /**
                     * 设置<p>Supported types</p>
                     * @param _supportTypes <p>Supported types</p>
                     * 
                     */
                    void SetSupportTypes(const std::vector<std::string>& _supportTypes);

                    /**
                     * 判断参数 SupportTypes 是否已赋值
                     * @return SupportTypes 是否已赋值
                     * 
                     */
                    bool SupportTypesHasBeenSet() const;

                    /**
                     * 获取<p>Supported disk</p><p>Enumeration value:</p><ul><li>CLOUD_TCS: Local disk</li><li>CLOUD_HSSD: Enhanced cloud disk</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AvailableDiskTypes <p>Supported disk</p><p>Enumeration value:</p><ul><li>CLOUD_TCS: Local disk</li><li>CLOUD_HSSD: Enhanced cloud disk</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAvailableDiskTypes() const;

                    /**
                     * 设置<p>Supported disk</p><p>Enumeration value:</p><ul><li>CLOUD_TCS: Local disk</li><li>CLOUD_HSSD: Enhanced cloud disk</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _availableDiskTypes <p>Supported disk</p><p>Enumeration value:</p><ul><li>CLOUD_TCS: Local disk</li><li>CLOUD_HSSD: Enhanced cloud disk</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableDiskTypes(const std::vector<std::string>& _availableDiskTypes);

                    /**
                     * 判断参数 AvailableDiskTypes 是否已赋值
                     * @return AvailableDiskTypes 是否已赋值
                     * 
                     */
                    bool AvailableDiskTypesHasBeenSet() const;

                    /**
                     * 获取<p>Whether serverless is supported</p>
                     * @return IsSupportServerless <p>Whether serverless is supported</p>
                     * 
                     */
                    bool GetIsSupportServerless() const;

                    /**
                     * 设置<p>Whether serverless is supported</p>
                     * @param _isSupportServerless <p>Whether serverless is supported</p>
                     * 
                     */
                    void SetIsSupportServerless(const bool& _isSupportServerless);

                    /**
                     * 判断参数 IsSupportServerless 是否已赋值
                     * @return IsSupportServerless 是否已赋值
                     * 
                     */
                    bool IsSupportServerlessHasBeenSet() const;

                private:

                    /**
                     * <p>Number of availability zones</p>
                     */
                    int64_t m_zoneNum;
                    bool m_zoneNumHasBeenSet;

                    /**
                     * <p>Availability zone combination</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>Supported types</p>
                     */
                    std::vector<std::string> m_supportTypes;
                    bool m_supportTypesHasBeenSet;

                    /**
                     * <p>Supported disk</p><p>Enumeration value:</p><ul><li>CLOUD_TCS: Local disk</li><li>CLOUD_HSSD: Enhanced cloud disk</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_availableDiskTypes;
                    bool m_availableDiskTypesHasBeenSet;

                    /**
                     * <p>Whether serverless is supported</p>
                     */
                    bool m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESGROUP_H_
