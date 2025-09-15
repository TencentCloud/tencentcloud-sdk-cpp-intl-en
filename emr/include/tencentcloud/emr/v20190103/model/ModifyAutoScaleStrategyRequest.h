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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTOSCALESTRATEGYREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTOSCALESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoadAutoScaleStrategy.h>
#include <tencentcloud/emr/v20190103/model/TimeAutoScaleStrategy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyAutoScaleStrategy request structure.
                */
                class ModifyAutoScaleStrategyRequest : public AbstractModel
                {
                public:
                    ModifyAutoScaleStrategyRequest();
                    ~ModifyAutoScaleStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Automatic scaling rule type. 1: Scaling by load metrics; 2: Scaling by time
                     * @return StrategyType Automatic scaling rule type. 1: Scaling by load metrics; 2: Scaling by time
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置Automatic scaling rule type. 1: Scaling by load metrics; 2: Scaling by time
                     * @param _strategyType Automatic scaling rule type. 1: Scaling by load metrics; 2: Scaling by time
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Metric for load-based scaling.
                     * @return LoadAutoScaleStrategies Metric for load-based scaling.
                     * 
                     */
                    std::vector<LoadAutoScaleStrategy> GetLoadAutoScaleStrategies() const;

                    /**
                     * 设置Metric for load-based scaling.
                     * @param _loadAutoScaleStrategies Metric for load-based scaling.
                     * 
                     */
                    void SetLoadAutoScaleStrategies(const std::vector<LoadAutoScaleStrategy>& _loadAutoScaleStrategies);

                    /**
                     * 判断参数 LoadAutoScaleStrategies 是否已赋值
                     * @return LoadAutoScaleStrategies 是否已赋值
                     * 
                     */
                    bool LoadAutoScaleStrategiesHasBeenSet() const;

                    /**
                     * 获取Rule for time-based scaling
                     * @return TimeAutoScaleStrategies Rule for time-based scaling
                     * 
                     */
                    std::vector<TimeAutoScaleStrategy> GetTimeAutoScaleStrategies() const;

                    /**
                     * 设置Rule for time-based scaling
                     * @param _timeAutoScaleStrategies Rule for time-based scaling
                     * 
                     */
                    void SetTimeAutoScaleStrategies(const std::vector<TimeAutoScaleStrategy>& _timeAutoScaleStrategies);

                    /**
                     * 判断参数 TimeAutoScaleStrategies 是否已赋值
                     * @return TimeAutoScaleStrategies 是否已赋值
                     * 
                     */
                    bool TimeAutoScaleStrategiesHasBeenSet() const;

                    /**
                     * 获取Scaling group ID.
                     * @return GroupId Scaling group ID.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Scaling group ID.
                     * @param _groupId Scaling group ID.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Automatic scaling rule type. 1: Scaling by load metrics; 2: Scaling by time
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Metric for load-based scaling.
                     */
                    std::vector<LoadAutoScaleStrategy> m_loadAutoScaleStrategies;
                    bool m_loadAutoScaleStrategiesHasBeenSet;

                    /**
                     * Rule for time-based scaling
                     */
                    std::vector<TimeAutoScaleStrategy> m_timeAutoScaleStrategies;
                    bool m_timeAutoScaleStrategiesHasBeenSet;

                    /**
                     * Scaling group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTOSCALESTRATEGYREQUEST_H_
