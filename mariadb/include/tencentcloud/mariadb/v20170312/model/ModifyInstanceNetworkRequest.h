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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCENETWORKREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCENETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstanceNetwork request structure.
                */
                class ModifyInstanceNetworkRequest : public AbstractModel
                {
                public:
                    ModifyInstanceNetworkRequest();
                    ~ModifyInstanceNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取VpcId, ID of the desired VPC network.
                     * @return VpcId VpcId, ID of the desired VPC network.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId, ID of the desired VPC network.
                     * @param _vpcId VpcId, ID of the desired VPC network.
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
                     * 获取SubnetId, subnet ID of the desired VPC network.
                     * @return SubnetId SubnetId, subnet ID of the desired VPC network.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置SubnetId, subnet ID of the desired VPC network.
                     * @param _subnetId SubnetId, subnet ID of the desired VPC network.
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
                     * 获取The field is required to specify VIP.
                     * @return Vip The field is required to specify VIP.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置The field is required to specify VIP.
                     * @param _vip The field is required to specify VIP.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取The field is required to specify VIPv6.
                     * @return Vipv6 The field is required to specify VIPv6.
                     * 
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置The field is required to specify VIPv6.
                     * @param _vipv6 The field is required to specify VIPv6.
                     * 
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     * 
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取VIP retention period in hours. Value range: 0-168. Default value: `24`. `0` indicates that the VIP will be released immediately, but there will be 1-minute delay.
                     * @return VipReleaseDelay VIP retention period in hours. Value range: 0-168. Default value: `24`. `0` indicates that the VIP will be released immediately, but there will be 1-minute delay.
                     * 
                     */
                    uint64_t GetVipReleaseDelay() const;

                    /**
                     * 设置VIP retention period in hours. Value range: 0-168. Default value: `24`. `0` indicates that the VIP will be released immediately, but there will be 1-minute delay.
                     * @param _vipReleaseDelay VIP retention period in hours. Value range: 0-168. Default value: `24`. `0` indicates that the VIP will be released immediately, but there will be 1-minute delay.
                     * 
                     */
                    void SetVipReleaseDelay(const uint64_t& _vipReleaseDelay);

                    /**
                     * 判断参数 VipReleaseDelay 是否已赋值
                     * @return VipReleaseDelay 是否已赋值
                     * 
                     */
                    bool VipReleaseDelayHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VpcId, ID of the desired VPC network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * SubnetId, subnet ID of the desired VPC network.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The field is required to specify VIP.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * The field is required to specify VIPv6.
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * VIP retention period in hours. Value range: 0-168. Default value: `24`. `0` indicates that the VIP will be released immediately, but there will be 1-minute delay.
                     */
                    uint64_t m_vipReleaseDelay;
                    bool m_vipReleaseDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCENETWORKREQUEST_H_
