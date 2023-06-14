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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPCIPV6ADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPCIPV6ADDRESS_H_

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
                * VPC private IPv6 object.
                */
                class VpcIpv6Address : public AbstractModel
                {
                public:
                    VpcIpv6Address();
                    ~VpcIpv6Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC` private `IPv6` address
                     * @return Ipv6Address `VPC` private `IPv6` address
                     * 
                     */
                    std::string GetIpv6Address() const;

                    /**
                     * 设置`VPC` private `IPv6` address
                     * @param _ipv6Address `VPC` private `IPv6` address
                     * 
                     */
                    void SetIpv6Address(const std::string& _ipv6Address);

                    /**
                     * 判断参数 Ipv6Address 是否已赋值
                     * @return Ipv6Address 是否已赋值
                     * 
                     */
                    bool Ipv6AddressHasBeenSet() const;

                    /**
                     * 获取The `IPv6` `CIDR` belonging to the subnet.
                     * @return CidrBlock The `IPv6` `CIDR` belonging to the subnet.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置The `IPv6` `CIDR` belonging to the subnet.
                     * @param _cidrBlock The `IPv6` `CIDR` belonging to the subnet.
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取`IPv6` type.
                     * @return Ipv6AddressType `IPv6` type.
                     * 
                     */
                    std::string GetIpv6AddressType() const;

                    /**
                     * 设置`IPv6` type.
                     * @param _ipv6AddressType `IPv6` type.
                     * 
                     */
                    void SetIpv6AddressType(const std::string& _ipv6AddressType);

                    /**
                     * 判断参数 Ipv6AddressType 是否已赋值
                     * @return Ipv6AddressType 是否已赋值
                     * 
                     */
                    bool Ipv6AddressTypeHasBeenSet() const;

                    /**
                     * 获取`IPv6` application time.
                     * @return CreatedTime `IPv6` application time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置`IPv6` application time.
                     * @param _createdTime `IPv6` application time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * `VPC` private `IPv6` address
                     */
                    std::string m_ipv6Address;
                    bool m_ipv6AddressHasBeenSet;

                    /**
                     * The `IPv6` `CIDR` belonging to the subnet.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * `IPv6` type.
                     */
                    std::string m_ipv6AddressType;
                    bool m_ipv6AddressTypeHasBeenSet;

                    /**
                     * `IPv6` application time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPCIPV6ADDRESS_H_
