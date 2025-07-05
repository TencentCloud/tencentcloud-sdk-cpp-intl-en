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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYADDRESS_H_

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
                * The EIP bound to the NAT gateway
                */
                class NatGatewayAddress : public AbstractModel
                {
                public:
                    NatGatewayAddress();
                    ~NatGatewayAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID of the Elastic IP (EIP), such as `eip-11112222`.
                     * @return AddressId The unique ID of the Elastic IP (EIP), such as `eip-11112222`.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置The unique ID of the Elastic IP (EIP), such as `eip-11112222`.
                     * @param _addressId The unique ID of the Elastic IP (EIP), such as `eip-11112222`.
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取The public IP address, such as `123.121.34.33`.
                     * @return PublicIpAddress The public IP address, such as `123.121.34.33`.
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置The public IP address, such as `123.121.34.33`.
                     * @param _publicIpAddress The public IP address, such as `123.121.34.33`.
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取The block status of the resource. `true` indicates the EIP is blocked. `false` indicates that the EIP is not blocked.
                     * @return IsBlocked The block status of the resource. `true` indicates the EIP is blocked. `false` indicates that the EIP is not blocked.
                     * 
                     */
                    bool GetIsBlocked() const;

                    /**
                     * 设置The block status of the resource. `true` indicates the EIP is blocked. `false` indicates that the EIP is not blocked.
                     * @param _isBlocked The block status of the resource. `true` indicates the EIP is blocked. `false` indicates that the EIP is not blocked.
                     * 
                     */
                    void SetIsBlocked(const bool& _isBlocked);

                    /**
                     * 判断参数 IsBlocked 是否已赋值
                     * @return IsBlocked 是否已赋值
                     * 
                     */
                    bool IsBlockedHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the Elastic IP (EIP), such as `eip-11112222`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * The public IP address, such as `123.121.34.33`.
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * The block status of the resource. `true` indicates the EIP is blocked. `false` indicates that the EIP is not blocked.
                     */
                    bool m_isBlocked;
                    bool m_isBlockedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYADDRESS_H_
