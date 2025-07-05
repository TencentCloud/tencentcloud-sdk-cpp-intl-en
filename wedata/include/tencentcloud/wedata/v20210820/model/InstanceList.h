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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Offline operation and maintenance instance list
                */
                class InstanceList : public AbstractModel
                {
                public:
                    InstanceList();
                    ~InstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CostTime Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _costTime Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CurRunDate Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _curRunDate Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleType Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleType Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DoFlag Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDoFlag() const;

                    /**
                     * 设置Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _doFlag Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDoFlag(const int64_t& _doFlag);

                    /**
                     * 判断参数 DoFlag 是否已赋值
                     * @return DoFlag 是否已赋值
                     * 
                     */
                    bool DoFlagHasBeenSet() const;

                    /**
                     * 获取Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InCharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _inCharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取LogNote: This field may return null, indicating that no valid value can be obtained.
                     * @return LastLog LogNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastLog() const;

                    /**
                     * 设置LogNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastLog LogNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastLog(const std::string& _lastLog);

                    /**
                     * 判断参数 LastLog 是否已赋值
                     * @return LastLog 是否已赋值
                     * 
                     */
                    bool LastLogHasBeenSet() const;

                    /**
                     * 获取Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchedulerDesc Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _schedulerDesc Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSchedulerDesc(const std::string& _schedulerDesc);

                    /**
                     * 判断参数 SchedulerDesc 是否已赋值
                     * @return SchedulerDesc 是否已赋值
                     * 
                     */
                    bool SchedulerDescHasBeenSet() const;

                    /**
                     * 获取Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED| COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return State Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED| COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED| COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _state Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED| COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TryLimit Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTryLimit() const;

                    /**
                     * 设置Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tryLimit Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTryLimit(const int64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                private:

                    /**
                     * Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Whether to Supplement
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_doFlag;
                    bool m_doFlagHasBeenSet;

                    /**
                     * Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * LogNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastLog;
                    bool m_lastLogHasBeenSet;

                    /**
                     * Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * Start startup time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Instance status EVENT_LISTENING|DEPENDENCE|BEFORE_ASPECT|ALLOCATED|LAUNCHED|KILL|SNAP_STATE_SAVING|ISSUED|RUNNING|AFTER_ASPECT|PENDING|KILLING|FINAL_STATE_SAVING|FAILED|KILL_FAILED| COMPLETED|EXPIRED|KILL_EXPIRED|DELETED
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIST_H_
