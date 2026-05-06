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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIGMETRIC_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIGMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Auto scaling configuration metrics
                */
                class CloudNativeAPIGatewayStrategyAutoScalerConfigMetric : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategyAutoScalerConfigMetric();
                    ~CloudNativeAPIGatewayStrategyAutoScalerConfigMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric Type
- Resource
                     * @return Type Metric Type
- Resource
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Metric Type
- Resource
                     * @param _type Metric Type
- Resource
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Metric resource name
- cpu
- memory
                     * @return ResourceName Metric resource name
- cpu
- memory
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Metric resource name
- cpu
- memory
                     * @param _resourceName Metric resource name
- cpu
- memory
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Metric target type, currently only support percentage Utilization
                     * @return TargetType Metric target type, currently only support percentage Utilization
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Metric target type, currently only support percentage Utilization
                     * @param _targetType Metric target type, currently only support percentage Utilization
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Target value of the metric
                     * @return TargetValue Target value of the metric
                     * 
                     */
                    int64_t GetTargetValue() const;

                    /**
                     * 设置Target value of the metric
                     * @param _targetValue Target value of the metric
                     * 
                     */
                    void SetTargetValue(const int64_t& _targetValue);

                    /**
                     * 判断参数 TargetValue 是否已赋值
                     * @return TargetValue 是否已赋值
                     * 
                     */
                    bool TargetValueHasBeenSet() const;

                private:

                    /**
                     * Metric Type
- Resource
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Metric resource name
- cpu
- memory
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Metric target type, currently only support percentage Utilization
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Target value of the metric
                     */
                    int64_t m_targetValue;
                    bool m_targetValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIGMETRIC_H_
