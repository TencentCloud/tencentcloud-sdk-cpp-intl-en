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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENETWORKREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyInstanceNetwork request structure.
                */
                class ModifyInstanceNetworkRequest : public AbstractModel
                {
                public:
                    ModifyInstanceNetworkRequest();
                    ~ModifyInstanceNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取VpcId of the target VPC network
                     * @return VpcId VpcId of the target VPC network
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId of the target VPC network
                     * @param _vpcId VpcId of the target VPC network
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
                     * 获取Subnet ID of the target VPC network
                     * @return SubnetId Subnet ID of the target VPC network
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of the target VPC network
                     * @param _subnetId Subnet ID of the target VPC network
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
                     * 获取VIP retention duration, in hours, value ranges from 0 to 168. 0 means immediate release with a one-minute delay. Not specified, default is 24 hr for VIP release.
                     * @return VipReleaseDelay VIP retention duration, in hours, value ranges from 0 to 168. 0 means immediate release with a one-minute delay. Not specified, default is 24 hr for VIP release.
                     * 
                     */
                    uint64_t GetVipReleaseDelay() const;

                    /**
                     * 设置VIP retention duration, in hours, value ranges from 0 to 168. 0 means immediate release with a one-minute delay. Not specified, default is 24 hr for VIP release.
                     * @param _vipReleaseDelay VIP retention duration, in hours, value ranges from 0 to 168. 0 means immediate release with a one-minute delay. Not specified, default is 24 hr for VIP release.
                     * 
                     */
                    void SetVipReleaseDelay(const uint64_t& _vipReleaseDelay);

                    /**
                     * 判断参数 VipReleaseDelay 是否已赋值
                     * @return VipReleaseDelay 是否已赋值
                     * 
                     */
                    bool VipReleaseDelayHasBeenSet() const;

                    /**
                     * 获取Assign vip modification. Leave blank for a random vip.
                     * @return Vip Assign vip modification. Leave blank for a random vip.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Assign vip modification. Leave blank for a random vip.
                     * @param _vip Assign vip modification. Leave blank for a random vip.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VpcId of the target VPC network
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of the target VPC network
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VIP retention duration, in hours, value ranges from 0 to 168. 0 means immediate release with a one-minute delay. Not specified, default is 24 hr for VIP release.
                     */
                    uint64_t m_vipReleaseDelay;
                    bool m_vipReleaseDelayHasBeenSet;

                    /**
                     * Assign vip modification. Leave blank for a random vip.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENETWORKREQUEST_H_
