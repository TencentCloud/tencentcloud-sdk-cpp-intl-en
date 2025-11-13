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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeTasks request structure.
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filters task status. available values:.
-WAITING.
-PROCESSING (processing).
-FINISH (completed).
                     * @return Status Filters task status. available values:.
-WAITING.
-PROCESSING (processing).
-FINISH (completed).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Filters task status. available values:.
-WAITING.
-PROCESSING (processing).
-FINISH (completed).
                     * @param _status Filters task status. available values:.
-WAITING.
-PROCESSING (processing).
-FINISH (completed).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether there is a failed subtask when the task ends. If this parameter is left unspecified, ignore it.
<li>false: filter the main tasks to identify those that have no failed subtasks.</li>
<li>true: filter the main tasks to identify those that have failed subtasks.</li>
                     * @return SubTaskHasFailed Whether there is a failed subtask when the task ends. If this parameter is left unspecified, ignore it.
<li>false: filter the main tasks to identify those that have no failed subtasks.</li>
<li>true: filter the main tasks to identify those that have failed subtasks.</li>
                     * 
                     */
                    bool GetSubTaskHasFailed() const;

                    /**
                     * 设置Whether there is a failed subtask when the task ends. If this parameter is left unspecified, ignore it.
<li>false: filter the main tasks to identify those that have no failed subtasks.</li>
<li>true: filter the main tasks to identify those that have failed subtasks.</li>
                     * @param _subTaskHasFailed Whether there is a failed subtask when the task ends. If this parameter is left unspecified, ignore it.
<li>false: filter the main tasks to identify those that have no failed subtasks.</li>
<li>true: filter the main tasks to identify those that have failed subtasks.</li>
                     * 
                     */
                    void SetSubTaskHasFailed(const bool& _subTaskHasFailed);

                    /**
                     * 判断参数 SubTaskHasFailed 是否已赋值
                     * @return SubTaskHasFailed 是否已赋值
                     * 
                     */
                    bool SubTaskHasFailedHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.
                     * @return ScrollToken Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.
                     * @param _scrollToken Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取Query task start time.
                     * @return StartTime Query task start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query task start time.
                     * @param _startTime Query task start time.
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
                     * 获取Query task end time.
                     * @return EndTime Query task end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query task end time.
                     * @param _endTime Query task end time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Filters task status. available values:.
-WAITING.
-PROCESSING (processing).
-FINISH (completed).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether there is a failed subtask when the task ends. If this parameter is left unspecified, ignore it.
<li>false: filter the main tasks to identify those that have no failed subtasks.</li>
<li>true: filter the main tasks to identify those that have failed subtasks.</li>
                     */
                    bool m_subTaskHasFailed;
                    bool m_subTaskHasFailedHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * Query task start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query task end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSREQUEST_H_
