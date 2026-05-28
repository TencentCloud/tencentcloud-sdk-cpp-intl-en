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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEREGIONINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleZonesInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleZonesGroup.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Query the sales API. The return type is region information.
                */
                class DescribeSaleRegionInfo : public AbstractModel
                {
                public:
                    DescribeSaleRegionInfo();
                    ~DescribeSaleRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>English string of Region</p>
                     * @return Region <p>English string of Region</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>English string of Region</p>
                     * @param _region <p>English string of Region</p>
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
                     * 获取<p>Purchasable Zone list</p>
                     * @return ZoneList <p>Purchasable Zone list</p>
                     * 
                     */
                    std::vector<DescribeSaleZonesInfo> GetZoneList() const;

                    /**
                     * 设置<p>Purchasable Zone list</p>
                     * @param _zoneList <p>Purchasable Zone list</p>
                     * 
                     */
                    void SetZoneList(const std::vector<DescribeSaleZonesInfo>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取<p>Region Chinese character string</p>
                     * @return RegionName <p>Region Chinese character string</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>Region Chinese character string</p>
                     * @param _regionName <p>Region Chinese character string</p>
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
                     * 获取<p>Whether to sell. 1: sell, 0: do not sell</p>
                     * @return Enable <p>Whether to sell. 1: sell, 0: do not sell</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>Whether to sell. 1: sell, 0: do not sell</p>
                     * @param _enable <p>Whether to sell. 1: sell, 0: do not sell</p>
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Optional quantity of multiple availability</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AvailableZoneNum <p>Optional quantity of multiple availability</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAvailableZoneNum() const;

                    /**
                     * 设置<p>Optional quantity of multiple availability</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _availableZoneNum <p>Optional quantity of multiple availability</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableZoneNum(const int64_t& _availableZoneNum);

                    /**
                     * 判断参数 AvailableZoneNum 是否已赋值
                     * @return AvailableZoneNum 是否已赋值
                     * 
                     */
                    bool AvailableZoneNumHasBeenSet() const;

                    /**
                     * 获取<p>Whether to allow usage log replica</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSupportedLogReplica <p>Whether to allow usage log replica</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsSupportedLogReplica() const;

                    /**
                     * 设置<p>Whether to allow usage log replica</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSupportedLogReplica <p>Whether to allow usage log replica</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsSupportedLogReplica(const bool& _isSupportedLogReplica);

                    /**
                     * 判断参数 IsSupportedLogReplica 是否已赋值
                     * @return IsSupportedLogReplica 是否已赋值
                     * 
                     */
                    bool IsSupportedLogReplicaHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone combination</p>
                     * @return ZoneGroup <p>Availability zone combination</p>
                     * 
                     */
                    std::vector<DescribeSaleZonesGroup> GetZoneGroup() const;

                    /**
                     * 设置<p>Availability zone combination</p>
                     * @param _zoneGroup <p>Availability zone combination</p>
                     * 
                     */
                    void SetZoneGroup(const std::vector<DescribeSaleZonesGroup>& _zoneGroup);

                    /**
                     * 判断参数 ZoneGroup 是否已赋值
                     * @return ZoneGroup 是否已赋值
                     * 
                     */
                    bool ZoneGroupHasBeenSet() const;

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
                     * <p>English string of Region</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Purchasable Zone list</p>
                     */
                    std::vector<DescribeSaleZonesInfo> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * <p>Region Chinese character string</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>Whether to sell. 1: sell, 0: do not sell</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Optional quantity of multiple availability</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_availableZoneNum;
                    bool m_availableZoneNumHasBeenSet;

                    /**
                     * <p>Whether to allow usage log replica</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isSupportedLogReplica;
                    bool m_isSupportedLogReplicaHasBeenSet;

                    /**
                     * <p>Availability zone combination</p>
                     */
                    std::vector<DescribeSaleZonesGroup> m_zoneGroup;
                    bool m_zoneGroupHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEREGIONINFO_H_
