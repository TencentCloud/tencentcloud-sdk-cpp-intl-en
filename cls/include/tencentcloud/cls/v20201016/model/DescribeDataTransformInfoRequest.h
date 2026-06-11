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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDATATRANSFORMINFOREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDATATRANSFORMINFOREQUEST_H_

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
                * DescribeDataTransformInfo request structure.
                */
                class DescribeDataTransformInfoRequest : public AbstractModel
                {
                public:
                    DescribeDataTransformInfoRequest();
                    ~DescribeDataTransformInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取- taskName
Filter by [processing task name].
Type: String
Required: No
Example: test-task

- taskId
Filter by [processing task id].
Type: String
Required: No
Example: a3622556-6402-4942-b4ff-5ae32ec29810
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.

- topicId
Filter by [source topicId].
Type: String
Required: No
Example: 756cec3e-a0a5-44c3-85a8-090870582000
Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

- status
Filter by [Task running status]. 1: Preparing, 2: Running, 3: Stopping, 4: Stopped.
Type: String
Required: No
Example: 1

- hasServiceLog
Filter by [whether service logs are enabled]. 1: not enabled, 2: on.
Type: String
Required: No
Example: 1

- dstTopicType
Filter by [Target topic Type]. 1: Fixed, 2: Dynamic.
Type: String
Required: No
Example: 1

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @return Filters - taskName
Filter by [processing task name].
Type: String
Required: No
Example: test-task

- taskId
Filter by [processing task id].
Type: String
Required: No
Example: a3622556-6402-4942-b4ff-5ae32ec29810
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.

- topicId
Filter by [source topicId].
Type: String
Required: No
Example: 756cec3e-a0a5-44c3-85a8-090870582000
Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

- status
Filter by [Task running status]. 1: Preparing, 2: Running, 3: Stopping, 4: Stopped.
Type: String
Required: No
Example: 1

- hasServiceLog
Filter by [whether service logs are enabled]. 1: not enabled, 2: on.
Type: String
Required: No
Example: 1

- dstTopicType
Filter by [Target topic Type]. 1: Fixed, 2: Dynamic.
Type: String
Required: No
Example: 1

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置- taskName
Filter by [processing task name].
Type: String
Required: No
Example: test-task

- taskId
Filter by [processing task id].
Type: String
Required: No
Example: a3622556-6402-4942-b4ff-5ae32ec29810
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.

- topicId
Filter by [source topicId].
Type: String
Required: No
Example: 756cec3e-a0a5-44c3-85a8-090870582000
Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

- status
Filter by [Task running status]. 1: Preparing, 2: Running, 3: Stopping, 4: Stopped.
Type: String
Required: No
Example: 1

- hasServiceLog
Filter by [whether service logs are enabled]. 1: not enabled, 2: on.
Type: String
Required: No
Example: 1

- dstTopicType
Filter by [Target topic Type]. 1: Fixed, 2: Dynamic.
Type: String
Required: No
Example: 1

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @param _filters - taskName
Filter by [processing task name].
Type: String
Required: No
Example: test-task

- taskId
Filter by [processing task id].
Type: String
Required: No
Example: a3622556-6402-4942-b4ff-5ae32ec29810
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.

- topicId
Filter by [source topicId].
Type: String
Required: No
Example: 756cec3e-a0a5-44c3-85a8-090870582000
Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

- status
Filter by [Task running status]. 1: Preparing, 2: Running, 3: Stopping, 4: Stopped.
Type: String
Required: No
Example: 1

- hasServiceLog
Filter by [whether service logs are enabled]. 1: not enabled, 2: on.
Type: String
Required: No
Example: 1

- dstTopicType
Filter by [Target topic Type]. 1: Fixed, 2: Dynamic.
Type: String
Required: No
Example: 1

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The pagination offset. Default value: 0.
                     * @return Offset The pagination offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The pagination offset. Default value: 0.
                     * @param _offset The pagination offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

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
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @param _limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Task type. Valid values: 1: Get the details of a single task. 2 (default): Get the task list.
                     * @return Type Task type. Valid values: 1: Get the details of a single task. 2 (default): Get the task list.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Task type. Valid values: 1: Get the details of a single task. 2 (default): Get the task list.
                     * @param _type Task type. Valid values: 1: Get the details of a single task. 2 (default): Get the task list.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取When Type is 1, this parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     * @return TaskId When Type is 1, this parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置When Type is 1, this parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     * @param _taskId When Type is 1, this parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * - taskName
Filter by [processing task name].
Type: String
Required: No
Example: test-task

- taskId
Filter by [processing task id].
Type: String
Required: No
Example: a3622556-6402-4942-b4ff-5ae32ec29810
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.

- topicId
Filter by [source topicId].
Type: String
Required: No
Example: 756cec3e-a0a5-44c3-85a8-090870582000
Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

- status
Filter by [Task running status]. 1: Preparing, 2: Running, 3: Stopping, 4: Stopped.
Type: String
Required: No
Example: 1

- hasServiceLog
Filter by [whether service logs are enabled]. 1: not enabled, 2: on.
Type: String
Required: No
Example: 1

- dstTopicType
Filter by [Target topic Type]. 1: Fixed, 2: Dynamic.
Type: String
Required: No
Example: 1

Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The pagination offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Task type. Valid values: 1: Get the details of a single task. 2 (default): Get the task list.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * When Type is 1, this parameter is required.
Data processing task ID - Search the data processing task list basic information (https://www.tencentcloud.com/document/product/614/72182?from_cn_redirect=1) to get the data processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDATATRANSFORMINFOREQUEST_H_
