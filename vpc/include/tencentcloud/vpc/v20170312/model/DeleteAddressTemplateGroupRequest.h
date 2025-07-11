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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEADDRESSTEMPLATEGROUPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEADDRESSTEMPLATEGROUPREQUEST_H_

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
                * DeleteAddressTemplateGroup request structure.
                */
                class DeleteAddressTemplateGroupRequest : public AbstractModel
                {
                public:
                    DeleteAddressTemplateGroupRequest();
                    ~DeleteAddressTemplateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The IP address template group instance ID, such as `ipmg-90cex8mq`.
                     * @return AddressTemplateGroupId The IP address template group instance ID, such as `ipmg-90cex8mq`.
                     * 
                     */
                    std::string GetAddressTemplateGroupId() const;

                    /**
                     * 设置The IP address template group instance ID, such as `ipmg-90cex8mq`.
                     * @param _addressTemplateGroupId The IP address template group instance ID, such as `ipmg-90cex8mq`.
                     * 
                     */
                    void SetAddressTemplateGroupId(const std::string& _addressTemplateGroupId);

                    /**
                     * 判断参数 AddressTemplateGroupId 是否已赋值
                     * @return AddressTemplateGroupId 是否已赋值
                     * 
                     */
                    bool AddressTemplateGroupIdHasBeenSet() const;

                private:

                    /**
                     * The IP address template group instance ID, such as `ipmg-90cex8mq`.
                     */
                    std::string m_addressTemplateGroupId;
                    bool m_addressTemplateGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEADDRESSTEMPLATEGROUPREQUEST_H_
