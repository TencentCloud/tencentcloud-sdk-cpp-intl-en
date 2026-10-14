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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSREQUEST_H_

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
                * DescribeImageTasks request structure.
                */
                class DescribeImageTasksRequest : public AbstractModel
                {
                public:
                    DescribeImageTasksRequest();
                    ~DescribeImageTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task status filter condition.</p>
                     * @return Status <p>Task status filter condition.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status filter condition.</p>
                     * @param _status <p>Task status filter condition.</p>
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
                     * 获取<p>Number of returned records.</p>
                     * @return Limit <p>Number of returned records.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned records.</p>
                     * @param _limit <p>Number of returned records.</p>
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
                     * 获取<p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     * @return ScrollToken <p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置<p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     * @param _scrollToken <p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
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
                     * 获取<p>Task start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @return StartTime <p>Task start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Task start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _startTime <p>Task start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
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
                     * 获取<p>Task end time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @return EndTime <p>Task end time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Task end time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _endTime <p>Task end time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
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
                     * 获取<p>Filter subtask status.</p>
                     * @return SubTaskHasFailed <p>Filter subtask status.</p>
                     * 
                     */
                    bool GetSubTaskHasFailed() const;

                    /**
                     * 设置<p>Filter subtask status.</p>
                     * @param _subTaskHasFailed <p>Filter subtask status.</p>
                     * 
                     */
                    void SetSubTaskHasFailed(const bool& _subTaskHasFailed);

                    /**
                     * 判断参数 SubTaskHasFailed 是否已赋值
                     * @return SubTaskHasFailed 是否已赋值
                     * 
                     */
                    bool SubTaskHasFailedHasBeenSet() const;

                private:

                    /**
                     * <p>Task status filter condition.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Number of returned records.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Scrolling identifier which is used for pulling in batches. If a single request cannot pull all the data entries, the API will return `ScrollToken`, and if the next request carries it, the next pull will start from the next entry.</p>
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * <p>Task start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Task end time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Filter subtask status.</p>
                     */
                    bool m_subTaskHasFailed;
                    bool m_subTaskHasFailedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSREQUEST_H_
