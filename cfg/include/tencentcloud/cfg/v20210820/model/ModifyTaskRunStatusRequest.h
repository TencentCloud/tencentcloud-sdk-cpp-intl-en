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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_MODIFYTASKRUNSTATUSREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_MODIFYTASKRUNSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyTaskRunStatus request structure.
                */
                class ModifyTaskRunStatusRequest : public AbstractModel
                {
                public:
                    ModifyTaskRunStatusRequest();
                    ~ModifyTaskRunStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
                     * @return Status Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
                     * @param _status Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether the execution result meets expectations (This field is required when the task status is Execution Ended.)
                     * @return IsExpect Whether the execution result meets expectations (This field is required when the task status is Execution Ended.)
                     * 
                     */
                    bool GetIsExpect() const;

                    /**
                     * 设置Whether the execution result meets expectations (This field is required when the task status is Execution Ended.)
                     * @param _isExpect Whether the execution result meets expectations (This field is required when the task status is Execution Ended.)
                     * 
                     */
                    void SetIsExpect(const bool& _isExpect);

                    /**
                     * 判断参数 IsExpect 是否已赋值
                     * @return IsExpect 是否已赋值
                     * 
                     */
                    bool IsExpectHasBeenSet() const;

                    /**
                     * 获取Experiment result (This field is required when the experiment status changes to Execution Ended.)
                     * @return Summary Experiment result (This field is required when the experiment status changes to Execution Ended.)
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置Experiment result (This field is required when the experiment status changes to Execution Ended.)
                     * @param _summary Experiment result (This field is required when the experiment status changes to Execution Ended.)
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. 1001: not started; 1002: in progress (executing); 1003: in progress (paused); 1004: execution ended.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether the execution result meets expectations (This field is required when the task status is Execution Ended.)
                     */
                    bool m_isExpect;
                    bool m_isExpectHasBeenSet;

                    /**
                     * Experiment result (This field is required when the experiment status changes to Execution Ended.)
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_MODIFYTASKRUNSTATUSREQUEST_H_
