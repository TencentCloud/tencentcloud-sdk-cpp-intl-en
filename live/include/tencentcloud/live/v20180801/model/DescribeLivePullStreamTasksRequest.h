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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePullStreamTasks request structure.
                */
                class DescribeLivePullStreamTasksRequest : public AbstractModel
                {
                public:
                    DescribeLivePullStreamTasksRequest();
                    ~DescribeLivePullStreamTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The task ID. 
A task ID is returned by the `CreateLivePullStreamTask` API.
If you do not pass this parameter, all tasks will be returned, sorted by last updated time in descending order.
                     * @return TaskId The task ID. 
A task ID is returned by the `CreateLivePullStreamTask` API.
If you do not pass this parameter, all tasks will be returned, sorted by last updated time in descending order.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID. 
A task ID is returned by the `CreateLivePullStreamTask` API.
If you do not pass this parameter, all tasks will be returned, sorted by last updated time in descending order.
                     * @param _taskId The task ID. 
A task ID is returned by the `CreateLivePullStreamTask` API.
If you do not pass this parameter, all tasks will be returned, sorted by last updated time in descending order.
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
                     * 获取The number of page to start from. Default value: 1.
                     * @return PageNum The number of page to start from. Default value: 1.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置The number of page to start from. Default value: 1.
                     * @param _pageNum The number of page to start from. Default value: 1.
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取The maximum number of records per page. Default value: 10.
Valid values: Any integer between 1 and 20.
                     * @return PageSize The maximum number of records per page. Default value: 10.
Valid values: Any integer between 1 and 20.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置The maximum number of records per page. Default value: 10.
Valid values: Any integer between 1 and 20.
                     * @param _pageSize The maximum number of records per page. Default value: 10.
Valid values: Any integer between 1 and 20.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * The task ID. 
A task ID is returned by the `CreateLivePullStreamTask` API.
If you do not pass this parameter, all tasks will be returned, sorted by last updated time in descending order.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The number of page to start from. Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * The maximum number of records per page. Default value: 10.
Valid values: Any integer between 1 and 20.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSREQUEST_H_
