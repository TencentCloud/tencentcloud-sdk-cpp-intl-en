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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeMigrationTasks request structure.
                */
                class DescribeMigrationTasksRequest : public AbstractModel
                {
                public:
                    DescribeMigrationTasksRequest();
                    ~DescribeMigrationTasksRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<br><li> taskId Filters by [migration task id]. type: String required: no<br></li><br><li> taskName does fuzzy search filtering by [migration task name]. type: String required: no the maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100.</li>.
                     * @return Filters <br><li> taskId Filters by [migration task id]. type: String required: no<br></li><br><li> taskName does fuzzy search filtering by [migration task name]. type: String required: no the maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100.</li>.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<br><li> taskId Filters by [migration task id]. type: String required: no<br></li><br><li> taskName does fuzzy search filtering by [migration task name]. type: String required: no the maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100.</li>.
                     * @param _filters <br><li> taskId Filters by [migration task id]. type: String required: no<br></li><br><li> taskName does fuzzy search filtering by [migration task name]. type: String required: no the maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100.</li>.
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
                     * <br><li> taskId Filters by [migration task id]. type: String required: no<br></li><br><li> taskName does fuzzy search filtering by [migration task name]. type: String required: no the maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100.</li>.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSREQUEST_H_
