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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEADDRESSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEADDRESSTEMPLATEREQUEST_H_

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
                * DeleteAddressTemplate request structure.
                */
                class DeleteAddressTemplateRequest : public AbstractModel
                {
                public:
                    DeleteAddressTemplateRequest();
                    ~DeleteAddressTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The IP address template instance ID, such as `ipm-09o5m8kc`.
                     * @return AddressTemplateId The IP address template instance ID, such as `ipm-09o5m8kc`.
                     * 
                     */
                    std::string GetAddressTemplateId() const;

                    /**
                     * 设置The IP address template instance ID, such as `ipm-09o5m8kc`.
                     * @param _addressTemplateId The IP address template instance ID, such as `ipm-09o5m8kc`.
                     * 
                     */
                    void SetAddressTemplateId(const std::string& _addressTemplateId);

                    /**
                     * 判断参数 AddressTemplateId 是否已赋值
                     * @return AddressTemplateId 是否已赋值
                     * 
                     */
                    bool AddressTemplateIdHasBeenSet() const;

                private:

                    /**
                     * The IP address template instance ID, such as `ipm-09o5m8kc`.
                     */
                    std::string m_addressTemplateId;
                    bool m_addressTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEADDRESSTEMPLATEREQUEST_H_
