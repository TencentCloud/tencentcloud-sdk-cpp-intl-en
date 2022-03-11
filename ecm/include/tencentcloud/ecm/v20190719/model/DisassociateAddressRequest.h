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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEADDRESSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DisassociateAddress request structure.
                */
                class DisassociateAddressRequest : public AbstractModel
                {
                public:
                    DisassociateAddressRequest();
                    ~DisassociateAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM region
                     * @return EcmRegion ECM region
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region
                     * @param EcmRegion ECM region
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取Unique EIP ID, such as `eip-11112222`.
                     * @return AddressId Unique EIP ID, such as `eip-11112222`.
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置Unique EIP ID, such as `eip-11112222`.
                     * @param AddressId Unique EIP ID, such as `eip-11112222`.
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取Indicates whether to assign a general public IP after unbinding an EIP. Valid values:
TRUE: yes
FALSE: no.
Default value: FALSE.

You can specify this parameter only under the following conditions:
You can specify this parameter only when you unbind an EIP from the primary private IP of the primary ENI.
An account can reassign a general public IP after unbinding an EIP 10 times a day. More information can be obtained through the `DescribeAddressQuota` API.
                     * @return ReallocateNormalPublicIp Indicates whether to assign a general public IP after unbinding an EIP. Valid values:
TRUE: yes
FALSE: no.
Default value: FALSE.

You can specify this parameter only under the following conditions:
You can specify this parameter only when you unbind an EIP from the primary private IP of the primary ENI.
An account can reassign a general public IP after unbinding an EIP 10 times a day. More information can be obtained through the `DescribeAddressQuota` API.
                     */
                    bool GetReallocateNormalPublicIp() const;

                    /**
                     * 设置Indicates whether to assign a general public IP after unbinding an EIP. Valid values:
TRUE: yes
FALSE: no.
Default value: FALSE.

You can specify this parameter only under the following conditions:
You can specify this parameter only when you unbind an EIP from the primary private IP of the primary ENI.
An account can reassign a general public IP after unbinding an EIP 10 times a day. More information can be obtained through the `DescribeAddressQuota` API.
                     * @param ReallocateNormalPublicIp Indicates whether to assign a general public IP after unbinding an EIP. Valid values:
TRUE: yes
FALSE: no.
Default value: FALSE.

You can specify this parameter only under the following conditions:
You can specify this parameter only when you unbind an EIP from the primary private IP of the primary ENI.
An account can reassign a general public IP after unbinding an EIP 10 times a day. More information can be obtained through the `DescribeAddressQuota` API.
                     */
                    void SetReallocateNormalPublicIp(const bool& _reallocateNormalPublicIp);

                    /**
                     * 判断参数 ReallocateNormalPublicIp 是否已赋值
                     * @return ReallocateNormalPublicIp 是否已赋值
                     */
                    bool ReallocateNormalPublicIpHasBeenSet() const;

                private:

                    /**
                     * ECM region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * Unique EIP ID, such as `eip-11112222`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * Indicates whether to assign a general public IP after unbinding an EIP. Valid values:
TRUE: yes
FALSE: no.
Default value: FALSE.

You can specify this parameter only under the following conditions:
You can specify this parameter only when you unbind an EIP from the primary private IP of the primary ENI.
An account can reassign a general public IP after unbinding an EIP 10 times a day. More information can be obtained through the `DescribeAddressQuota` API.
                     */
                    bool m_reallocateNormalPublicIp;
                    bool m_reallocateNormalPublicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEADDRESSREQUEST_H_
