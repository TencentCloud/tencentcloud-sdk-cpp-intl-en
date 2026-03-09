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
                     * 获取Filter conditions.<br>.

-invocation-task-id - String - required: no - (filter condition) filter by executing task id.
- invocation-id - String - required: no - (filter condition) filter by the execution activity id. you can obtain it through the [DescribeInvocations](https://www.tencentcloud.comom/document/api/1340/52679?from_cn_redirect=1) api.
-instance-id - String - required: no - (filtering conditions) filter by instance id. you can get the instance id through the query instance interface of corresponding cloud services. currently supported instance types: CVM, Lighthouse, and managed instances of TAT.
-command-id - String - required: no - (filter criteria) filter by command id. obtain through the api [DescribeCommands (query command details)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1).

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationTaskIds` and `Filters` parameters cannot be specified at the same time.
                     * @return Filters Filter conditions.<br>.

-invocation-task-id - String - required: no - (filter condition) filter by executing task id.
- invocation-id - String - required: no - (filter condition) filter by the execution activity id. you can obtain it through the [DescribeInvocations](https://www.tencentcloud.comom/document/api/1340/52679?from_cn_redirect=1) api.
-instance-id - String - required: no - (filtering conditions) filter by instance id. you can get the instance id through the query instance interface of corresponding cloud services. currently supported instance types: CVM, Lighthouse, and managed instances of TAT.
-command-id - String - required: no - (filter criteria) filter by command id. obtain through the api [DescribeCommands (query command details)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1).

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationTaskIds` and `Filters` parameters cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions.<br>.

-invocation-task-id - String - required: no - (filter condition) filter by executing task id.
- invocation-id - String - required: no - (filter condition) filter by the execution activity id. you can obtain it through the [DescribeInvocations](https://www.tencentcloud.comom/document/api/1340/52679?from_cn_redirect=1) api.
-instance-id - String - required: no - (filtering conditions) filter by instance id. you can get the instance id through the query instance interface of corresponding cloud services. currently supported instance types: CVM, Lighthouse, and managed instances of TAT.
-command-id - String - required: no - (filter criteria) filter by command id. obtain through the api [DescribeCommands (query command details)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1).

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationTaskIds` and `Filters` parameters cannot be specified at the same time.
                     * @param _filters Filter conditions.<br>.

-invocation-task-id - String - required: no - (filter condition) filter by executing task id.
- invocation-id - String - required: no - (filter condition) filter by the execution activity id. you can obtain it through the [DescribeInvocations](https://www.tencentcloud.comom/document/api/1340/52679?from_cn_redirect=1) api.
-instance-id - String - required: no - (filtering conditions) filter by instance id. you can get the instance id through the query instance interface of corresponding cloud services. currently supported instance types: CVM, Lighthouse, and managed instances of TAT.
-command-id - String - required: no - (filter criteria) filter by command id. obtain through the api [DescribeCommands (query command details)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1).

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationTaskIds` and `Filters` parameters cannot be specified at the same time.
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
                     * 获取Whether to hide the command output result. valid values:.

-true: hide output.
- false: do not hide.
 
The default value is true.
                     * @return HideOutput Whether to hide the command output result. valid values:.

-true: hide output.
- false: do not hide.
 
The default value is true.
                     * 
                     */
                    bool GetHideOutput() const;

                    /**
                     * 设置Whether to hide the command output result. valid values:.

-true: hide output.
- false: do not hide.
 
The default value is true.
                     * @param _hideOutput Whether to hide the command output result. valid values:.

-true: hide output.
- false: do not hide.
 
The default value is true.
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
                     * Filter conditions.<br>.

-invocation-task-id - String - required: no - (filter condition) filter by executing task id.
- invocation-id - String - required: no - (filter condition) filter by the execution activity id. you can obtain it through the [DescribeInvocations](https://www.tencentcloud.comom/document/api/1340/52679?from_cn_redirect=1) api.
-instance-id - String - required: no - (filtering conditions) filter by instance id. you can get the instance id through the query instance interface of corresponding cloud services. currently supported instance types: CVM, Lighthouse, and managed instances of TAT.
-command-id - String - required: no - (filter criteria) filter by command id. obtain through the api [DescribeCommands (query command details)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1).

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvocationTaskIds` and `Filters` parameters cannot be specified at the same time.
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
                     * Whether to hide the command output result. valid values:.

-true: hide output.
- false: do not hide.
 
The default value is true.
                     */
                    bool m_hideOutput;
                    bool m_hideOutputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONTASKSREQUEST_H_
