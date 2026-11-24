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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/Filter.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeMCPTokens request structure.
                */
                class DescribeMCPTokensRequest : public AbstractModel
                {
                public:
                    DescribeMCPTokensRequest();
                    ~DescribeMCPTokensRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Offset.</p>
                     * @return Offset <p>Offset.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset.</p>
                     * @param _offset <p>Offset.</p>
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
                     * 获取<p>Number of items per page</p><p>Value range: [0, 200]</p><p>Default value: 20</p><p>If 0 is passed in, the default value is used.</p>
                     * @return Limit <p>Number of items per page</p><p>Value range: [0, 200]</p><p>Default value: 20</p><p>If 0 is passed in, the default value is used.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page</p><p>Value range: [0, 200]</p><p>Default value: 20</p><p>If 0 is passed in, the default value is used.</p>
                     * @param _limit <p>Number of items per page</p><p>Value range: [0, 200]</p><p>Default value: 20</p><p>If 0 is passed in, the default value is used.</p>
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
                     * 获取<p>Filter list</p><p>Only filtering by TokenId and TokenName is supported. The number of Filters cannot exceed 10, the number of Values in each Filter cannot exceed 20, the length of a single Value cannot exceed 64 characters, and duplicate Filter names are not allowed.</p>
                     * @return Filters <p>Filter list</p><p>Only filtering by TokenId and TokenName is supported. The number of Filters cannot exceed 10, the number of Values in each Filter cannot exceed 20, the length of a single Value cannot exceed 64 characters, and duplicate Filter names are not allowed.</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter list</p><p>Only filtering by TokenId and TokenName is supported. The number of Filters cannot exceed 10, the number of Values in each Filter cannot exceed 20, the length of a single Value cannot exceed 64 characters, and duplicate Filter names are not allowed.</p>
                     * @param _filters <p>Filter list</p><p>Only filtering by TokenId and TokenName is supported. The number of Filters cannot exceed 10, the number of Values in each Filter cannot exceed 20, the length of a single Value cannot exceed 64 characters, and duplicate Filter names are not allowed.</p>
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
                     * <p>Offset.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of items per page</p><p>Value range: [0, 200]</p><p>Default value: 20</p><p>If 0 is passed in, the default value is used.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter list</p><p>Only filtering by TokenId and TokenName is supported. The number of Filters cannot exceed 10, the number of Values in each Filter cannot exceed 20, the length of a single Value cannot exceed 64 characters, and duplicate Filter names are not allowed.</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSREQUEST_H_
