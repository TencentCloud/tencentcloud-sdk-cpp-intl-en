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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayCanaryRule request structure.
                */
                class CreateCloudNativeAPIGatewayCanaryRuleRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayCanaryRuleRequest();
                    ~CreateCloudNativeAPIGatewayCanaryRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway ID
                     * @return GatewayId Gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID
                     * @param _gatewayId Gateway ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Service ID
                     * @return ServiceId Service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param _serviceId Service ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Grayscale rule configuration
                     * @return CanaryRule Grayscale rule configuration
                     * 
                     */
                    CloudNativeAPIGatewayCanaryRule GetCanaryRule() const;

                    /**
                     * 设置Grayscale rule configuration
                     * @param _canaryRule Grayscale rule configuration
                     * 
                     */
                    void SetCanaryRule(const CloudNativeAPIGatewayCanaryRule& _canaryRule);

                    /**
                     * 判断参数 CanaryRule 是否已赋值
                     * @return CanaryRule 是否已赋值
                     * 
                     */
                    bool CanaryRuleHasBeenSet() const;

                    /**
                     * 获取Grayscale rule configuration list. If configured, this parameter takes precedence and the CanaryRule parameter is ignored.
                     * @return CanaryRuleList Grayscale rule configuration list. If configured, this parameter takes precedence and the CanaryRule parameter is ignored.
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRule> GetCanaryRuleList() const;

                    /**
                     * 设置Grayscale rule configuration list. If configured, this parameter takes precedence and the CanaryRule parameter is ignored.
                     * @param _canaryRuleList Grayscale rule configuration list. If configured, this parameter takes precedence and the CanaryRule parameter is ignored.
                     * 
                     */
                    void SetCanaryRuleList(const std::vector<CloudNativeAPIGatewayCanaryRule>& _canaryRuleList);

                    /**
                     * 判断参数 CanaryRuleList 是否已赋值
                     * @return CanaryRuleList 是否已赋值
                     * 
                     */
                    bool CanaryRuleListHasBeenSet() const;

                private:

                    /**
                     * Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Grayscale rule configuration
                     */
                    CloudNativeAPIGatewayCanaryRule m_canaryRule;
                    bool m_canaryRuleHasBeenSet;

                    /**
                     * Grayscale rule configuration list. If configured, this parameter takes precedence and the CanaryRule parameter is ignored.
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRule> m_canaryRuleList;
                    bool m_canaryRuleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_
