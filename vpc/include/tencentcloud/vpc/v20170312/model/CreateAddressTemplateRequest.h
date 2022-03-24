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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateAddressTemplate request structure.
                */
                class CreateAddressTemplateRequest : public AbstractModel
                {
                public:
                    CreateAddressTemplateRequest();
                    ~CreateAddressTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IP address template name.
                     * @return AddressTemplateName IP address template name.
                     */
                    std::string GetAddressTemplateName() const;

                    /**
                     * 设置IP address template name.
                     * @param AddressTemplateName IP address template name.
                     */
                    void SetAddressTemplateName(const std::string& _addressTemplateName);

                    /**
                     * 判断参数 AddressTemplateName 是否已赋值
                     * @return AddressTemplateName 是否已赋值
                     */
                    bool AddressTemplateNameHasBeenSet() const;

                    /**
                     * 获取The address information can be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     * @return Addresses The address information can be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     */
                    std::vector<std::string> GetAddresses() const;

                    /**
                     * 设置The address information can be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     * @param Addresses The address information can be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     */
                    void SetAddresses(const std::vector<std::string>& _addresses);

                    /**
                     * 判断参数 Addresses 是否已赋值
                     * @return Addresses 是否已赋值
                     */
                    bool AddressesHasBeenSet() const;

                    /**
                     * 获取The address information can contain remarks and be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     * @return AddressesExtra The address information can contain remarks and be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     */
                    std::vector<AddressInfo> GetAddressesExtra() const;

                    /**
                     * 设置The address information can contain remarks and be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     * @param AddressesExtra The address information can contain remarks and be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     */
                    void SetAddressesExtra(const std::vector<AddressInfo>& _addressesExtra);

                    /**
                     * 判断参数 AddressesExtra 是否已赋值
                     * @return AddressesExtra 是否已赋值
                     */
                    bool AddressesExtraHasBeenSet() const;

                private:

                    /**
                     * IP address template name.
                     */
                    std::string m_addressTemplateName;
                    bool m_addressTemplateNameHasBeenSet;

                    /**
                     * The address information can be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     */
                    std::vector<std::string> m_addresses;
                    bool m_addressesHasBeenSet;

                    /**
                     * The address information can contain remarks and be presented by the IP, CIDR block or IP address range. Either Addresses or AddressesExtra is required.
                     */
                    std::vector<AddressInfo> m_addressesExtra;
                    bool m_addressesExtraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEREQUEST_H_
