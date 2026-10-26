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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTSUBTASKSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTSUBTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListSubTasks request structure.
                */
                class ListSubTasksRequest : public AbstractModel
                {
                public:
                    ListSubTasksRequest();
                    ~ListSubTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Complex task ID
                     * @return TaskId Complex task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Complex task ID
                     * @param _taskId Complex task ID
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
                     * 获取Page number, which is 1 by default.
                     * @return PageNumber Page number, which is 1 by default.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number, which is 1 by default.
                     * @param _pageNumber Page number, which is 1 by default.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of items per page. Default: 10.
                     * @return PageSize Number of items per page. Default: 10.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. Default: 10.
                     * @param _pageSize Number of items per page. Default: 10.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Default: no filtering on this field. Otherwise, filter by task status. Status code: 1-NEW, 2-RUNNING, 3-COMPLETED, 4-FAILED.
                     * @return Status Default: no filtering on this field. Otherwise, filter by task status. Status code: 1-NEW, 2-RUNNING, 3-COMPLETED, 4-FAILED.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Default: no filtering on this field. Otherwise, filter by task status. Status code: 1-NEW, 2-RUNNING, 3-COMPLETED, 4-FAILED.
                     * @param _status Default: no filtering on this field. Otherwise, filter by task status. Status code: 1-NEW, 2-RUNNING, 3-COMPLETED, 4-FAILED.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Complex task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Page number, which is 1 by default.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page. Default: 10.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Default: no filtering on this field. Otherwise, filter by task status. Status code: 1-NEW, 2-RUNNING, 3-COMPLETED, 4-FAILED.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTSUBTASKSREQUEST_H_
