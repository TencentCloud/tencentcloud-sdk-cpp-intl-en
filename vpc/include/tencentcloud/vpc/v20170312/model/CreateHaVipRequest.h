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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateHaVip request structure.
                */
                class CreateHaVipRequest : public AbstractModel
                {
                public:
                    CreateHaVipRequest();
                    ~CreateHaVipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The `ID` of the VPC to which the `HAVIP` belongs.
                     * @return VpcId The `ID` of the VPC to which the `HAVIP` belongs.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of the VPC to which the `HAVIP` belongs.
                     * @param _vpcId The `ID` of the VPC to which the `HAVIP` belongs.
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
                     * 获取The name of the `HAVIP`.
                     * @return HaVipName The name of the `HAVIP`.
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置The name of the `HAVIP`.
                     * @param _haVipName The name of the `HAVIP`.
                     * 
                     */
                    void SetHaVipName(const std::string& _haVipName);

                    /**
                     * 判断参数 HaVipName 是否已赋值
                     * @return HaVipName 是否已赋值
                     * 
                     */
                    bool HaVipNameHasBeenSet() const;

                    /**
                     * 获取The `ID` of the subnet to which the `HAVIP` belongs.
                     * @return SubnetId The `ID` of the subnet to which the `HAVIP` belongs.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置The `ID` of the subnet to which the `HAVIP` belongs.
                     * @param _subnetId The `ID` of the subnet to which the `HAVIP` belongs.
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
                     * 获取The specified virtual IP address, which must be within the IP range of the `VPC` and not in use. It will be automatically assigned if not specified.
                     * @return Vip The specified virtual IP address, which must be within the IP range of the `VPC` and not in use. It will be automatically assigned if not specified.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置The specified virtual IP address, which must be within the IP range of the `VPC` and not in use. It will be automatically assigned if not specified.
                     * @param _vip The specified virtual IP address, which must be within the IP range of the `VPC` and not in use. It will be automatically assigned if not specified.
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
                     * 获取The ID of the ENI associated with the HAVIP.
                     * @return NetworkInterfaceId The ID of the ENI associated with the HAVIP.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置The ID of the ENI associated with the HAVIP.
                     * @param _networkInterfaceId The ID of the ENI associated with the HAVIP.
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                private:

                    /**
                     * The `ID` of the VPC to which the `HAVIP` belongs.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The name of the `HAVIP`.
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * The `ID` of the subnet to which the `HAVIP` belongs.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The specified virtual IP address, which must be within the IP range of the `VPC` and not in use. It will be automatically assigned if not specified.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * The ID of the ENI associated with the HAVIP.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPREQUEST_H_
