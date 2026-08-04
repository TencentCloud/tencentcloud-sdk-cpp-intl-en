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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEMONITORRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEMONITORRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceServiceMonitorItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Service monitoring data record for reasoning.
                */
                class InferenceServiceMonitorRecord : public AbstractModel
                {
                public:
                    InferenceServiceMonitorRecord();
                    ~InferenceServiceMonitorRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the inference service.
                     * @return ServiceId ID of the inference service.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置ID of the inference service.
                     * @param _serviceId ID of the inference service.
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
                     * 获取Metric name.
                     * @return MetricName Metric name.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name.
                     * @param _metricName Metric name.
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
                     * 获取Detailed service monitoring data for reasoning.
                     * @return InferenceServiceMonitorItems Detailed service monitoring data for reasoning.
                     * 
                     */
                    std::vector<InferenceServiceMonitorItem> GetInferenceServiceMonitorItems() const;

                    /**
                     * 设置Detailed service monitoring data for reasoning.
                     * @param _inferenceServiceMonitorItems Detailed service monitoring data for reasoning.
                     * 
                     */
                    void SetInferenceServiceMonitorItems(const std::vector<InferenceServiceMonitorItem>& _inferenceServiceMonitorItems);

                    /**
                     * 判断参数 InferenceServiceMonitorItems 是否已赋值
                     * @return InferenceServiceMonitorItems 是否已赋值
                     * 
                     */
                    bool InferenceServiceMonitorItemsHasBeenSet() const;

                private:

                    /**
                     * ID of the inference service.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Metric name.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Detailed service monitoring data for reasoning.
                     */
                    std::vector<InferenceServiceMonitorItem> m_inferenceServiceMonitorItems;
                    bool m_inferenceServiceMonitorItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICEMONITORRECORD_H_
