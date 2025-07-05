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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEGROUPATTRIBUTEREQUEST_H_

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
                * ModifyServiceTemplateGroupAttribute request structure.
                */
                class ModifyServiceTemplateGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyServiceTemplateGroupAttributeRequest();
                    ~ModifyServiceTemplateGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The protocol port template group instance ID, such as `ppmg-ei8hfd9a`.
                     * @return ServiceTemplateGroupId The protocol port template group instance ID, such as `ppmg-ei8hfd9a`.
                     * 
                     */
                    std::string GetServiceTemplateGroupId() const;

                    /**
                     * 设置The protocol port template group instance ID, such as `ppmg-ei8hfd9a`.
                     * @param _serviceTemplateGroupId The protocol port template group instance ID, such as `ppmg-ei8hfd9a`.
                     * 
                     */
                    void SetServiceTemplateGroupId(const std::string& _serviceTemplateGroupId);

                    /**
                     * 判断参数 ServiceTemplateGroupId 是否已赋值
                     * @return ServiceTemplateGroupId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateGroupIdHasBeenSet() const;

                    /**
                     * 获取Protocol port template group name.
                     * @return ServiceTemplateGroupName Protocol port template group name.
                     * 
                     */
                    std::string GetServiceTemplateGroupName() const;

                    /**
                     * 设置Protocol port template group name.
                     * @param _serviceTemplateGroupName Protocol port template group name.
                     * 
                     */
                    void SetServiceTemplateGroupName(const std::string& _serviceTemplateGroupName);

                    /**
                     * 判断参数 ServiceTemplateGroupName 是否已赋值
                     * @return ServiceTemplateGroupName 是否已赋值
                     * 
                     */
                    bool ServiceTemplateGroupNameHasBeenSet() const;

                    /**
                     * 获取Instance ID of the protocol port template, such as `ppm-4dw6agho`.
                     * @return ServiceTemplateIds Instance ID of the protocol port template, such as `ppm-4dw6agho`.
                     * 
                     */
                    std::vector<std::string> GetServiceTemplateIds() const;

                    /**
                     * 设置Instance ID of the protocol port template, such as `ppm-4dw6agho`.
                     * @param _serviceTemplateIds Instance ID of the protocol port template, such as `ppm-4dw6agho`.
                     * 
                     */
                    void SetServiceTemplateIds(const std::vector<std::string>& _serviceTemplateIds);

                    /**
                     * 判断参数 ServiceTemplateIds 是否已赋值
                     * @return ServiceTemplateIds 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * The protocol port template group instance ID, such as `ppmg-ei8hfd9a`.
                     */
                    std::string m_serviceTemplateGroupId;
                    bool m_serviceTemplateGroupIdHasBeenSet;

                    /**
                     * Protocol port template group name.
                     */
                    std::string m_serviceTemplateGroupName;
                    bool m_serviceTemplateGroupNameHasBeenSet;

                    /**
                     * Instance ID of the protocol port template, such as `ppm-4dw6agho`.
                     */
                    std::vector<std::string> m_serviceTemplateIds;
                    bool m_serviceTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSERVICETEMPLATEGROUPATTRIBUTEREQUEST_H_
