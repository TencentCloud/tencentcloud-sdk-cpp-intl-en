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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeJustInTimeTranscodeTemplates request structure.
                */
                class DescribeJustInTimeTranscodeTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeJustInTimeTranscodeTemplatesRequest();
                    ~DescribeJustInTimeTranscodeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the site ID.
                     * @return ZoneId Specifies the site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Specifies the site ID.
                     * @param _zoneId Specifies the site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The maximum number of Filters is 20. the upper limit for Filters.Values is 20. if this parameter is left empty, it returns the authorized just-in-time transcoding templates in the current ZoneId by default. detailed filter criteria: <li>template-name: filter by template name in batch. example: mytemplate;</li> <li>template-type: filter by template type in batch. example: preset or custom.</li> <li>template-id: filter by template id in batch. example: C1LZ7982VgTpYhJ7M.</li> empty by default.
                     * @return Filters The maximum number of Filters is 20. the upper limit for Filters.Values is 20. if this parameter is left empty, it returns the authorized just-in-time transcoding templates in the current ZoneId by default. detailed filter criteria: <li>template-name: filter by template name in batch. example: mytemplate;</li> <li>template-type: filter by template type in batch. example: preset or custom.</li> <li>template-id: filter by template id in batch. example: C1LZ7982VgTpYhJ7M.</li> empty by default.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置The maximum number of Filters is 20. the upper limit for Filters.Values is 20. if this parameter is left empty, it returns the authorized just-in-time transcoding templates in the current ZoneId by default. detailed filter criteria: <li>template-name: filter by template name in batch. example: mytemplate;</li> <li>template-type: filter by template type in batch. example: preset or custom.</li> <li>template-id: filter by template id in batch. example: C1LZ7982VgTpYhJ7M.</li> empty by default.
                     * @param _filters The maximum number of Filters is 20. the upper limit for Filters.Values is 20. if this parameter is left empty, it returns the authorized just-in-time transcoding templates in the current ZoneId by default. detailed filter criteria: <li>template-name: filter by template name in batch. example: mytemplate;</li> <li>template-type: filter by template type in batch. example: preset or custom.</li> <li>template-id: filter by template id in batch. example: C1LZ7982VgTpYhJ7M.</li> empty by default.
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
                     * 获取Sorting field. valid values: <li>createTime: template creation time.</li> default value: createTime.
                     * @return SortBy Sorting field. valid values: <li>createTime: template creation time.</li> default value: createTime.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting field. valid values: <li>createTime: template creation time.</li> default value: createTime.
                     * @param _sortBy Sorting field. valid values: <li>createTime: template creation time.</li> default value: createTime.
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Sorting method. valid values: <li>`asc`: ascending order;</li><li>`desc`: descending order.</li> default value: `desc`.
                     * @return SortOrder Sorting method. valid values: <li>`asc`: ascending order;</li><li>`desc`: descending order.</li> default value: `desc`.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sorting method. valid values: <li>`asc`: ascending order;</li><li>`desc`: descending order.</li> default value: `desc`.
                     * @param _sortOrder Sorting method. valid values: <li>`asc`: ascending order;</li><li>`desc`: descending order.</li> default value: `desc`.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paging offset. Default value: 0.
                     * @param _offset Paging offset. Default value: 0.
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
                     * 获取Number of returned entries. default value: 20. maximum value: 1000.
                     * @return Limit Number of returned entries. default value: 20. maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. default value: 20. maximum value: 1000.
                     * @param _limit Number of returned entries. default value: 20. maximum value: 1000.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Specifies the site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The maximum number of Filters is 20. the upper limit for Filters.Values is 20. if this parameter is left empty, it returns the authorized just-in-time transcoding templates in the current ZoneId by default. detailed filter criteria: <li>template-name: filter by template name in batch. example: mytemplate;</li> <li>template-type: filter by template type in batch. example: preset or custom.</li> <li>template-id: filter by template id in batch. example: C1LZ7982VgTpYhJ7M.</li> empty by default.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field. valid values: <li>createTime: template creation time.</li> default value: createTime.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Sorting method. valid values: <li>`asc`: ascending order;</li><li>`desc`: descending order.</li> default value: `desc`.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. default value: 20. maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_
