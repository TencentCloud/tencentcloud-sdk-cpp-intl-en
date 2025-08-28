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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPBYREADONLYINSTANCERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPBYREADONLYINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeReadOnlyGroupByReadOnlyInstance response structure.
                */
                class DescribeReadOnlyGroupByReadOnlyInstanceResponse : public AbstractModel
                {
                public:
                    DescribeReadOnlyGroupByReadOnlyInstanceResponse();
                    ~DescribeReadOnlyGroupByReadOnlyInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Read only group ID.
                     * @return ReadOnlyGroupId Read only group ID.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取Read-only group name.
                     * @return ReadOnlyGroupName Read-only group name.
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取Region ID of the read-only group.
                     * @return RegionId Region ID of the read-only group.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取AZ ID of the read-only group.
                     * @return ZoneId AZ ID of the read-only group.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable startup timeout elimination, 0 - disable removal, 1 - enable removal.
                     * @return IsOfflineDelay Whether to enable startup timeout elimination, 0 - disable removal, 1 - enable removal.
                     * 
                     */
                    int64_t GetIsOfflineDelay() const;

                    /**
                     * 判断参数 IsOfflineDelay 是否已赋值
                     * @return IsOfflineDelay 是否已赋值
                     * 
                     */
                    bool IsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取Timeout threshold used after the delayed read-only instance removal feature is enabled, in seconds.
                     * @return ReadOnlyMaxDelayTime Timeout threshold used after the delayed read-only instance removal feature is enabled, in seconds.
                     * 
                     */
                    int64_t GetReadOnlyMaxDelayTime() const;

                    /**
                     * 判断参数 ReadOnlyMaxDelayTime 是否已赋值
                     * @return ReadOnlyMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取Minimum number of retained read-only replicas in the read-only group, after the delayed read-only instance removal feature is enabled.
                     * @return MinReadOnlyInGroup Minimum number of retained read-only replicas in the read-only group, after the delayed read-only instance removal feature is enabled.
                     * 
                     */
                    int64_t GetMinReadOnlyInGroup() const;

                    /**
                     * 判断参数 MinReadOnlyInGroup 是否已赋值
                     * @return MinReadOnlyInGroup 是否已赋值
                     * 
                     */
                    bool MinReadOnlyInGroupHasBeenSet() const;

                    /**
                     * 获取Read-only group VIP.
                     * @return Vip Read-only group VIP.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Read-only group VPort.
                     * @return Vport Read-only group VPort.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取VPC ID of the read-only group.
                     * @return VpcId VPC ID of the read-only group.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID of the read-only group.
                     * @return SubnetId VPC subnet ID of the read-only group.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Primary instance ID. For example, mssql-sgeshe3th.
                     * @return MasterInstanceId Primary instance ID. For example, mssql-sgeshe3th.
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     * 
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取Region ID of the primary instance.
                     * @return MasterRegionId Region ID of the primary instance.
                     * 
                     */
                    std::string GetMasterRegionId() const;

                    /**
                     * 判断参数 MasterRegionId 是否已赋值
                     * @return MasterRegionId 是否已赋值
                     * 
                     */
                    bool MasterRegionIdHasBeenSet() const;

                private:

                    /**
                     * Read only group ID.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * Read-only group name.
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * Region ID of the read-only group.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * AZ ID of the read-only group.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Whether to enable startup timeout elimination, 0 - disable removal, 1 - enable removal.
                     */
                    int64_t m_isOfflineDelay;
                    bool m_isOfflineDelayHasBeenSet;

                    /**
                     * Timeout threshold used after the delayed read-only instance removal feature is enabled, in seconds.
                     */
                    int64_t m_readOnlyMaxDelayTime;
                    bool m_readOnlyMaxDelayTimeHasBeenSet;

                    /**
                     * Minimum number of retained read-only replicas in the read-only group, after the delayed read-only instance removal feature is enabled.
                     */
                    int64_t m_minReadOnlyInGroup;
                    bool m_minReadOnlyInGroupHasBeenSet;

                    /**
                     * Read-only group VIP.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Read-only group VPort.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * VPC ID of the read-only group.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID of the read-only group.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Primary instance ID. For example, mssql-sgeshe3th.
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * Region ID of the primary instance.
                     */
                    std::string m_masterRegionId;
                    bool m_masterRegionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPBYREADONLYINSTANCERESPONSE_H_
