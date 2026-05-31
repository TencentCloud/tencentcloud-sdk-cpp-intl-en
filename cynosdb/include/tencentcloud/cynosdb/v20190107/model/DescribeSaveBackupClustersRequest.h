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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESAVEBACKUPCLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESAVEBACKUPCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/QuerySimpleFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeSaveBackupClusters request structure.
                */
                class DescribeSaveBackupClustersRequest : public AbstractModel
                {
                public:
                    DescribeSaveBackupClustersRequest();
                    ~DescribeSaveBackupClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Entries Per Page
                     * @return Limit Entries Per Page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Entries Per Page
                     * @param _limit Entries Per Page
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
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取Retrieval criteria.
                     * @return Filters Retrieval criteria.
                     * 
                     */
                    std::vector<QuerySimpleFilter> GetFilters() const;

                    /**
                     * 设置Retrieval criteria.
                     * @param _filters Retrieval criteria.
                     * 
                     */
                    void SetFilters(const std::vector<QuerySimpleFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Entries Per Page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Retrieval criteria.
                     */
                    std::vector<QuerySimpleFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESAVEBACKUPCLUSTERSREQUEST_H_
