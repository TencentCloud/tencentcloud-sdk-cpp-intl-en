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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HAVIP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HAVIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * HAVIP description information
                */
                class HaVip : public AbstractModel
                {
                public:
                    HaVip();
                    ~HaVip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The `ID` of the `HAVIP`. This is the unique identifier of the `HAVIP`.
                     * @return HaVipId The `ID` of the `HAVIP`. This is the unique identifier of the `HAVIP`.
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置The `ID` of the `HAVIP`. This is the unique identifier of the `HAVIP`.
                     * @param HaVipId The `ID` of the `HAVIP`. This is the unique identifier of the `HAVIP`.
                     */
                    void SetHaVipId(const std::string& _haVipId);

                    /**
                     * 判断参数 HaVipId 是否已赋值
                     * @return HaVipId 是否已赋值
                     */
                    bool HaVipIdHasBeenSet() const;

                    /**
                     * 获取The name of the `HAVIP`.
                     * @return HaVipName The name of the `HAVIP`.
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置The name of the `HAVIP`.
                     * @param HaVipName The name of the `HAVIP`.
                     */
                    void SetHaVipName(const std::string& _haVipName);

                    /**
                     * 判断参数 HaVipName 是否已赋值
                     * @return HaVipName 是否已赋值
                     */
                    bool HaVipNameHasBeenSet() const;

                    /**
                     * 获取The virtual IP address.
                     * @return Vip The virtual IP address.
                     */
                    std::string GetVip() const;

                    /**
                     * 设置The virtual IP address.
                     * @param Vip The virtual IP address.
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取The `ID` of the VPC to which the `HAVIP` belongs.
                     * @return VpcId The `ID` of the VPC to which the `HAVIP` belongs.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of the VPC to which the `HAVIP` belongs.
                     * @param VpcId The `ID` of the VPC to which the `HAVIP` belongs.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The `ID` of the subnet to which the `HAVIP` belongs.
                     * @return SubnetId The `ID` of the subnet to which the `HAVIP` belongs.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置The `ID` of the subnet to which the `HAVIP` belongs.
                     * @param SubnetId The `ID` of the subnet to which the `HAVIP` belongs.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The `ID` of the ENI associated with the `HAVIP`.
                     * @return NetworkInterfaceId The `ID` of the ENI associated with the `HAVIP`.
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置The `ID` of the ENI associated with the `HAVIP`.
                     * @param NetworkInterfaceId The `ID` of the ENI associated with the `HAVIP`.
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取The `ID` of the bound instance.
                     * @return InstanceId The `ID` of the bound instance.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The `ID` of the bound instance.
                     * @param InstanceId The `ID` of the bound instance.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Bound `EIP`.
                     * @return AddressIp Bound `EIP`.
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置Bound `EIP`.
                     * @param AddressIp Bound `EIP`.
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     */
                    bool AddressIpHasBeenSet() const;

                    /**
                     * 获取Status:
<li>`AVAILABLE`: Operating</li>
<li>`UNBIND`: Not bound</li>
                     * @return State Status:
<li>`AVAILABLE`: Operating</li>
<li>`UNBIND`: Not bound</li>
                     */
                    std::string GetState() const;

                    /**
                     * 设置Status:
<li>`AVAILABLE`: Operating</li>
<li>`UNBIND`: Not bound</li>
                     * @param State Status:
<li>`AVAILABLE`: Operating</li>
<li>`UNBIND`: Not bound</li>
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreatedTime Creation Time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation Time.
                     * @param CreatedTime Creation Time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Identifier for businesses that use HAVIP.
                     * @return Business Identifier for businesses that use HAVIP.
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Identifier for businesses that use HAVIP.
                     * @param Business Identifier for businesses that use HAVIP.
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * The `ID` of the `HAVIP`. This is the unique identifier of the `HAVIP`.
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * The name of the `HAVIP`.
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * The virtual IP address.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * The `ID` of the VPC to which the `HAVIP` belongs.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The `ID` of the subnet to which the `HAVIP` belongs.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The `ID` of the ENI associated with the `HAVIP`.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * The `ID` of the bound instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Bound `EIP`.
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * Status:
<li>`AVAILABLE`: Operating</li>
<li>`UNBIND`: Not bound</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Identifier for businesses that use HAVIP.
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HAVIP_H_
