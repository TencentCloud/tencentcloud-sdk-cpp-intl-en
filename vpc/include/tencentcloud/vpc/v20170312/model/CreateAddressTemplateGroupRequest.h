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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEGROUPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEGROUPREQUEST_H_

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
                * CreateAddressTemplateGroup request structure.
                */
                class CreateAddressTemplateGroupRequest : public AbstractModel
                {
                public:
                    CreateAddressTemplateGroupRequest();
                    ~CreateAddressTemplateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the IP address template group
                     * @return AddressTemplateGroupName Name of the IP address template group
                     */
                    std::string GetAddressTemplateGroupName() const;

                    /**
                     * 设置Name of the IP address template group
                     * @param AddressTemplateGroupName Name of the IP address template group
                     */
                    void SetAddressTemplateGroupName(const std::string& _addressTemplateGroupName);

                    /**
                     * 判断参数 AddressTemplateGroupName 是否已赋值
                     * @return AddressTemplateGroupName 是否已赋值
                     */
                    bool AddressTemplateGroupNameHasBeenSet() const;

                    /**
                     * 获取IP address template instance ID, such as `ipm-mdunqeb6`.
                     * @return AddressTemplateIds IP address template instance ID, such as `ipm-mdunqeb6`.
                     */
                    std::vector<std::string> GetAddressTemplateIds() const;

                    /**
                     * 设置IP address template instance ID, such as `ipm-mdunqeb6`.
                     * @param AddressTemplateIds IP address template instance ID, such as `ipm-mdunqeb6`.
                     */
                    void SetAddressTemplateIds(const std::vector<std::string>& _addressTemplateIds);

                    /**
                     * 判断参数 AddressTemplateIds 是否已赋值
                     * @return AddressTemplateIds 是否已赋值
                     */
                    bool AddressTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * Name of the IP address template group
                     */
                    std::string m_addressTemplateGroupName;
                    bool m_addressTemplateGroupNameHasBeenSet;

                    /**
                     * IP address template instance ID, such as `ipm-mdunqeb6`.
                     */
                    std::vector<std::string> m_addressTemplateIds;
                    bool m_addressTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEGROUPREQUEST_H_
