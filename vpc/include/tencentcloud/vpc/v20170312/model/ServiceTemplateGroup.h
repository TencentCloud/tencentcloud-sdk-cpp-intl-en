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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServiceTemplate.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Protocol port template group
                */
                class ServiceTemplateGroup : public AbstractModel
                {
                public:
                    ServiceTemplateGroup();
                    ~ServiceTemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol port template group instance ID, such as `ppmg-2klmrefu`.
                     * @return ServiceTemplateGroupId Protocol port template group instance ID, such as `ppmg-2klmrefu`.
                     * 
                     */
                    std::string GetServiceTemplateGroupId() const;

                    /**
                     * 设置Protocol port template group instance ID, such as `ppmg-2klmrefu`.
                     * @param _serviceTemplateGroupId Protocol port template group instance ID, such as `ppmg-2klmrefu`.
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
                     * 获取Protocol port template instance ID.
                     * @return ServiceTemplateIdSet Protocol port template instance ID.
                     * 
                     */
                    std::vector<std::string> GetServiceTemplateIdSet() const;

                    /**
                     * 设置Protocol port template instance ID.
                     * @param _serviceTemplateIdSet Protocol port template instance ID.
                     * 
                     */
                    void SetServiceTemplateIdSet(const std::vector<std::string>& _serviceTemplateIdSet);

                    /**
                     * 判断参数 ServiceTemplateIdSet 是否已赋值
                     * @return ServiceTemplateIdSet 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdSetHasBeenSet() const;

                    /**
                     * 获取Creation Time.
                     * @return CreatedTime Creation Time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation Time.
                     * @param _createdTime Creation Time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Protocol port template instance information.
                     * @return ServiceTemplateSet Protocol port template instance information.
                     * 
                     */
                    std::vector<ServiceTemplate> GetServiceTemplateSet() const;

                    /**
                     * 设置Protocol port template instance information.
                     * @param _serviceTemplateSet Protocol port template instance information.
                     * 
                     */
                    void SetServiceTemplateSet(const std::vector<ServiceTemplate>& _serviceTemplateSet);

                    /**
                     * 判断参数 ServiceTemplateSet 是否已赋值
                     * @return ServiceTemplateSet 是否已赋值
                     * 
                     */
                    bool ServiceTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Protocol port template group instance ID, such as `ppmg-2klmrefu`.
                     */
                    std::string m_serviceTemplateGroupId;
                    bool m_serviceTemplateGroupIdHasBeenSet;

                    /**
                     * Protocol port template group name.
                     */
                    std::string m_serviceTemplateGroupName;
                    bool m_serviceTemplateGroupNameHasBeenSet;

                    /**
                     * Protocol port template instance ID.
                     */
                    std::vector<std::string> m_serviceTemplateIdSet;
                    bool m_serviceTemplateIdSetHasBeenSet;

                    /**
                     * Creation Time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Protocol port template instance information.
                     */
                    std::vector<ServiceTemplate> m_serviceTemplateSet;
                    bool m_serviceTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_
