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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateCustomerGateway request structure.
                */
                class CreateCustomerGatewayRequest : public AbstractModel
                {
                public:
                    CreateCustomerGatewayRequest();
                    ~CreateCustomerGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Customer gateway can be named freely, but the maximum length is 60 characters.
                     * @return CustomerGatewayName Customer gateway can be named freely, but the maximum length is 60 characters.
                     * 
                     */
                    std::string GetCustomerGatewayName() const;

                    /**
                     * 设置Customer gateway can be named freely, but the maximum length is 60 characters.
                     * @param _customerGatewayName Customer gateway can be named freely, but the maximum length is 60 characters.
                     * 
                     */
                    void SetCustomerGatewayName(const std::string& _customerGatewayName);

                    /**
                     * 判断参数 CustomerGatewayName 是否已赋值
                     * @return CustomerGatewayName 是否已赋值
                     * 
                     */
                    bool CustomerGatewayNameHasBeenSet() const;

                    /**
                     * 获取Customer gateway public IP.
                     * @return IpAddress Customer gateway public IP.
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置Customer gateway public IP.
                     * @param _ipAddress Customer gateway public IP.
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Customer gateway can be named freely, but the maximum length is 60 characters.
                     */
                    std::string m_customerGatewayName;
                    bool m_customerGatewayNameHasBeenSet;

                    /**
                     * Customer gateway public IP.
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_
