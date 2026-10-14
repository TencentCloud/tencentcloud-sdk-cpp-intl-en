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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Scope of resources for instance configuration adjustment
When ResourceType is cpu, it means ccu.
When the value is nodecount, it indicates the range of the number of nodes.
For disk, it indicates the disk capacity range (unit: GB).
Whether ScaleUpEnabled enables scale-up
Whether ScaleDownEnabled is enabled
ThresholdPercent is the trigger threshold (%).
Step is the step length for configuration change
                */
                class AutoScalingConfig : public AbstractModel
                {
                public:
                    AutoScalingConfig();
                    ~AutoScalingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Minimum value</p>
                     * @return RangeMin <p>Minimum value</p>
                     * 
                     */
                    double GetRangeMin() const;

                    /**
                     * 设置<p>Minimum value</p>
                     * @param _rangeMin <p>Minimum value</p>
                     * 
                     */
                    void SetRangeMin(const double& _rangeMin);

                    /**
                     * 判断参数 RangeMin 是否已赋值
                     * @return RangeMin 是否已赋值
                     * 
                     */
                    bool RangeMinHasBeenSet() const;

                    /**
                     * 获取<p>Maximum value</p>
                     * @return RangeMax <p>Maximum value</p>
                     * 
                     */
                    double GetRangeMax() const;

                    /**
                     * 设置<p>Maximum value</p>
                     * @param _rangeMax <p>Maximum value</p>
                     * 
                     */
                    void SetRangeMax(const double& _rangeMax);

                    /**
                     * 判断参数 RangeMax 是否已赋值
                     * @return RangeMax 是否已赋值
                     * 
                     */
                    bool RangeMaxHasBeenSet() const;

                    /**
                     * 获取<p>Resource type corresponding to the returned range parameter</p><p>Enumeration values:</p><ul><li>cpu: Returns the CPU adjustment return limit. When no mem limit exists, it represents ccu.</li><li>nodecount: Returns the limit range of the number of nodes for horizontal scaling.</li><li>datadisk: Returns the capacity limit range for disk scale-out.</li></ul>
                     * @return ResourceType <p>Resource type corresponding to the returned range parameter</p><p>Enumeration values:</p><ul><li>cpu: Returns the CPU adjustment return limit. When no mem limit exists, it represents ccu.</li><li>nodecount: Returns the limit range of the number of nodes for horizontal scaling.</li><li>datadisk: Returns the capacity limit range for disk scale-out.</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>Resource type corresponding to the returned range parameter</p><p>Enumeration values:</p><ul><li>cpu: Returns the CPU adjustment return limit. When no mem limit exists, it represents ccu.</li><li>nodecount: Returns the limit range of the number of nodes for horizontal scaling.</li><li>datadisk: Returns the capacity limit range for disk scale-out.</li></ul>
                     * @param _resourceType <p>Resource type corresponding to the returned range parameter</p><p>Enumeration values:</p><ul><li>cpu: Returns the CPU adjustment return limit. When no mem limit exists, it represents ccu.</li><li>nodecount: Returns the limit range of the number of nodes for horizontal scaling.</li><li>datadisk: Returns the capacity limit range for disk scale-out.</li></ul>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether upgrade is allowed</p>
                     * @return ScaleUpEnabled <p>Whether upgrade is allowed</p>
                     * 
                     */
                    bool GetScaleUpEnabled() const;

                    /**
                     * 设置<p>Whether upgrade is allowed</p>
                     * @param _scaleUpEnabled <p>Whether upgrade is allowed</p>
                     * 
                     */
                    void SetScaleUpEnabled(const bool& _scaleUpEnabled);

                    /**
                     * 判断参数 ScaleUpEnabled 是否已赋值
                     * @return ScaleUpEnabled 是否已赋值
                     * 
                     */
                    bool ScaleUpEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Whether to allow downgrade</p>
                     * @return ScaleDownEnabled <p>Whether to allow downgrade</p>
                     * 
                     */
                    bool GetScaleDownEnabled() const;

                    /**
                     * 设置<p>Whether to allow downgrade</p>
                     * @param _scaleDownEnabled <p>Whether to allow downgrade</p>
                     * 
                     */
                    void SetScaleDownEnabled(const bool& _scaleDownEnabled);

                    /**
                     * 判断参数 ScaleDownEnabled 是否已赋值
                     * @return ScaleDownEnabled 是否已赋值
                     * 
                     */
                    bool ScaleDownEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Trigger threshold (%)</p>
                     * @return ThresholdPercent <p>Trigger threshold (%)</p>
                     * 
                     */
                    int64_t GetThresholdPercent() const;

                    /**
                     * 设置<p>Trigger threshold (%)</p>
                     * @param _thresholdPercent <p>Trigger threshold (%)</p>
                     * 
                     */
                    void SetThresholdPercent(const int64_t& _thresholdPercent);

                    /**
                     * 判断参数 ThresholdPercent 是否已赋值
                     * @return ThresholdPercent 是否已赋值
                     * 
                     */
                    bool ThresholdPercentHasBeenSet() const;

                    /**
                     * 获取<p>Configuration change step length</p>
                     * @return Step <p>Configuration change step length</p>
                     * 
                     */
                    double GetStep() const;

                    /**
                     * 设置<p>Configuration change step length</p>
                     * @param _step <p>Configuration change step length</p>
                     * 
                     */
                    void SetStep(const double& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * <p>Minimum value</p>
                     */
                    double m_rangeMin;
                    bool m_rangeMinHasBeenSet;

                    /**
                     * <p>Maximum value</p>
                     */
                    double m_rangeMax;
                    bool m_rangeMaxHasBeenSet;

                    /**
                     * <p>Resource type corresponding to the returned range parameter</p><p>Enumeration values:</p><ul><li>cpu: Returns the CPU adjustment return limit. When no mem limit exists, it represents ccu.</li><li>nodecount: Returns the limit range of the number of nodes for horizontal scaling.</li><li>datadisk: Returns the capacity limit range for disk scale-out.</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>Whether upgrade is allowed</p>
                     */
                    bool m_scaleUpEnabled;
                    bool m_scaleUpEnabledHasBeenSet;

                    /**
                     * <p>Whether to allow downgrade</p>
                     */
                    bool m_scaleDownEnabled;
                    bool m_scaleDownEnabledHasBeenSet;

                    /**
                     * <p>Trigger threshold (%)</p>
                     */
                    int64_t m_thresholdPercent;
                    bool m_thresholdPercentHasBeenSet;

                    /**
                     * <p>Configuration change step length</p>
                     */
                    double m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_
