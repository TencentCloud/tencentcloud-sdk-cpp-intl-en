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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyAutoScalerConfigMetric.h>
#include <tencentcloud/tse/v20201207/model/AutoScalerBehavior.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Auto scaling policy
                */
                class CloudNativeAPIGatewayStrategyAutoScalerConfig : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategyAutoScalerConfig();
                    ~CloudNativeAPIGatewayStrategyAutoScalerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum number of replicas
                     * @return MaxReplicas Maximum number of replicas
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置Maximum number of replicas
                     * @param _maxReplicas Maximum number of replicas
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
                     * 获取Metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Metrics Metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayStrategyAutoScalerConfigMetric> GetMetrics() const;

                    /**
                     * 设置Metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metrics Metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetrics(const std::vector<CloudNativeAPIGatewayStrategyAutoScalerConfigMetric>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Whether metric scaling is enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enabled Whether metric scaling is enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether metric scaling is enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enabled Whether metric scaling is enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * @deprecated
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * @deprecated
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * @deprecated
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * @deprecated
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Metric configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoScalerId Metric configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetAutoScalerId() const;

                    /**
                     * 设置Metric configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoScalerId Metric configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetAutoScalerId(const std::string& _autoScalerId);

                    /**
                     * 判断参数 AutoScalerId 是否已赋值
                     * @return AutoScalerId 是否已赋值
                     * @deprecated
                     */
                    bool AutoScalerIdHasBeenSet() const;

                    /**
                     * 获取Metric scaling behavior configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Behavior Metric scaling behavior configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AutoScalerBehavior GetBehavior() const;

                    /**
                     * 设置Metric scaling behavior configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _behavior Metric scaling behavior configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBehavior(const AutoScalerBehavior& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                private:

                    /**
                     * Maximum number of replicas
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * Metric list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CloudNativeAPIGatewayStrategyAutoScalerConfigMetric> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Whether metric scaling is enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Metric configuration ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_autoScalerId;
                    bool m_autoScalerIdHasBeenSet;

                    /**
                     * Metric scaling behavior configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AutoScalerBehavior m_behavior;
                    bool m_behaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIG_H_
