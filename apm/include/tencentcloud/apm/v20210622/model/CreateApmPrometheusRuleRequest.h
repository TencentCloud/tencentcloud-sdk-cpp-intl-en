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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMPROMETHEUSRULEREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMPROMETHEUSRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateApmPrometheusRule request structure.
                */
                class CreateApmPrometheusRuleRequest : public AbstractModel
                {
                public:
                    CreateApmPrometheusRuleRequest();
                    ~CreateApmPrometheusRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Metric match rule name.
                     * @return Name Metric match rule name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Metric match rule name.
                     * @param _name Metric match rule name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Applications where the rule takes effect. input an empty string for all applications.
                     * @return ServiceName Applications where the rule takes effect. input an empty string for all applications.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Applications where the rule takes effect. input an empty string for all applications.
                     * @param _serviceName Applications where the rule takes effect. input an empty string for all applications.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
                     * @return MetricMatchType Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
                     * 
                     */
                    int64_t GetMetricMatchType() const;

                    /**
                     * 设置Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
                     * @param _metricMatchType Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
                     * 
                     */
                    void SetMetricMatchType(const int64_t& _metricMatchType);

                    /**
                     * 判断参数 MetricMatchType 是否已赋值
                     * @return MetricMatchType 是否已赋值
                     * 
                     */
                    bool MetricMatchTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the rule for customer-defined metric names with cache hit.
                     * @return MetricNameRule Specifies the rule for customer-defined metric names with cache hit.
                     * 
                     */
                    std::string GetMetricNameRule() const;

                    /**
                     * 设置Specifies the rule for customer-defined metric names with cache hit.
                     * @param _metricNameRule Specifies the rule for customer-defined metric names with cache hit.
                     * 
                     */
                    void SetMetricNameRule(const std::string& _metricNameRule);

                    /**
                     * 判断参数 MetricNameRule 是否已赋值
                     * @return MetricNameRule 是否已赋值
                     * 
                     */
                    bool MetricNameRuleHasBeenSet() const;

                    /**
                     * 获取Business system ID
                     * @return InstanceId Business system ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system ID
                     * @param _instanceId Business system ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Metric match rule name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Applications where the rule takes effect. input an empty string for all applications.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
                     */
                    int64_t m_metricMatchType;
                    bool m_metricMatchTypeHasBeenSet;

                    /**
                     * Specifies the rule for customer-defined metric names with cache hit.
                     */
                    std::string m_metricNameRule;
                    bool m_metricNameRuleHasBeenSet;

                    /**
                     * Business system ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMPROMETHEUSRULEREQUEST_H_
