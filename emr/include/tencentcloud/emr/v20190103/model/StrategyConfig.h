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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Arg.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Configuration for restarting services/stopping services/starting services/monitoring data.
                */
                class StrategyConfig : public AbstractModel
                {
                public:
                    StrategyConfig();
                    ~StrategyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0: disables rolling restart.
1: enables rolling start.
                     * @return RollingRestartSwitch 0: disables rolling restart.
1: enables rolling start.
                     * 
                     */
                    int64_t GetRollingRestartSwitch() const;

                    /**
                     * 设置0: disables rolling restart.
1: enables rolling start.
                     * @param _rollingRestartSwitch 0: disables rolling restart.
1: enables rolling start.
                     * 
                     */
                    void SetRollingRestartSwitch(const int64_t& _rollingRestartSwitch);

                    /**
                     * 判断参数 RollingRestartSwitch 是否已赋值
                     * @return RollingRestartSwitch 是否已赋值
                     * 
                     */
                    bool RollingRestartSwitchHasBeenSet() const;

                    /**
                     * 获取Number of instances to restart per batch for rolling restart. Maximum value: 99999.
                     * @return BatchSize Number of instances to restart per batch for rolling restart. Maximum value: 99999.
                     * 
                     */
                    int64_t GetBatchSize() const;

                    /**
                     * 设置Number of instances to restart per batch for rolling restart. Maximum value: 99999.
                     * @param _batchSize Number of instances to restart per batch for rolling restart. Maximum value: 99999.
                     * 
                     */
                    void SetBatchSize(const int64_t& _batchSize);

                    /**
                     * 判断参数 BatchSize 是否已赋值
                     * @return BatchSize 是否已赋值
                     * 
                     */
                    bool BatchSizeHasBeenSet() const;

                    /**
                     * 获取Stop and wait time for rolling restart per batch. Maximum interval: 5 minutes. Unit: seconds.
                     * @return TimeWait Stop and wait time for rolling restart per batch. Maximum interval: 5 minutes. Unit: seconds.
                     * 
                     */
                    int64_t GetTimeWait() const;

                    /**
                     * 设置Stop and wait time for rolling restart per batch. Maximum interval: 5 minutes. Unit: seconds.
                     * @param _timeWait Stop and wait time for rolling restart per batch. Maximum interval: 5 minutes. Unit: seconds.
                     * 
                     */
                    void SetTimeWait(const int64_t& _timeWait);

                    /**
                     * 判断参数 TimeWait 是否已赋值
                     * @return TimeWait 是否已赋值
                     * 
                     */
                    bool TimeWaitHasBeenSet() const;

                    /**
                     * 获取Operation failure processing policy. Valid values: 0 (blocking upon the failure) and 1 (automatically skipping the failure).
                     * @return DealOnFail Operation failure processing policy. Valid values: 0 (blocking upon the failure) and 1 (automatically skipping the failure).
                     * 
                     */
                    int64_t GetDealOnFail() const;

                    /**
                     * 设置Operation failure processing policy. Valid values: 0 (blocking upon the failure) and 1 (automatically skipping the failure).
                     * @param _dealOnFail Operation failure processing policy. Valid values: 0 (blocking upon the failure) and 1 (automatically skipping the failure).
                     * 
                     */
                    void SetDealOnFail(const int64_t& _dealOnFail);

                    /**
                     * 判断参数 DealOnFail 是否已赋值
                     * @return DealOnFail 是否已赋值
                     * 
                     */
                    bool DealOnFailHasBeenSet() const;

                    /**
                     * 获取Parameters required in the instruction.
                     * @return Args Parameters required in the instruction.
                     * 
                     */
                    std::vector<Arg> GetArgs() const;

                    /**
                     * 设置Parameters required in the instruction.
                     * @param _args Parameters required in the instruction.
                     * 
                     */
                    void SetArgs(const std::vector<Arg>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                private:

                    /**
                     * 0: disables rolling restart.
1: enables rolling start.
                     */
                    int64_t m_rollingRestartSwitch;
                    bool m_rollingRestartSwitchHasBeenSet;

                    /**
                     * Number of instances to restart per batch for rolling restart. Maximum value: 99999.
                     */
                    int64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * Stop and wait time for rolling restart per batch. Maximum interval: 5 minutes. Unit: seconds.
                     */
                    int64_t m_timeWait;
                    bool m_timeWaitHasBeenSet;

                    /**
                     * Operation failure processing policy. Valid values: 0 (blocking upon the failure) and 1 (automatically skipping the failure).
                     */
                    int64_t m_dealOnFail;
                    bool m_dealOnFailHasBeenSet;

                    /**
                     * Parameters required in the instruction.
                     */
                    std::vector<Arg> m_args;
                    bool m_argsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_
