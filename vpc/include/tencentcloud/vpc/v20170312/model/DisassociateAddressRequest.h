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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEADDRESSREQUEST_H_

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
                * DisassociateAddress request structure.
                */
                class DisassociateAddressRequest : public AbstractModel
                {
                public:
                    DisassociateAddressRequest();
                    ~DisassociateAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the EIP, such as `eip-11112222`.
                     * @return AddressId The unique ID of the EIP, such as `eip-11112222`.
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置The unique ID of the EIP, such as `eip-11112222`.
                     * @param AddressId The unique ID of the EIP, such as `eip-11112222`.
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取Whether a common public IP is assigned after the EIP is unbound. Value range:<br><li>TRUE: Indicates that after the EIP is unbound, a common public IP is assigned.<br><li>FALSE: Indicates that after the EIP is unbound, a common public IP is not assigned.<br>Default value: FALSE.<br><br>The parameter can be specified only under the following conditions:<br><li>It can only be specified when you unbind an EIP from the primary private IP of the primary ENI.<br><li>After an EIP is unbound, you can assign public IPs to an account up to 10 times per day. For more information, use the [DescribeAddressQuota] (https://intl.cloud.tencent.com/document/api/213/1378?from_cn_redirect=1) API.
                     * @return ReallocateNormalPublicIp Whether a common public IP is assigned after the EIP is unbound. Value range:<br><li>TRUE: Indicates that after the EIP is unbound, a common public IP is assigned.<br><li>FALSE: Indicates that after the EIP is unbound, a common public IP is not assigned.<br>Default value: FALSE.<br><br>The parameter can be specified only under the following conditions:<br><li>It can only be specified when you unbind an EIP from the primary private IP of the primary ENI.<br><li>After an EIP is unbound, you can assign public IPs to an account up to 10 times per day. For more information, use the [DescribeAddressQuota] (https://intl.cloud.tencent.com/document/api/213/1378?from_cn_redirect=1) API.
                     */
                    bool GetReallocateNormalPublicIp() const;

                    /**
                     * 设置Whether a common public IP is assigned after the EIP is unbound. Value range:<br><li>TRUE: Indicates that after the EIP is unbound, a common public IP is assigned.<br><li>FALSE: Indicates that after the EIP is unbound, a common public IP is not assigned.<br>Default value: FALSE.<br><br>The parameter can be specified only under the following conditions:<br><li>It can only be specified when you unbind an EIP from the primary private IP of the primary ENI.<br><li>After an EIP is unbound, you can assign public IPs to an account up to 10 times per day. For more information, use the [DescribeAddressQuota] (https://intl.cloud.tencent.com/document/api/213/1378?from_cn_redirect=1) API.
                     * @param ReallocateNormalPublicIp Whether a common public IP is assigned after the EIP is unbound. Value range:<br><li>TRUE: Indicates that after the EIP is unbound, a common public IP is assigned.<br><li>FALSE: Indicates that after the EIP is unbound, a common public IP is not assigned.<br>Default value: FALSE.<br><br>The parameter can be specified only under the following conditions:<br><li>It can only be specified when you unbind an EIP from the primary private IP of the primary ENI.<br><li>After an EIP is unbound, you can assign public IPs to an account up to 10 times per day. For more information, use the [DescribeAddressQuota] (https://intl.cloud.tencent.com/document/api/213/1378?from_cn_redirect=1) API.
                     */
                    void SetReallocateNormalPublicIp(const bool& _reallocateNormalPublicIp);

                    /**
                     * 判断参数 ReallocateNormalPublicIp 是否已赋值
                     * @return ReallocateNormalPublicIp 是否已赋值
                     */
                    bool ReallocateNormalPublicIpHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the EIP, such as `eip-11112222`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * Whether a common public IP is assigned after the EIP is unbound. Value range:<br><li>TRUE: Indicates that after the EIP is unbound, a common public IP is assigned.<br><li>FALSE: Indicates that after the EIP is unbound, a common public IP is not assigned.<br>Default value: FALSE.<br><br>The parameter can be specified only under the following conditions:<br><li>It can only be specified when you unbind an EIP from the primary private IP of the primary ENI.<br><li>After an EIP is unbound, you can assign public IPs to an account up to 10 times per day. For more information, use the [DescribeAddressQuota] (https://intl.cloud.tencent.com/document/api/213/1378?from_cn_redirect=1) API.
                     */
                    bool m_reallocateNormalPublicIp;
                    bool m_reallocateNormalPublicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEADDRESSREQUEST_H_
