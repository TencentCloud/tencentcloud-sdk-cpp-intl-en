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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEJAVAMEMSHELLPLUGINLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEJAVAMEMSHELLPLUGINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeJavaMemShellPluginList request structure.
                */
                class DescribeJavaMemShellPluginListRequest : public AbstractModel
                {
                public:
                    DescribeJavaMemShellPluginListRequest();
                    ~DescribeJavaMemShellPluginListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter Criteria: Keywords: Fuzzy query of IP or host name, JavaShellStatus, exact match of Exception
                     * @return Filters Filter Criteria: Keywords: Fuzzy query of IP or host name, JavaShellStatus, exact match of Exception
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter Criteria: Keywords: Fuzzy query of IP or host name, JavaShellStatus, exact match of Exception
                     * @param _filters Filter Criteria: Keywords: Fuzzy query of IP or host name, JavaShellStatus, exact match of Exception
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset, which defaults to 0
                     * @return Offset Offset, which defaults to 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which defaults to 0
                     * @param _offset Offset, which defaults to 0
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
                     * 获取Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * @return Limit Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * @param _limit Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Filter Criteria: Keywords: Fuzzy query of IP or host name, JavaShellStatus, exact match of Exception
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset, which defaults to 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEJAVAMEMSHELLPLUGINLISTREQUEST_H_
