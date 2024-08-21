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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeJobs request structure.
                */
                class DescribeJobsRequest : public AbstractModel
                {
                public:
                    DescribeJobsRequest();
                    ~DescribeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query keywords
                     * @return Keyword Query keywords
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Query keywords
                     * @param _keyword Query keywords
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Matching mode
                     * @return Pattern Matching mode
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Matching mode
                     * @param _pattern Matching mode
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取Pagination parameters
                     * @return Limit Pagination parameters
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters
                     * @param _limit Pagination parameters
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
                     * 获取Pagination parameters
                     * @return Offset Pagination parameters
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameters
                     * @param _offset Pagination parameters
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
                     * 获取Sorting fields
                     * @return Sort Sorting fields
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting fields
                     * @param _sort Sorting fields
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Sorting fields, and true means the ascending order (by default) while false means the descending order.
                     * @return Asc Sorting fields, and true means the ascending order (by default) while false means the descending order.
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置Sorting fields, and true means the ascending order (by default) while false means the descending order.
                     * @param _asc Sorting fields, and true means the ascending order (by default) while false means the descending order.
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * Query keywords
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Matching mode
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Pagination parameters
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameters
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting fields
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Sorting fields, and true means the ascending order (by default) while false means the descending order.
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBSREQUEST_H_
