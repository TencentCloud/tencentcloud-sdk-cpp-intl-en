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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCEDATA_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Dimension.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Instance information in cloud product metric subscription preview results.
                */
                class InstanceData : public AbstractModel
                {
                public:
                    InstanceData();
                    ~InstanceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud Monitor metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricName Cloud Monitor metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Cloud Monitor metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricName Cloud Monitor metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取CLS metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CLSMetricName CLS metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCLSMetricName() const;

                    /**
                     * 设置CLS metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cLSMetricName CLS metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCLSMetricName(const std::string& _cLSMetricName);

                    /**
                     * 判断参数 CLSMetricName 是否已赋值
                     * @return CLSMetricName 是否已赋值
                     * 
                     */
                    bool CLSMetricNameHasBeenSet() const;

                    /**
                     * 获取Cloud product namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Namespace Cloud product namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Cloud product namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespace Cloud product namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Dimensions Instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Dimension> GetDimensions() const;

                    /**
                     * 设置Instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dimensions Instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDimensions(const std::vector<Dimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Period (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Period Period (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Period (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _period Period (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Statistical value of a metric.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Statistical value of a metric.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Statistical value of a metric.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Statistical value of a metric.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrMsg Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errMsg Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * Cloud Monitor metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * CLS metric name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cLSMetricName;
                    bool m_cLSMetricNameHasBeenSet;

                    /**
                     * Cloud product namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Dimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Period (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Statistical value of a metric.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCEDATA_H_
