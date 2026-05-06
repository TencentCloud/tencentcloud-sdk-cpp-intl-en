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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRule.h>
#include <tencentcloud/tse/v20201207/model/CanaryPriorityRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayCanaryRule request structure.
                */
                class ModifyCloudNativeAPIGatewayCanaryRuleRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayCanaryRuleRequest();
                    ~ModifyCloudNativeAPIGatewayCanaryRuleRequest() = default;
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
                     * 获取Priority. The grayscale rule priority of a service is unique.
                     * @return Priority Priority. The grayscale rule priority of a service is unique.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority. The grayscale rule priority of a service is unique.
                     * @param _priority Priority. The grayscale rule priority of a service is unique.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

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
                     * 获取Grayscale rule configuration list. If configured, this parameter takes precedence and the Priority and CanaryRule parameters are ignored.
                     * @return CanaryRuleList Grayscale rule configuration list. If configured, this parameter takes precedence and the Priority and CanaryRule parameters are ignored.
                     * 
                     */
                    std::vector<CanaryPriorityRule> GetCanaryRuleList() const;

                    /**
                     * 设置Grayscale rule configuration list. If configured, this parameter takes precedence and the Priority and CanaryRule parameters are ignored.
                     * @param _canaryRuleList Grayscale rule configuration list. If configured, this parameter takes precedence and the Priority and CanaryRule parameters are ignored.
                     * 
                     */
                    void SetCanaryRuleList(const std::vector<CanaryPriorityRule>& _canaryRuleList);

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
                     * Priority. The grayscale rule priority of a service is unique.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Grayscale rule configuration
                     */
                    CloudNativeAPIGatewayCanaryRule m_canaryRule;
                    bool m_canaryRuleHasBeenSet;

                    /**
                     * Grayscale rule configuration list. If configured, this parameter takes precedence and the Priority and CanaryRule parameters are ignored.
                     */
                    std::vector<CanaryPriorityRule> m_canaryRuleList;
                    bool m_canaryRuleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_
