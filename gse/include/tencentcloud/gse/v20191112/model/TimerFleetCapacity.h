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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TIMERFLEETCAPACITY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TIMERFLEETCAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TargetConfiguration.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * The capacity configurations of the scheduled scaling policy
                */
                class TimerFleetCapacity : public AbstractModel
                {
                public:
                    TimerFleetCapacity();
                    ~TimerFleetCapacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the fleet to be bound with the policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FleetId ID of the fleet to be bound with the policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置ID of the fleet to be bound with the policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _fleetId ID of the fleet to be bound with the policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Desired number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DesiredInstances Desired number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDesiredInstances() const;

                    /**
                     * 设置Desired number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _desiredInstances Desired number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDesiredInstances(const int64_t& _desiredInstances);

                    /**
                     * 判断参数 DesiredInstances 是否已赋值
                     * @return DesiredInstances 是否已赋值
                     * 
                     */
                    bool DesiredInstancesHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MinSize Minimum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置Minimum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _minSize Minimum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxSize Maximum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _maxSize Maximum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取Scaling cooldown period, in minutes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ScalingInterval Scaling cooldown period, in minutes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScalingInterval() const;

                    /**
                     * 设置Scaling cooldown period, in minutes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _scalingInterval Scaling cooldown period, in minutes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScalingInterval(const int64_t& _scalingInterval);

                    /**
                     * 判断参数 ScalingInterval 是否已赋值
                     * @return ScalingInterval 是否已赋值
                     * 
                     */
                    bool ScalingIntervalHasBeenSet() const;

                    /**
                     * 获取Scaling type. `1`: manual, `2`: automatic, `0`: undefined
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ScalingType Scaling type. `1`: manual, `2`: automatic, `0`: undefined
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScalingType() const;

                    /**
                     * 设置Scaling type. `1`: manual, `2`: automatic, `0`: undefined
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _scalingType Scaling type. `1`: manual, `2`: automatic, `0`: undefined
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScalingType(const int64_t& _scalingType);

                    /**
                     * 判断参数 ScalingType 是否已赋值
                     * @return ScalingType 是否已赋值
                     * 
                     */
                    bool ScalingTypeHasBeenSet() const;

                    /**
                     * 获取Configuration of target tracking scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetConfiguration Configuration of target tracking scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    TargetConfiguration GetTargetConfiguration() const;

                    /**
                     * 设置Configuration of target tracking scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _targetConfiguration Configuration of target tracking scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetConfiguration(const TargetConfiguration& _targetConfiguration);

                    /**
                     * 判断参数 TargetConfiguration 是否已赋值
                     * @return TargetConfiguration 是否已赋值
                     * 
                     */
                    bool TargetConfigurationHasBeenSet() const;

                private:

                    /**
                     * ID of the fleet to be bound with the policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Desired number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_desiredInstances;
                    bool m_desiredInstancesHasBeenSet;

                    /**
                     * Minimum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Maximum number of instances
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Scaling cooldown period, in minutes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_scalingInterval;
                    bool m_scalingIntervalHasBeenSet;

                    /**
                     * Scaling type. `1`: manual, `2`: automatic, `0`: undefined
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_scalingType;
                    bool m_scalingTypeHasBeenSet;

                    /**
                     * Configuration of target tracking scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    TargetConfiguration m_targetConfiguration;
                    bool m_targetConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TIMERFLEETCAPACITY_H_
