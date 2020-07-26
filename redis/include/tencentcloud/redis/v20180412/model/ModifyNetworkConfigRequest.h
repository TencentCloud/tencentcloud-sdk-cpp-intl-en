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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyNetworkConfig request structure.
                */
                class ModifyNetworkConfigRequest : public AbstractModel
                {
                public:
                    ModifyNetworkConfigRequest();
                    ~ModifyNetworkConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Operation type. changeVip: modify the VIP of an instance; changeVpc: modify the subnet of an instance; changeBaseToVpc: change from basic network to VPC
                     * @return Operation Operation type. changeVip: modify the VIP of an instance; changeVpc: modify the subnet of an instance; changeBaseToVpc: change from basic network to VPC
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type. changeVip: modify the VIP of an instance; changeVpc: modify the subnet of an instance; changeBaseToVpc: change from basic network to VPC
                     * @param Operation Operation type. changeVip: modify the VIP of an instance; changeVpc: modify the subnet of an instance; changeBaseToVpc: change from basic network to VPC
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取VIP address, which is required for the `changeVip` operation. If this parameter is left blank, a random one will be assigned by default
                     * @return Vip VIP address, which is required for the `changeVip` operation. If this parameter is left blank, a random one will be assigned by default
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP address, which is required for the `changeVip` operation. If this parameter is left blank, a random one will be assigned by default
                     * @param Vip VIP address, which is required for the `changeVip` operation. If this parameter is left blank, a random one will be assigned by default
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取VPC ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     * @return VpcId VPC ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     * @param VpcId VPC ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     * @return SubnetId Subnet ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     * @param SubnetId Subnet ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Operation type. changeVip: modify the VIP of an instance; changeVpc: modify the subnet of an instance; changeBaseToVpc: change from basic network to VPC
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * VIP address, which is required for the `changeVip` operation. If this parameter is left blank, a random one will be assigned by default
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * VPC ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID, which is required for `changeVpc` and `changeBaseToVpc` operations
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_
