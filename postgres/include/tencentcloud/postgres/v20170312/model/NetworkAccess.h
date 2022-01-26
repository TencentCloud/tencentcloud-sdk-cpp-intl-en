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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_NETWORKACCESS_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_NETWORKACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Network information. (This parameter structure has been deprecated. Please use `DBInstanceNetInfo` to query network information.)
                */
                class NetworkAccess : public AbstractModel
                {
                public:
                    NetworkAccess();
                    ~NetworkAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network resource ID, instance ID, or RO group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ResourceId Network resource ID, instance ID, or RO group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Network resource ID, instance ID, or RO group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ResourceId Network resource ID, instance ID, or RO group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource type. Valid values: `1` (instance), `2` (RO group)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ResourceType Resource type. Valid values: `1` (instance), `2` (RO group)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetResourceType() const;

                    /**
                     * 设置Resource type. Valid values: `1` (instance), `2` (RO group)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ResourceType Resource type. Valid values: `1` (instance), `2` (RO group)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetResourceType(const uint64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param VpcId VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取IPv4 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Vip IPv4 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IPv4 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Vip IPv4 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取IPv6 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Vip6 IPv6 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置IPv6 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Vip6 IPv6 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取Access port
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Vport Access port
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Access port
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Vport Access port
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param SubnetId Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Network status. Valid values: `1` (applying), `2` (in use), `3` (deleting), `4` (deleted)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return VpcStatus Network status. Valid values: `1` (applying), `2` (in use), `3` (deleting), `4` (deleted)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetVpcStatus() const;

                    /**
                     * 设置Network status. Valid values: `1` (applying), `2` (in use), `3` (deleting), `4` (deleted)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param VpcStatus Network status. Valid values: `1` (applying), `2` (in use), `3` (deleting), `4` (deleted)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVpcStatus(const int64_t& _vpcStatus);

                    /**
                     * 判断参数 VpcStatus 是否已赋值
                     * @return VpcStatus 是否已赋值
                     */
                    bool VpcStatusHasBeenSet() const;

                private:

                    /**
                     * Network resource ID, instance ID, or RO group ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource type. Valid values: `1` (instance), `2` (RO group)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * VPC ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * IPv4 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * IPv6 address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * Access port
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Subnet ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Network status. Valid values: `1` (applying), `2` (in use), `3` (deleting), `4` (deleted)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_vpcStatus;
                    bool m_vpcStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_NETWORKACCESS_H_
