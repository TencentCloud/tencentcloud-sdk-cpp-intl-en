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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_BACKFILLINSTANCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_BACKFILLINSTANCE_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Description of a supplementary instance.
                */
                class BackfillInstance : public AbstractModel
                {
                public:
                    BackfillInstance();
                    ~BackfillInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
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
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Specifies the instance data time.
                     * @return CurRunDate Specifies the instance data time.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Specifies the instance data time.
                     * @param _curRunDate Specifies the instance data time.
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
                     * 获取Execution status.
                     * @return State Execution status.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Execution status.
                     * @param _state Execution status.
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
                     * 获取Start time.


                     * @return StartTime Start time.


                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.


                     * @param _startTime Start time.


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
                     * 获取End time.


                     * @return EndTime End time.


                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.


                     * @param _endTime End time.


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
                     * 获取Execution duration.


                     * @return CostTime Execution duration.


                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置Execution duration.


                     * @param _costTime Execution duration.


                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                private:

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Specifies the instance data time.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Execution status.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Start time.


                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.


                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Execution duration.


                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_BACKFILLINSTANCE_H_
