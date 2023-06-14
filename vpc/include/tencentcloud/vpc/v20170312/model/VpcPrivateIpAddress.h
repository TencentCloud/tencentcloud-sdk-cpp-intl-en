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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPCPRIVATEIPADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPCPRIVATEIPADDRESS_H_

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
                * VPC private IP object.
                */
                class VpcPrivateIpAddress : public AbstractModel
                {
                public:
                    VpcPrivateIpAddress();
                    ~VpcPrivateIpAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC` private `IP`.
                     * @return PrivateIpAddress `VPC` private `IP`.
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置`VPC` private `IP`.
                     * @param _privateIpAddress `VPC` private `IP`.
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取The `CIDR` belonging to the subnet.
                     * @return CidrBlock The `CIDR` belonging to the subnet.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置The `CIDR` belonging to the subnet.
                     * @param _cidrBlock The `CIDR` belonging to the subnet.
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
                     * 获取Private `IP` type.
                     * @return PrivateIpAddressType Private `IP` type.
                     * 
                     */
                    std::string GetPrivateIpAddressType() const;

                    /**
                     * 设置Private `IP` type.
                     * @param _privateIpAddressType Private `IP` type.
                     * 
                     */
                    void SetPrivateIpAddressType(const std::string& _privateIpAddressType);

                    /**
                     * 判断参数 PrivateIpAddressType 是否已赋值
                     * @return PrivateIpAddressType 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressTypeHasBeenSet() const;

                    /**
                     * 获取`IP` application time.
                     * @return CreatedTime `IP` application time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置`IP` application time.
                     * @param _createdTime `IP` application time.
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
                     * `VPC` private `IP`.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * The `CIDR` belonging to the subnet.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Private `IP` type.
                     */
                    std::string m_privateIpAddressType;
                    bool m_privateIpAddressTypeHasBeenSet;

                    /**
                     * `IP` application time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPCPRIVATEIPADDRESS_H_
