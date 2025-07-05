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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_HAVIP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_HAVIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * HAVIP object.
                */
                class HaVip : public AbstractModel
                {
                public:
                    HaVip();
                    ~HaVip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique HAVIP ID.
                     * @return HaVipId Unique HAVIP ID.
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置Unique HAVIP ID.
                     * @param _haVipId Unique HAVIP ID.
                     * 
                     */
                    void SetHaVipId(const std::string& _haVipId);

                    /**
                     * 判断参数 HaVipId 是否已赋值
                     * @return HaVipId 是否已赋值
                     * 
                     */
                    bool HaVipIdHasBeenSet() const;

                    /**
                     * 获取HAVIP name.
                     * @return HaVipName HAVIP name.
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置HAVIP name.
                     * @param _haVipName HAVIP name.
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
                     * 获取Virtual IP address.
                     * @return Vip Virtual IP address.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Virtual IP address.
                     * @param _vip Virtual IP address.
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
                     * 获取VPC ID of the HAVIP.
                     * @return VpcId VPC ID of the HAVIP.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID of the HAVIP.
                     * @param _vpcId VPC ID of the HAVIP.
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
                     * 获取Subnet ID of the HAVIP.
                     * @return SubnetId Subnet ID of the HAVIP.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of the HAVIP.
                     * @param _subnetId Subnet ID of the HAVIP.
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
                     * 获取ID of the ENI associated with the HAVIP.
                     * @return NetworkInterfaceId ID of the ENI associated with the HAVIP.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ID of the ENI associated with the HAVIP.
                     * @param _networkInterfaceId ID of the ENI associated with the HAVIP.
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取ID of the bound instance.
                     * @return InstanceId ID of the bound instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the bound instance.
                     * @param _instanceId ID of the bound instance.
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
                     * 获取Bound EIP.
                     * @return AddressIp Bound EIP.
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置Bound EIP.
                     * @param _addressIp Bound EIP.
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                    /**
                     * 获取Status:
AVAILABLE: running.
UNBIND: unbound.
                     * @return State Status:
AVAILABLE: running.
UNBIND: unbound.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Status:
AVAILABLE: running.
UNBIND: unbound.
                     * @param _state Status:
AVAILABLE: running.
UNBIND: unbound.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取ID of businesses that use HAVIP.
                     * @return Business ID of businesses that use HAVIP.
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置ID of businesses that use HAVIP.
                     * @param _business ID of businesses that use HAVIP.
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * Unique HAVIP ID.
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * HAVIP name.
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * Virtual IP address.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * VPC ID of the HAVIP.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of the HAVIP.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ID of the ENI associated with the HAVIP.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * ID of the bound instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Bound EIP.
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * Status:
AVAILABLE: running.
UNBIND: unbound.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * ID of businesses that use HAVIP.
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_HAVIP_H_
