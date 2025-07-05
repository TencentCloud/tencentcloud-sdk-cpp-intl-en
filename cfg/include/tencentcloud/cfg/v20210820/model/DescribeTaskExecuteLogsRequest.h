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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKEXECUTELOGSREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKEXECUTELOGSREQUEST_H_

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
                * DescribeTaskExecuteLogs request structure.
                */
                class DescribeTaskExecuteLogsRequest : public AbstractModel
                {
                public:
                    DescribeTaskExecuteLogsRequest();
                    ~DescribeTaskExecuteLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Number of returned content lines
                     * @return Limit Number of returned content lines
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned content lines
                     * @param _limit Number of returned content lines
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
                     * 获取Log start line
                     * @return Offset Log start line
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Log start line
                     * @param _offset Log start line
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Number of returned content lines
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Log start line
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKEXECUTELOGSREQUEST_H_
