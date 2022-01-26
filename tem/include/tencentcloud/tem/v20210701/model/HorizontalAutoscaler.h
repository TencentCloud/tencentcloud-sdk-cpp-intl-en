/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Auto scaling policy
                */
                class HorizontalAutoscaler : public AbstractModel
                {
                public:
                    HorizontalAutoscaler();
                    ~HorizontalAutoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum number of instances
                     * @return MinReplicas Minimum number of instances
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置Minimum number of instances
                     * @param MinReplicas Minimum number of instances
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances
                     * @return MaxReplicas Maximum number of instances
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置Maximum number of instances
                     * @param MaxReplicas Maximum number of instances
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取Metrics (CPU or memory)
                     * @return Metrics Metrics (CPU or memory)
                     */
                    std::string GetMetrics() const;

                    /**
                     * 设置Metrics (CPU or memory)
                     * @param Metrics Metrics (CPU or memory)
                     */
                    void SetMetrics(const std::string& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Threshold (percentage)
                     * @return Threshold Threshold (percentage)
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置Threshold (percentage)
                     * @param Threshold Threshold (percentage)
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * Minimum number of instances
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * Maximum number of instances
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * Metrics (CPU or memory)
                     */
                    std::string m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Threshold (percentage)
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_
