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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESCHEDULEDSQLINFOREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESCHEDULEDSQLINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeScheduledSqlInfo request structure.
                */
                class DescribeScheduledSqlInfoRequest : public AbstractModel
                {
                public:
                    DescribeScheduledSqlInfoRequest();
                    ~DescribeScheduledSqlInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page offset. Default value: 0
                     * @return Offset Page offset. Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0
                     * @param _offset Page offset. Default value: 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @return Limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @param _limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
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
                     * 获取Task name.
                     * @return Name Task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name.
                     * @param _name Task name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取<li>srcTopicName: Filter by Source Log Topic Name, fuzzy match. Type: String. Required: No</li><li>dstTopicName: Filter by Destination Log Topic Name, fuzzy match. Type: String. Required: No</li><li>srcTopicId: Filter by Source Log Topic ID. Type: String. Required: No</li><li>dstTopicId: Filter by Destination Log Topic ID. Type: String. Required: No</li><li>bizType: Filter by Topic Type, 0: log topic; 1: metric topic. Type: String. Required: No</li><li>status: Filter by Task Status, 1: running; 2: stopped. Type: String. Required: No</li><li>taskName: Filter by Task Name, fuzzy match. Type: String. Required: No</li><li>taskId: Filter by Task ID, fuzzy match. Type: String. Required: No</li>
                     * @return Filters <li>srcTopicName: Filter by Source Log Topic Name, fuzzy match. Type: String. Required: No</li><li>dstTopicName: Filter by Destination Log Topic Name, fuzzy match. Type: String. Required: No</li><li>srcTopicId: Filter by Source Log Topic ID. Type: String. Required: No</li><li>dstTopicId: Filter by Destination Log Topic ID. Type: String. Required: No</li><li>bizType: Filter by Topic Type, 0: log topic; 1: metric topic. Type: String. Required: No</li><li>status: Filter by Task Status, 1: running; 2: stopped. Type: String. Required: No</li><li>taskName: Filter by Task Name, fuzzy match. Type: String. Required: No</li><li>taskId: Filter by Task ID, fuzzy match. Type: String. Required: No</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>srcTopicName: Filter by Source Log Topic Name, fuzzy match. Type: String. Required: No</li><li>dstTopicName: Filter by Destination Log Topic Name, fuzzy match. Type: String. Required: No</li><li>srcTopicId: Filter by Source Log Topic ID. Type: String. Required: No</li><li>dstTopicId: Filter by Destination Log Topic ID. Type: String. Required: No</li><li>bizType: Filter by Topic Type, 0: log topic; 1: metric topic. Type: String. Required: No</li><li>status: Filter by Task Status, 1: running; 2: stopped. Type: String. Required: No</li><li>taskName: Filter by Task Name, fuzzy match. Type: String. Required: No</li><li>taskId: Filter by Task ID, fuzzy match. Type: String. Required: No</li>
                     * @param _filters <li>srcTopicName: Filter by Source Log Topic Name, fuzzy match. Type: String. Required: No</li><li>dstTopicName: Filter by Destination Log Topic Name, fuzzy match. Type: String. Required: No</li><li>srcTopicId: Filter by Source Log Topic ID. Type: String. Required: No</li><li>dstTopicId: Filter by Destination Log Topic ID. Type: String. Required: No</li><li>bizType: Filter by Topic Type, 0: log topic; 1: metric topic. Type: String. Required: No</li><li>status: Filter by Task Status, 1: running; 2: stopped. Type: String. Required: No</li><li>taskName: Filter by Task Name, fuzzy match. Type: String. Required: No</li><li>taskId: Filter by Task ID, fuzzy match. Type: String. Required: No</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Page offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <li>srcTopicName: Filter by Source Log Topic Name, fuzzy match. Type: String. Required: No</li><li>dstTopicName: Filter by Destination Log Topic Name, fuzzy match. Type: String. Required: No</li><li>srcTopicId: Filter by Source Log Topic ID. Type: String. Required: No</li><li>dstTopicId: Filter by Destination Log Topic ID. Type: String. Required: No</li><li>bizType: Filter by Topic Type, 0: log topic; 1: metric topic. Type: String. Required: No</li><li>status: Filter by Task Status, 1: running; 2: stopped. Type: String. Required: No</li><li>taskName: Filter by Task Name, fuzzy match. Type: String. Required: No</li><li>taskId: Filter by Task ID, fuzzy match. Type: String. Required: No</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESCHEDULEDSQLINFOREQUEST_H_
