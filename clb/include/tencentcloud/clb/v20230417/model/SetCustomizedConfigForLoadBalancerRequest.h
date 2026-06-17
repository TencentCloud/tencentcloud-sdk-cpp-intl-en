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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            namespace Model
            {
                /**
                * SetCustomizedConfigForLoadBalancer request structure.
                */
                class SetCustomizedConfigForLoadBalancerRequest : public AbstractModel
                {
                public:
                    SetCustomizedConfigForLoadBalancerRequest();
                    ~SetCustomizedConfigForLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Operation type.
-ADD
- DELETE: delete.
-UPDATE: Modify
-BIND: bind
-UNBIND: unbound
                     * @return OperationType Operation type.
-ADD
- DELETE: delete.
-UPDATE: Modify
-BIND: bind
-UNBIND: unbound
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置Operation type.
-ADD
- DELETE: delete.
-UPDATE: Modify
-BIND: bind
-UNBIND: unbound
                     * @param _operationType Operation type.
-ADD
- DELETE: delete.
-UPDATE: Modify
-BIND: bind
-UNBIND: unbound
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取This field is required except for creating custom configurations. Example: pz-1234abcd
                     * @return ConfigId This field is required except for creating custom configurations. Example: pz-1234abcd
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置This field is required except for creating custom configurations. Example: pz-1234abcd
                     * @param _configId This field is required except for creating custom configurations. Example: pz-1234abcd
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Personalized configuration content. This field is required when creating custom configuration or modifying the content of custom configuration.
                     * @return ConfigContent Personalized configuration content. This field is required when creating custom configuration or modifying the content of custom configuration.
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置Personalized configuration content. This field is required when creating custom configuration or modifying the content of custom configuration.
                     * @param _configContent Personalized configuration content. This field is required when creating custom configuration or modifying the content of custom configuration.
                     * 
                     */
                    void SetConfigContent(const std::string& _configContent);

                    /**
                     * 判断参数 ConfigContent 是否已赋值
                     * @return ConfigContent 是否已赋值
                     * 
                     */
                    bool ConfigContentHasBeenSet() const;

                    /**
                     * 获取This field is required when you create or modify the name of a custom configuration.
                     * @return ConfigName This field is required when you create or modify the name of a custom configuration.
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置This field is required when you create or modify the name of a custom configuration.
                     * @param _configName This field is required when you create or modify the name of a custom configuration.
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取Load balancing instance ID. This field is required for bind/unbind.
                     * @return LoadBalancerIds Load balancing instance ID. This field is required for bind/unbind.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置Load balancing instance ID. This field is required for bind/unbind.
                     * @param _loadBalancerIds Load balancing instance ID. This field is required for bind/unbind.
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Operation type.
-ADD
- DELETE: delete.
-UPDATE: Modify
-BIND: bind
-UNBIND: unbound
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * This field is required except for creating custom configurations. Example: pz-1234abcd
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Personalized configuration content. This field is required when creating custom configuration or modifying the content of custom configuration.
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * This field is required when you create or modify the name of a custom configuration.
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Load balancing instance ID. This field is required for bind/unbind.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_
