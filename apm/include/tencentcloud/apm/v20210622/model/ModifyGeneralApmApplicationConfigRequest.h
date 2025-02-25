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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYGENERALAPMAPPLICATIONCONFIGREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYGENERALAPMAPPLICATIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyGeneralApmApplicationConfig request structure.
                */
                class ModifyGeneralApmApplicationConfigRequest : public AbstractModel
                {
                public:
                    ModifyGeneralApmApplicationConfigRequest();
                    ~ModifyGeneralApmApplicationConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business system id.
                     * @return InstanceId Business system id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system id.
                     * @param _instanceId Business system id.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Fields to be modified. the key and value respectively specify the field name and field value.
.
For specific fields, please refer to.
                     * @return Tags Fields to be modified. the key and value respectively specify the field name and field value.
.
For specific fields, please refer to.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Fields to be modified. the key and value respectively specify the field name and field value.
.
For specific fields, please refer to.
                     * @param _tags Fields to be modified. the key and value respectively specify the field name and field value.
.
For specific fields, please refer to.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Name of the application list that requires configuration modification.	
                     * @return ServiceNames Name of the application list that requires configuration modification.	
                     * 
                     */
                    std::vector<std::string> GetServiceNames() const;

                    /**
                     * 设置Name of the application list that requires configuration modification.	
                     * @param _serviceNames Name of the application list that requires configuration modification.	
                     * 
                     */
                    void SetServiceNames(const std::vector<std::string>& _serviceNames);

                    /**
                     * 判断参数 ServiceNames 是否已赋值
                     * @return ServiceNames 是否已赋值
                     * 
                     */
                    bool ServiceNamesHasBeenSet() const;

                private:

                    /**
                     * Business system id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Fields to be modified. the key and value respectively specify the field name and field value.
.
For specific fields, please refer to.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Name of the application list that requires configuration modification.	
                     */
                    std::vector<std::string> m_serviceNames;
                    bool m_serviceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYGENERALAPMAPPLICATIONCONFIGREQUEST_H_
