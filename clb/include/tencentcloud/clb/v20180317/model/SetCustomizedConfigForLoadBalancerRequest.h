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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
-ADD. specifies the creation.
- DELETE: DELETE.
-UPDATE: modify.
-BIND: specifies the binding status.
-UNBIND: unbind.
                     * @return OperationType Operation type.
-ADD. specifies the creation.
- DELETE: DELETE.
-UPDATE: modify.
-BIND: specifies the binding status.
-UNBIND: unbind.
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置Operation type.
-ADD. specifies the creation.
- DELETE: DELETE.
-UPDATE: modify.
-BIND: specifies the binding status.
-UNBIND: unbind.
                     * @param _operationType Operation type.
-ADD. specifies the creation.
- DELETE: DELETE.
-UPDATE: modify.
-BIND: specifies the binding status.
-UNBIND: unbind.
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
                     * 获取Personalized configuration ID. this field is required except when creating a custom configuration, for example: pz-1234abcd.
                     * @return UconfigId Personalized configuration ID. this field is required except when creating a custom configuration, for example: pz-1234abcd.
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置Personalized configuration ID. this field is required except when creating a custom configuration, for example: pz-1234abcd.
                     * @param _uconfigId Personalized configuration ID. this field is required except when creating a custom configuration, for example: pz-1234abcd.
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                    /**
                     * 获取Specifies the personalized configuration content. this field is required when creating or modifying custom configuration.
Specifies specific restrictions. view layer-7 personalized configuration (https://www.tencentcloud.comom/document/product/214/15171?from_cn_redirect=1).
                     * @return ConfigContent Specifies the personalized configuration content. this field is required when creating or modifying custom configuration.
Specifies specific restrictions. view layer-7 personalized configuration (https://www.tencentcloud.comom/document/product/214/15171?from_cn_redirect=1).
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置Specifies the personalized configuration content. this field is required when creating or modifying custom configuration.
Specifies specific restrictions. view layer-7 personalized configuration (https://www.tencentcloud.comom/document/product/214/15171?from_cn_redirect=1).
                     * @param _configContent Specifies the personalized configuration content. this field is required when creating or modifying custom configuration.
Specifies specific restrictions. view layer-7 personalized configuration (https://www.tencentcloud.comom/document/product/214/15171?from_cn_redirect=1).
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
                     * 获取Custom configuration name. specifies the name when creating or modifying a custom configuration. this field is required.
                     * @return ConfigName Custom configuration name. specifies the name when creating or modifying a custom configuration. this field is required.
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Custom configuration name. specifies the name when creating or modifying a custom configuration. this field is required.
                     * @param _configName Custom configuration name. specifies the name when creating or modifying a custom configuration. this field is required.
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
                     * 获取CLB instance ID. this field is required for bind/unbind operations.
Can be queried through the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/1108/48459?from_cn_redirect=1) api.
                     * @return LoadBalancerIds CLB instance ID. this field is required for bind/unbind operations.
Can be queried through the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/1108/48459?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置CLB instance ID. this field is required for bind/unbind operations.
Can be queried through the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/1108/48459?from_cn_redirect=1) api.
                     * @param _loadBalancerIds CLB instance ID. this field is required for bind/unbind operations.
Can be queried through the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/1108/48459?from_cn_redirect=1) api.
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                private:

                    /**
                     * Operation type.
-ADD. specifies the creation.
- DELETE: DELETE.
-UPDATE: modify.
-BIND: specifies the binding status.
-UNBIND: unbind.
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * Personalized configuration ID. this field is required except when creating a custom configuration, for example: pz-1234abcd.
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * Specifies the personalized configuration content. this field is required when creating or modifying custom configuration.
Specifies specific restrictions. view layer-7 personalized configuration (https://www.tencentcloud.comom/document/product/214/15171?from_cn_redirect=1).
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * Custom configuration name. specifies the name when creating or modifying a custom configuration. this field is required.
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * CLB instance ID. this field is required for bind/unbind operations.
Can be queried through the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/1108/48459?from_cn_redirect=1) api.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SETCUSTOMIZEDCONFIGFORLOADBALANCERREQUEST_H_
