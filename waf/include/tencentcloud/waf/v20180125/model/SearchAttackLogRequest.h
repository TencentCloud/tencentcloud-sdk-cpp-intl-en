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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SearchAttackLog request structure.
                */
                class SearchAttackLogRequest : public AbstractModel
                {
                public:
                    SearchAttackLogRequest();
                    ~SearchAttackLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queried domain: use all for all domains
                     * @return Domain Queried domain: use all for all domains
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Queried domain: use all for all domains
                     * @param _domain Queried domain: use all for all domains
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Query start time
                     * @return StartTime Query start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time
                     * @param _startTime Query start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time
                     * @return EndTime Query end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time
                     * @param _endTime Query end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取API upgrade. Input an empty string for this field. Use the Page field for page turning.
                     * @return Context API upgrade. Input an empty string for this field. Use the Page field for page turning.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置API upgrade. Input an empty string for this field. Use the Page field for page turning.
                     * @param _context API upgrade. Input an empty string for this field. Use the Page field for page turning.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Lucene syntax.
                     * @return QueryString Lucene syntax.
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置Lucene syntax.
                     * @param _queryString Lucene syntax.
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Number of queries: 10 by default, up to 100
                     * @return Count Number of queries: 10 by default, up to 100
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of queries: 10 by default, up to 100
                     * @param _count Number of queries: 10 by default, up to 100
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取desc by default. Value can be set to desc or asc.
                     * @return Sort desc by default. Value can be set to desc or asc.
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置desc by default. Value can be set to desc or asc.
                     * @param _sort desc by default. Value can be set to desc or asc.
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
                     * 获取Page number, starting from 0
                     * @return Page Page number, starting from 0
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number, starting from 0
                     * @param _page Page number, starting from 0
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * Queried domain: use all for all domains
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Query start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * API upgrade. Input an empty string for this field. Use the Page field for page turning.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Lucene syntax.
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Number of queries: 10 by default, up to 100
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * desc by default. Value can be set to desc or asc.
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Page number, starting from 0
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGREQUEST_H_
