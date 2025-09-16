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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_HORIZONTALPODAUTOSCALER_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_HORIZONTALPODAUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Option.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * HPA description.
                */
                class HorizontalPodAutoscaler : public AbstractModel
                {
                public:
                    HorizontalPodAutoscaler();
                    ~HorizontalPodAutoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinReplicas Minimum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置Minimum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minReplicas Minimum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxReplicas Maximum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置Maximum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxReplicas Maximum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取Supported."gpu-util": GPU utilization; value range: 10-100. "cpu-util": CPU utilization; value range: 10-100. "memory-util": memory utilization; value range: 10-100. "service-qps": the QPS value of single instances; value range: 1-5000."concurrency-util": the number of concurrent requests of single instances. Value range: 1-100000.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HpaMetrics Supported."gpu-util": GPU utilization; value range: 10-100. "cpu-util": CPU utilization; value range: 10-100. "memory-util": memory utilization; value range: 10-100. "service-qps": the QPS value of single instances; value range: 1-5000."concurrency-util": the number of concurrent requests of single instances. Value range: 1-100000.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Option> GetHpaMetrics() const;

                    /**
                     * 设置Supported."gpu-util": GPU utilization; value range: 10-100. "cpu-util": CPU utilization; value range: 10-100. "memory-util": memory utilization; value range: 10-100. "service-qps": the QPS value of single instances; value range: 1-5000."concurrency-util": the number of concurrent requests of single instances. Value range: 1-100000.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hpaMetrics Supported."gpu-util": GPU utilization; value range: 10-100. "cpu-util": CPU utilization; value range: 10-100. "memory-util": memory utilization; value range: 10-100. "service-qps": the QPS value of single instances; value range: 1-5000."concurrency-util": the number of concurrent requests of single instances. Value range: 1-100000.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHpaMetrics(const std::vector<Option>& _hpaMetrics);

                    /**
                     * 判断参数 HpaMetrics 是否已赋值
                     * @return HpaMetrics 是否已赋值
                     * 
                     */
                    bool HpaMetricsHasBeenSet() const;

                    /**
                     * 获取Scale-out cooldown period, in seconds.
                     * @return ScaleUpStabilizationWindowSeconds Scale-out cooldown period, in seconds.
                     * 
                     */
                    int64_t GetScaleUpStabilizationWindowSeconds() const;

                    /**
                     * 设置Scale-out cooldown period, in seconds.
                     * @param _scaleUpStabilizationWindowSeconds Scale-out cooldown period, in seconds.
                     * 
                     */
                    void SetScaleUpStabilizationWindowSeconds(const int64_t& _scaleUpStabilizationWindowSeconds);

                    /**
                     * 判断参数 ScaleUpStabilizationWindowSeconds 是否已赋值
                     * @return ScaleUpStabilizationWindowSeconds 是否已赋值
                     * 
                     */
                    bool ScaleUpStabilizationWindowSecondsHasBeenSet() const;

                    /**
                     * 获取Scale-in cooldown period, in seconds.
                     * @return ScaleDownStabilizationWindowSeconds Scale-in cooldown period, in seconds.
                     * 
                     */
                    int64_t GetScaleDownStabilizationWindowSeconds() const;

                    /**
                     * 设置Scale-in cooldown period, in seconds.
                     * @param _scaleDownStabilizationWindowSeconds Scale-in cooldown period, in seconds.
                     * 
                     */
                    void SetScaleDownStabilizationWindowSeconds(const int64_t& _scaleDownStabilizationWindowSeconds);

                    /**
                     * 判断参数 ScaleDownStabilizationWindowSeconds 是否已赋值
                     * @return ScaleDownStabilizationWindowSeconds 是否已赋值
                     * 
                     */
                    bool ScaleDownStabilizationWindowSecondsHasBeenSet() const;

                private:

                    /**
                     * Minimum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * Maximum number of instances.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * Supported."gpu-util": GPU utilization; value range: 10-100. "cpu-util": CPU utilization; value range: 10-100. "memory-util": memory utilization; value range: 10-100. "service-qps": the QPS value of single instances; value range: 1-5000."concurrency-util": the number of concurrent requests of single instances. Value range: 1-100000.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Option> m_hpaMetrics;
                    bool m_hpaMetricsHasBeenSet;

                    /**
                     * Scale-out cooldown period, in seconds.
                     */
                    int64_t m_scaleUpStabilizationWindowSeconds;
                    bool m_scaleUpStabilizationWindowSecondsHasBeenSet;

                    /**
                     * Scale-in cooldown period, in seconds.
                     */
                    int64_t m_scaleDownStabilizationWindowSeconds;
                    bool m_scaleDownStabilizationWindowSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_HORIZONTALPODAUTOSCALER_H_
