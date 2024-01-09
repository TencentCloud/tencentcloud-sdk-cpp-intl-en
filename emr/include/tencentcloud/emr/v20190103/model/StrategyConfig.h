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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Restart, stop, or start of service/monitoring configurations
                */
                class StrategyConfig : public AbstractModel
                {
                public:
                    StrategyConfig();
                    ~StrategyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`0`: Disable rolling restart
`1`: Enable rolling restart
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RollingRestartSwitch `0`: Disable rolling restart
`1`: Enable rolling restart
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRollingRestartSwitch() const;

                    /**
                     * 设置`0`: Disable rolling restart
`1`: Enable rolling restart
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rollingRestartSwitch `0`: Disable rolling restart
`1`: Enable rolling restart
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The quantity of restarts per batch during a rolling restart, with the maximum number of restarts being 99999
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BatchSize The quantity of restarts per batch during a rolling restart, with the maximum number of restarts being 99999
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBatchSize() const;

                    /**
                     * 设置The quantity of restarts per batch during a rolling restart, with the maximum number of restarts being 99999
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _batchSize The quantity of restarts per batch during a rolling restart, with the maximum number of restarts being 99999
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The wait time (in seconds) per batch in rolling restart, with a maximum value of 5 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeWait The wait time (in seconds) per batch in rolling restart, with a maximum value of 5 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeWait() const;

                    /**
                     * 设置The wait time (in seconds) per batch in rolling restart, with a maximum value of 5 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeWait The wait time (in seconds) per batch in rolling restart, with a maximum value of 5 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The failure handling policy. Valid values: `0` (blocks the process) and `1` (skips).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealOnFail The failure handling policy. Valid values: `0` (blocks the process) and `1` (skips).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDealOnFail() const;

                    /**
                     * 设置The failure handling policy. Valid values: `0` (blocks the process) and `1` (skips).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dealOnFail The failure handling policy. Valid values: `0` (blocks the process) and `1` (skips).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDealOnFail(const int64_t& _dealOnFail);

                    /**
                     * 判断参数 DealOnFail 是否已赋值
                     * @return DealOnFail 是否已赋值
                     * 
                     */
                    bool DealOnFailHasBeenSet() const;

                private:

                    /**
                     * `0`: Disable rolling restart
`1`: Enable rolling restart
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rollingRestartSwitch;
                    bool m_rollingRestartSwitchHasBeenSet;

                    /**
                     * The quantity of restarts per batch during a rolling restart, with the maximum number of restarts being 99999
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * The wait time (in seconds) per batch in rolling restart, with a maximum value of 5 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeWait;
                    bool m_timeWaitHasBeenSet;

                    /**
                     * The failure handling policy. Valid values: `0` (blocks the process) and `1` (skips).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dealOnFail;
                    bool m_dealOnFailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_
