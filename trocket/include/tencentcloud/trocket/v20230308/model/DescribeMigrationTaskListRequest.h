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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATIONTASKLISTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATIONTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Filter.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMigrationTaskList request structure.
                */
                class DescribeMigrationTaskListRequest : public AbstractModel
                {
                public:
                    DescribeMigrationTaskListRequest();
                    ~DescribeMigrationTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query criteria list
                     * @return Filters Query criteria list
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Query criteria list
                     * @param _filters Query criteria list
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
                     * 获取Query start position
                     * @return Offset Query start position
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Query start position
                     * @param _offset Query start position
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
                     * 获取Query result limit count
                     * @return Limit Query result limit count
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Query result limit count
                     * @param _limit Query result limit count
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
                     * Query criteria list
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query start position
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Query result limit count
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATIONTASKLISTREQUEST_H_
