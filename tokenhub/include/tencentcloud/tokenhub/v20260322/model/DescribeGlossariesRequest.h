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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestFilter.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestSort.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeGlossaries request structure.
                */
                class DescribeGlossariesRequest : public AbstractModel
                {
                public:
                    DescribeGlossariesRequest();
                    ~DescribeGlossariesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returned results. Defaults to 20, maximum value is 100.
                     * @return Limit Number of returned results. Defaults to 20, maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Defaults to 20, maximum value is 100.
                     * @param _limit Number of returned results. Defaults to 20, maximum value is 100.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Filter condition list. Supported filter fields: GlossaryId (Termbase ID), Name, Source (source language code), Target (target language code).
                     * @return Filters Filter condition list. Supported filter fields: GlossaryId (Termbase ID), Name, Source (source language code), Target (target language code).
                     * 
                     */
                    std::vector<RequestFilter> GetFilters() const;

                    /**
                     * 设置Filter condition list. Supported filter fields: GlossaryId (Termbase ID), Name, Source (source language code), Target (target language code).
                     * @param _filters Filter condition list. Supported filter fields: GlossaryId (Termbase ID), Name, Source (source language code), Target (target language code).
                     * 
                     */
                    void SetFilters(const std::vector<RequestFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting condition list. Supported sorting fields: CreatedTime (creation time), UpdatedTime (last update time).
                     * @return Sorts Sorting condition list. Supported sorting fields: CreatedTime (creation time), UpdatedTime (last update time).
                     * 
                     */
                    std::vector<RequestSort> GetSorts() const;

                    /**
                     * 设置Sorting condition list. Supported sorting fields: CreatedTime (creation time), UpdatedTime (last update time).
                     * @param _sorts Sorting condition list. Supported sorting fields: CreatedTime (creation time), UpdatedTime (last update time).
                     * 
                     */
                    void SetSorts(const std::vector<RequestSort>& _sorts);

                    /**
                     * 判断参数 Sorts 是否已赋值
                     * @return Sorts 是否已赋值
                     * 
                     */
                    bool SortsHasBeenSet() const;

                private:

                    /**
                     * Number of returned results. Defaults to 20, maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter condition list. Supported filter fields: GlossaryId (Termbase ID), Name, Source (source language code), Target (target language code).
                     */
                    std::vector<RequestFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting condition list. Supported sorting fields: CreatedTime (creation time), UpdatedTime (last update time).
                     */
                    std::vector<RequestSort> m_sorts;
                    bool m_sortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEGLOSSARIESREQUEST_H_
