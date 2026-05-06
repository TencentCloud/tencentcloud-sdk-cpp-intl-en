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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayCanaryRules request structure.
                */
                class DescribeCloudNativeAPIGatewayCanaryRulesRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayCanaryRulesRequest();
                    ~DescribeCloudNativeAPIGatewayCanaryRulesRequest() = default;
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
                     * 获取service ID
                     * @return ServiceId service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置service ID
                     * @param _serviceId service ID
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
                     * 获取Grayscale rule type Standard | Lane
                     * @return RuleType Grayscale rule type Standard | Lane
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Grayscale rule type Standard | Lane
                     * @param _ruleType Grayscale rule type Standard | Lane
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Number of tables in the list
                     * @return Limit Number of tables in the list
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of tables in the list
                     * @param _limit Number of tables in the list
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取List offset
                     * @return Offset List offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置List offset
                     * @param _offset List offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Grayscale rule type Standard | Lane
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Number of tables in the list
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * List offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_
