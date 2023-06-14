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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONTASKSREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeInvocationTasks request structure.
                */
                class DescribeInvocationTasksRequest : public AbstractModel
                {
                public:
                    DescribeInvocationTasksRequest();
                    ~DescribeInvocationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of execution task IDs. Up to 100 IDs are allowed for each request. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     * @return InvocationTaskIds List of execution task IDs. Up to 100 IDs are allowed for each request. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetInvocationTaskIds() const;

                    /**
                     * 设置List of execution task IDs. Up to 100 IDs are allowed for each request. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     * @param _invocationTaskIds List of execution task IDs. Up to 100 IDs are allowed for each request. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetInvocationTaskIds(const std::vector<std::string>& _invocationTaskIds);

                    /**
                     * 判断参数 InvocationTaskIds 是否已赋值
                     * @return InvocationTaskIds 是否已赋值
                     * 
                     */
                    bool InvocationTaskIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions.<br> <li> `invocation-id` - String - Required: No - (Filter condition) Filter by the execution activity ID.<br> <li> `invocation-task-id` - String - Required: No - (Filter condition) Filter by the execution task ID.<br> <li> `instance-id` - String - Required: No - (Filter condition) Filter by the instance ID. <br> <li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID. <br>Up to 10 `Filters` are allowed for each request. Each filter can have up to five `Filter.Values`. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     * @return Filters Filter conditions.<br> <li> `invocation-id` - String - Required: No - (Filter condition) Filter by the execution activity ID.<br> <li> `invocation-task-id` - String - Required: No - (Filter condition) Filter by the execution task ID.<br> <li> `instance-id` - String - Required: No - (Filter condition) Filter by the instance ID. <br> <li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID. <br>Up to 10 `Filters` are allowed for each request. Each filter can have up to five `Filter.Values`. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions.<br> <li> `invocation-id` - String - Required: No - (Filter condition) Filter by the execution activity ID.<br> <li> `invocation-task-id` - String - Required: No - (Filter condition) Filter by the execution task ID.<br> <li> `instance-id` - String - Required: No - (Filter condition) Filter by the instance ID. <br> <li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID. <br>Up to 10 `Filters` are allowed for each request. Each filter can have up to five `Filter.Values`. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     * @param _filters Filter conditions.<br> <li> `invocation-id` - String - Required: No - (Filter condition) Filter by the execution activity ID.<br> <li> `invocation-task-id` - String - Required: No - (Filter condition) Filter by the execution task ID.<br> <li> `instance-id` - String - Required: No - (Filter condition) Filter by the instance ID. <br> <li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID. <br>Up to 10 `Filters` are allowed for each request. Each filter can have up to five `Filter.Values`. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
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
                     * 获取Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取Whether to hide the output. Valid values:<br><li>`True` (default): Hide the output <br><li>`False`: Show the output <br>
                     * @return HideOutput Whether to hide the output. Valid values:<br><li>`True` (default): Hide the output <br><li>`False`: Show the output <br>
                     * 
                     */
                    bool GetHideOutput() const;

                    /**
                     * 设置Whether to hide the output. Valid values:<br><li>`True` (default): Hide the output <br><li>`False`: Show the output <br>
                     * @param _hideOutput Whether to hide the output. Valid values:<br><li>`True` (default): Hide the output <br><li>`False`: Show the output <br>
                     * 
                     */
                    void SetHideOutput(const bool& _hideOutput);

                    /**
                     * 判断参数 HideOutput 是否已赋值
                     * @return HideOutput 是否已赋值
                     * 
                     */
                    bool HideOutputHasBeenSet() const;

                private:

                    /**
                     * List of execution task IDs. Up to 100 IDs are allowed for each request. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_invocationTaskIds;
                    bool m_invocationTaskIdsHasBeenSet;

                    /**
                     * Filter conditions.<br> <li> `invocation-id` - String - Required: No - (Filter condition) Filter by the execution activity ID.<br> <li> `invocation-task-id` - String - Required: No - (Filter condition) Filter by the execution task ID.<br> <li> `instance-id` - String - Required: No - (Filter condition) Filter by the instance ID. <br> <li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID. <br>Up to 10 `Filters` are allowed for each request. Each filter can have up to five `Filter.Values`. `InvocationTaskIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned results. It defaults to `20`. The maximum is 100. For more information on `Limit`, see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Whether to hide the output. Valid values:<br><li>`True` (default): Hide the output <br><li>`False`: Show the output <br>
                     */
                    bool m_hideOutput;
                    bool m_hideOutputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONTASKSREQUEST_H_
