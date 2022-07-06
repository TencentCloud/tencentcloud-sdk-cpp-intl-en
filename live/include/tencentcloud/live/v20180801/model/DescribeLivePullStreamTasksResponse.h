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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/PullStreamTaskInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePullStreamTasks response structure.
                */
                class DescribeLivePullStreamTasksResponse : public AbstractModel
                {
                public:
                    DescribeLivePullStreamTasksResponse();
                    ~DescribeLivePullStreamTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The information of stream pulling tasks.
                     * @return TaskInfos The information of stream pulling tasks.
                     */
                    std::vector<PullStreamTaskInfo> GetTaskInfos() const;

                    /**
                     * 判断参数 TaskInfos 是否已赋值
                     * @return TaskInfos 是否已赋值
                     */
                    bool TaskInfosHasBeenSet() const;

                    /**
                     * 获取The page number.
                     * @return PageNum The page number.
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取The number of records per page.
                     * @return PageSize The number of records per page.
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取The total number of records.
                     * @return TotalNum The total number of records.
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取The total number of pages.
                     * @return TotalPage The total number of pages.
                     */
                    uint64_t GetTotalPage() const;

                    /**
                     * 判断参数 TotalPage 是否已赋值
                     * @return TotalPage 是否已赋值
                     */
                    bool TotalPageHasBeenSet() const;

                    /**
                     * 获取The maximum number of tasks allowed.
                     * @return LimitTaskNum The maximum number of tasks allowed.
                     */
                    uint64_t GetLimitTaskNum() const;

                    /**
                     * 判断参数 LimitTaskNum 是否已赋值
                     * @return LimitTaskNum 是否已赋值
                     */
                    bool LimitTaskNumHasBeenSet() const;

                private:

                    /**
                     * The information of stream pulling tasks.
                     */
                    std::vector<PullStreamTaskInfo> m_taskInfos;
                    bool m_taskInfosHasBeenSet;

                    /**
                     * The page number.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * The number of records per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * The total number of records.
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * The total number of pages.
                     */
                    uint64_t m_totalPage;
                    bool m_totalPageHasBeenSet;

                    /**
                     * The maximum number of tasks allowed.
                     */
                    uint64_t m_limitTaskNum;
                    bool m_limitTaskNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSRESPONSE_H_
