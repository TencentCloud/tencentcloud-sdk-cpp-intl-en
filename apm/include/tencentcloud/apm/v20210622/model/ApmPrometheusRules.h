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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMPROMETHEUSRULES_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMPROMETHEUSRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Shows the association between the apm business system and prometheus in the return format.
                */
                class ApmPrometheusRules : public AbstractModel
                {
                public:
                    ApmPrometheusRules();
                    ~ApmPrometheusRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric match rule ID.
                     * @return Id Metric match rule ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Metric match rule ID.
                     * @param _id Metric match rule ID.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Metric match rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Metric match rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Metric match rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Metric match rule name.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceName Applications where the rule takes effect. input an empty string for all applications.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Applications where the rule takes effect. input an empty string for all applications.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceName Applications where the rule takes effect. input an empty string for all applications.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the metric match rule status: 1 (enabled), 2 (disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Specifies the metric match rule status: 1 (enabled), 2 (disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Specifies the metric match rule status: 1 (enabled), 2 (disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Specifies the metric match rule status: 1 (enabled), 2 (disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Specifies the metric match rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricNameRule Specifies the metric match rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetricNameRule() const;

                    /**
                     * 设置Specifies the metric match rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricNameRule Specifies the metric match rule.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricMatchType Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMetricMatchType() const;

                    /**
                     * 设置Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricMatchType Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricMatchType(const int64_t& _metricMatchType);

                    /**
                     * 判断参数 MetricMatchType 是否已赋值
                     * @return MetricMatchType 是否已赋值
                     * 
                     */
                    bool MetricMatchTypeHasBeenSet() const;

                private:

                    /**
                     * Metric match rule ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Metric match rule name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Applications where the rule takes effect. input an empty string for all applications.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Specifies the metric match rule status: 1 (enabled), 2 (disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies the metric match rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metricNameRule;
                    bool m_metricNameRuleHasBeenSet;

                    /**
                     * Match type: 0 - precision match, 1 - prefix match, 2 - suffix match.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_metricMatchType;
                    bool m_metricMatchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMPROMETHEUSRULES_H_
