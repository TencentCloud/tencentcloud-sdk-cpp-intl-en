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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBECOMMANDSREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBECOMMANDSREQUEST_H_

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
                * DescribeCommands request structure.
                */
                class DescribeCommandsRequest : public AbstractModel
                {
                public:
                    DescribeCommandsRequest();
                    ~DescribeCommandsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of command IDs. Up to 100 IDs are allowed for each request. `CommandIds` and `Filters` cannot be specified at the same time.
                     * @return CommandIds List of command IDs. Up to 100 IDs are allowed for each request. `CommandIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetCommandIds() const;

                    /**
                     * 设置List of command IDs. Up to 100 IDs are allowed for each request. `CommandIds` and `Filters` cannot be specified at the same time.
                     * @param _commandIds List of command IDs. Up to 100 IDs are allowed for each request. `CommandIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetCommandIds(const std::vector<std::string>& _commandIds);

                    /**
                     * 判断参数 CommandIds 是否已赋值
                     * @return CommandIds 是否已赋值
                     * 
                     */
                    bool CommandIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `command-name` - String - Required: No - (Filter condition) Filter by the command name.
<li> `command-type` - String - Required: No - (Filter condition) Filter by the command type. Valid values: `SHELL` or `POWERSHELL`.
<li> `created-by` - String - Required: No - (Filter condition) Filter by the creator. Valid values: `TAT` (public commands) or `USER` (custom commands).
<li> `tag-key` - String - Required: No - (Filter condition) Filter by the tag key.</li>
<li> `tag-value` - String - Required: No - (Filter condition) Filter by the tag value.</li>
<li> `tag:tag-key` - String - Required: No - (Filter) Filter by the tag key-value pair. The tag-key should be replaced with a specified tag key. For detailed usage, see sample 4.</li>

Up to 10 `Filters` are allowed in one request. Each filter can have up to 5 `Filter.Values`. `CommandIds` and `Filters` cannot be specified at the same time.
                     * @return Filters Filter conditions.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `command-name` - String - Required: No - (Filter condition) Filter by the command name.
<li> `command-type` - String - Required: No - (Filter condition) Filter by the command type. Valid values: `SHELL` or `POWERSHELL`.
<li> `created-by` - String - Required: No - (Filter condition) Filter by the creator. Valid values: `TAT` (public commands) or `USER` (custom commands).
<li> `tag-key` - String - Required: No - (Filter condition) Filter by the tag key.</li>
<li> `tag-value` - String - Required: No - (Filter condition) Filter by the tag value.</li>
<li> `tag:tag-key` - String - Required: No - (Filter) Filter by the tag key-value pair. The tag-key should be replaced with a specified tag key. For detailed usage, see sample 4.</li>

Up to 10 `Filters` are allowed in one request. Each filter can have up to 5 `Filter.Values`. `CommandIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `command-name` - String - Required: No - (Filter condition) Filter by the command name.
<li> `command-type` - String - Required: No - (Filter condition) Filter by the command type. Valid values: `SHELL` or `POWERSHELL`.
<li> `created-by` - String - Required: No - (Filter condition) Filter by the creator. Valid values: `TAT` (public commands) or `USER` (custom commands).
<li> `tag-key` - String - Required: No - (Filter condition) Filter by the tag key.</li>
<li> `tag-value` - String - Required: No - (Filter condition) Filter by the tag value.</li>
<li> `tag:tag-key` - String - Required: No - (Filter) Filter by the tag key-value pair. The tag-key should be replaced with a specified tag key. For detailed usage, see sample 4.</li>

Up to 10 `Filters` are allowed in one request. Each filter can have up to 5 `Filter.Values`. `CommandIds` and `Filters` cannot be specified at the same time.
                     * @param _filters Filter conditions.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `command-name` - String - Required: No - (Filter condition) Filter by the command name.
<li> `command-type` - String - Required: No - (Filter condition) Filter by the command type. Valid values: `SHELL` or `POWERSHELL`.
<li> `created-by` - String - Required: No - (Filter condition) Filter by the creator. Valid values: `TAT` (public commands) or `USER` (custom commands).
<li> `tag-key` - String - Required: No - (Filter condition) Filter by the tag key.</li>
<li> `tag-value` - String - Required: No - (Filter condition) Filter by the tag value.</li>
<li> `tag:tag-key` - String - Required: No - (Filter) Filter by the tag key-value pair. The tag-key should be replaced with a specified tag key. For detailed usage, see sample 4.</li>

Up to 10 `Filters` are allowed in one request. Each filter can have up to 5 `Filter.Values`. `CommandIds` and `Filters` cannot be specified at the same time.
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

                private:

                    /**
                     * List of command IDs. Up to 100 IDs are allowed for each request. `CommandIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_commandIds;
                    bool m_commandIdsHasBeenSet;

                    /**
                     * Filter conditions.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `command-name` - String - Required: No - (Filter condition) Filter by the command name.
<li> `command-type` - String - Required: No - (Filter condition) Filter by the command type. Valid values: `SHELL` or `POWERSHELL`.
<li> `created-by` - String - Required: No - (Filter condition) Filter by the creator. Valid values: `TAT` (public commands) or `USER` (custom commands).
<li> `tag-key` - String - Required: No - (Filter condition) Filter by the tag key.</li>
<li> `tag-value` - String - Required: No - (Filter condition) Filter by the tag value.</li>
<li> `tag:tag-key` - String - Required: No - (Filter) Filter by the tag key-value pair. The tag-key should be replaced with a specified tag key. For detailed usage, see sample 4.</li>

Up to 10 `Filters` are allowed in one request. Each filter can have up to 5 `Filter.Values`. `CommandIds` and `Filters` cannot be specified at the same time.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBECOMMANDSREQUEST_H_
