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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/InstanceStateInfo.h>
#include <tencentcloud/cdwpg/v20201230/model/Tag.h>
#include <tencentcloud/cdwpg/v20201230/model/InstanceNodeGroup.h>
#include <tencentcloud/cdwpg/v20201230/model/AccessInfo.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * instance information.
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID Instance ID 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Instance ID 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD Instance ID 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Kernel version type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType Kernel version type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Kernel version type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceType Kernel version type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Cluster status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Cluster status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Cluster status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Cluster status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Cluster status details.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusDesc Cluster status details.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Cluster status details.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusDesc Cluster status details.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Cluster status information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStateInfo Cluster status information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InstanceStateInfo GetInstanceStateInfo() const;

                    /**
                     * 设置Cluster status information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceStateInfo Cluster status information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceStateInfo(const InstanceStateInfo& _instanceStateInfo);

                    /**
                     * 判断参数 InstanceStateInfo 是否已赋值
                     * @return InstanceStateInfo 是否已赋值
                     * 
                     */
                    bool InstanceStateInfoHasBeenSet() const;

                    /**
                     * 获取Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceID Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceID Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Region.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionDesc Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionDesc() const;

                    /**
                     * 设置Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionDesc Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionDesc(const std::string& _regionDesc);

                    /**
                     * 判断参数 RegionDesc 是否已赋值
                     * @return RegionDesc 是否已赋值
                     * 
                     */
                    bool RegionDescHasBeenSet() const;

                    /**
                     * 获取Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneDesc Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneDesc Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneDesc(const std::string& _zoneDesc);

                    /**
                     * 判断参数 ZoneDesc 是否已赋值
                     * @return ZoneDesc 是否已赋值
                     * 
                     */
                    bool ZoneDescHasBeenSet() const;

                    /**
                     * 获取Tag.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Kernel version.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Kernel version.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Kernel version.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Kernel version.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Character set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Charset Character set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置Character set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _charset Character set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取CN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CNNodes CN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetCNNodes() const;

                    /**
                     * 设置CN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cNNodes CN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCNNodes(const std::vector<InstanceNodeGroup>& _cNNodes);

                    /**
                     * 判断参数 CNNodes 是否已赋值
                     * @return CNNodes 是否已赋值
                     * 
                     */
                    bool CNNodesHasBeenSet() const;

                    /**
                     * 获取DN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DNNodes DN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceNodeGroup> GetDNNodes() const;

                    /**
                     * 设置DN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dNNodes DN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDNNodes(const std::vector<InstanceNodeGroup>& _dNNodes);

                    /**
                     * 判断参数 DNNodes 是否已赋值
                     * @return DNNodes 是否已赋值
                     * 
                     */
                    bool DNNodesHasBeenSet() const;

                    /**
                     * 获取Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneId Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Virtual Private Cloud (VPC).

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId Virtual Private Cloud (VPC).

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Virtual Private Cloud (VPC).

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId Virtual Private Cloud (VPC).

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Expiration time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Billing mode.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing mode.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Billing mode.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Automatic renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Automatic renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置Automatic renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Automatic renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessDetails Access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AccessInfo> GetAccessDetails() const;

                    /**
                     * 设置Access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessDetails Access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessDetails(const std::vector<AccessInfo>& _accessDetails);

                    /**
                     * 判断参数 AccessDetails 是否已赋值
                     * @return AccessDetails 是否已赋值
                     * 
                     */
                    bool AccessDetailsHasBeenSet() const;

                private:

                    /**
                     * Instance ID 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Kernel version type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Cluster status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cluster status details.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Cluster status information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InstanceStateInfo m_instanceStateInfo;
                    bool m_instanceStateInfoHasBeenSet;

                    /**
                     * Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Region.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionDesc;
                    bool m_regionDescHasBeenSet;

                    /**
                     * Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

                    /**
                     * Tag.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Kernel version.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Character set.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * CN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceNodeGroup> m_cNNodes;
                    bool m_cNNodesHasBeenSet;

                    /**
                     * DN node list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceNodeGroup> m_dNNodes;
                    bool m_dNNodesHasBeenSet;

                    /**
                     * Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Virtual Private Cloud (VPC).

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Expiration time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Billing mode.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Automatic renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Access information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AccessInfo> m_accessDetails;
                    bool m_accessDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEINFO_H_
