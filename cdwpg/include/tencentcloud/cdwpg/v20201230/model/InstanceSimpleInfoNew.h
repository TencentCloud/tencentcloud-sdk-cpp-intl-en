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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESIMPLEINFONEW_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESIMPLEINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Simplified instance information.
                */
                class InstanceSimpleInfoNew : public AbstractModel
                {
                public:
                    InstanceSimpleInfoNew();
                    ~InstanceSimpleInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD ID
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
                     * 获取Start time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Start time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Start time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Start time.

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
                     * 获取Access address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessInfo Access address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 设置Access address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessInfo Access address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessInfo(const std::string& _accessInfo);

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

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

                private:

                    /**
                     * ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Kernel version.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Region.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionDesc;
                    bool m_regionDescHasBeenSet;

                    /**
                     * Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Region ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Region details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

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
                     * Start time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Expiration time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Access address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESIMPLEINFONEW_H_
