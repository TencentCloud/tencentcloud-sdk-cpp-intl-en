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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSCHEDULERINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSCHEDULERINFO_H_

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
                * Rule Group Scheduling Information
                */
                class RuleGroupSchedulerInfo : public AbstractModel
                {
                public:
                    RuleGroupSchedulerInfo();
                    ~RuleGroupSchedulerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取1: Unconfigured 2: Associated with production scheduling 3: Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonitorType 1: Unconfigured 2: Associated with production scheduling 3: Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMonitorType() const;

                    /**
                     * 设置1: Unconfigured 2: Associated with production scheduling 3: Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monitorType 1: Unconfigured 2: Associated with production scheduling 3: Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonitorType(const int64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Start TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime End timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Abbreviation for cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleType Abbreviation for cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置Abbreviation for cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleType Abbreviation for cycle type
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
                     * 获取Cycle step length
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleStep Cycle step length
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置Cycle step length
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleStep Cycle step length
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleDesc Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleDesc() const;

                    /**
                     * 设置Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleDesc Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleDesc(const std::string& _cycleDesc);

                    /**
                     * 判断参数 CycleDesc 是否已赋值
                     * @return CycleDesc 是否已赋值
                     * 
                     */
                    bool CycleDescHasBeenSet() const;

                    /**
                     * 获取Specified time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAction Specified time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置Specified time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskAction Specified time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取Delay time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DelayTime Delay time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置Delay time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _delayTime Delay time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取Task ID registered to the task scheduler under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleTaskId Task ID registered to the task scheduler under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleTaskId() const;

                    /**
                     * 设置Task ID registered to the task scheduler under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleTaskId Task ID registered to the task scheduler under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleTaskId(const std::string& _cycleTaskId);

                    /**
                     * 判断参数 CycleTaskId 是否已赋值
                     * @return CycleTaskId 是否已赋值
                     * 
                     */
                    bool CycleTaskIdHasBeenSet() const;

                    /**
                     * 获取Associated task ID under associated production scheduling
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AssociateTaskIds Associated task ID under associated production scheduling
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAssociateTaskIds() const;

                    /**
                     * 设置Associated task ID under associated production scheduling
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _associateTaskIds Associated task ID under associated production scheduling
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAssociateTaskIds(const std::vector<std::string>& _associateTaskIds);

                    /**
                     * 判断参数 AssociateTaskIds 是否已赋值
                     * @return AssociateTaskIds 是否已赋值
                     * 
                     */
                    bool AssociateTaskIdsHasBeenSet() const;

                private:

                    /**
                     * Rule Group IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 1: Unconfigured 2: Associated with production scheduling 3: Offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Start TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Abbreviation for cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * Cycle step length
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleDesc;
                    bool m_cycleDescHasBeenSet;

                    /**
                     * Specified time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * Delay time under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Task ID registered to the task scheduler under offline cycle detection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleTaskId;
                    bool m_cycleTaskIdHasBeenSet;

                    /**
                     * Associated task ID under associated production scheduling
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_associateTaskIds;
                    bool m_associateTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSCHEDULERINFO_H_
