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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTaskTemplates request structure.
                */
                class DescribeTaskTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeTaskTemplatesRequest();
                    ~DescribeTaskTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of task template IDs. It cannot be specified together with `Filters`.
                     * @return TaskTemplateIds List of task template IDs. It cannot be specified together with `Filters`.
                     */
                    std::vector<std::string> GetTaskTemplateIds() const;

                    /**
                     * 设置List of task template IDs. It cannot be specified together with `Filters`.
                     * @param TaskTemplateIds List of task template IDs. It cannot be specified together with `Filters`.
                     */
                    void SetTaskTemplateIds(const std::vector<std::string>& _taskTemplateIds);

                    /**
                     * 判断参数 TaskTemplateIds 是否已赋值
                     * @return TaskTemplateIds 是否已赋值
                     */
                    bool TaskTemplateIdsHasBeenSet() const;

                    /**
                     * 获取Filter
<li> `task-template-name` - String - Optional - Task template name.</li>
<li> `tag-key` - String - Optional - Tag key.</li>
<li> `tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with `TaskTemplateIds`.
                     * @return Filters Filter
<li> `task-template-name` - String - Optional - Task template name.</li>
<li> `tag-key` - String - Optional - Tag key.</li>
<li> `tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with `TaskTemplateIds`.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter
<li> `task-template-name` - String - Optional - Task template name.</li>
<li> `tag-key` - String - Optional - Tag key.</li>
<li> `tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with `TaskTemplateIds`.
                     * @param Filters Filter
<li> `task-template-name` - String - Optional - Task template name.</li>
<li> `tag-key` - String - Optional - Tag key.</li>
<li> `tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with `TaskTemplateIds`.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param Offset Offset
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of returned items
                     * @return Limit Maximum number of returned items
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of returned items
                     * @param Limit Maximum number of returned items
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * List of task template IDs. It cannot be specified together with `Filters`.
                     */
                    std::vector<std::string> m_taskTemplateIds;
                    bool m_taskTemplateIdsHasBeenSet;

                    /**
                     * Filter
<li> `task-template-name` - String - Optional - Task template name.</li>
<li> `tag-key` - String - Optional - Tag key.</li>
<li> `tag-value` - String - Optional - Tag value.</li>
<li> `tag:tag-key` - String - Optional - Tag key-value pair. The tag-key should be replaced by a specified tag key.</li>
It cannot be specified together with `TaskTemplateIds`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of returned items
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKTEMPLATESREQUEST_H_
