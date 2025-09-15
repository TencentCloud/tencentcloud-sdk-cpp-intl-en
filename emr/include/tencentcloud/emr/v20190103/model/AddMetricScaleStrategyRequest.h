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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ADDMETRICSCALESTRATEGYREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ADDMETRICSCALESTRATEGYREQUEST_H_

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
                * AddMetricScaleStrategy request structure.
                */
                class AddMetricScaleStrategyRequest : public AbstractModel
                {
                public:
                    AddMetricScaleStrategyRequest();
                    ~AddMetricScaleStrategyRequest() = default;
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
                     * 获取1 indicates scaling by load rules. 2 indicates scaling by time rules. This parameter is required and should match the following rule policy.
                     * @return StrategyType 1 indicates scaling by load rules. 2 indicates scaling by time rules. This parameter is required and should match the following rule policy.
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置1 indicates scaling by load rules. 2 indicates scaling by time rules. This parameter is required and should match the following rule policy.
                     * @param _strategyType 1 indicates scaling by load rules. 2 indicates scaling by time rules. This parameter is required and should match the following rule policy.
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
                     * 获取Load-based scale-out rules.
                     * @return LoadAutoScaleStrategy Load-based scale-out rules.
                     * 
                     */
                    LoadAutoScaleStrategy GetLoadAutoScaleStrategy() const;

                    /**
                     * 设置Load-based scale-out rules.
                     * @param _loadAutoScaleStrategy Load-based scale-out rules.
                     * 
                     */
                    void SetLoadAutoScaleStrategy(const LoadAutoScaleStrategy& _loadAutoScaleStrategy);

                    /**
                     * 判断参数 LoadAutoScaleStrategy 是否已赋值
                     * @return LoadAutoScaleStrategy 是否已赋值
                     * 
                     */
                    bool LoadAutoScaleStrategyHasBeenSet() const;

                    /**
                     * 获取Rule for time-based scaling
                     * @return TimeAutoScaleStrategy Rule for time-based scaling
                     * 
                     */
                    TimeAutoScaleStrategy GetTimeAutoScaleStrategy() const;

                    /**
                     * 设置Rule for time-based scaling
                     * @param _timeAutoScaleStrategy Rule for time-based scaling
                     * 
                     */
                    void SetTimeAutoScaleStrategy(const TimeAutoScaleStrategy& _timeAutoScaleStrategy);

                    /**
                     * 判断参数 TimeAutoScaleStrategy 是否已赋值
                     * @return TimeAutoScaleStrategy 是否已赋值
                     * 
                     */
                    bool TimeAutoScaleStrategyHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 1 indicates scaling by load rules. 2 indicates scaling by time rules. This parameter is required and should match the following rule policy.
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Load-based scale-out rules.
                     */
                    LoadAutoScaleStrategy m_loadAutoScaleStrategy;
                    bool m_loadAutoScaleStrategyHasBeenSet;

                    /**
                     * Rule for time-based scaling
                     */
                    TimeAutoScaleStrategy m_timeAutoScaleStrategy;
                    bool m_timeAutoScaleStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ADDMETRICSCALESTRATEGYREQUEST_H_
