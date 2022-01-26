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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchLog request structure.
                */
                class SearchLogRequest : public AbstractModel
                {
                public:
                    SearchLogRequest();
                    ~SearchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID to be queried
                     * @return TopicId Log topic ID to be queried
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID to be queried
                     * @param TopicId Log topic ID to be queried
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @return From Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @param From Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @return To End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @param To End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Query statement. Maximum length: 4096
                     * @return Query Query statement. Maximum length: 4096
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement. Maximum length: 4096
                     * @param Query Query statement. Maximum length: 4096
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Number of raw logs returned in a single query. Maximum value: 100. If the query statement (Query) contains an SQL query, you need to specify the number of SQL query results in `Query`. For more information, please visit https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1
                     * @return Limit Number of raw logs returned in a single query. Maximum value: 100. If the query statement (Query) contains an SQL query, you need to specify the number of SQL query results in `Query`. For more information, please visit https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of raw logs returned in a single query. Maximum value: 100. If the query statement (Query) contains an SQL query, you need to specify the number of SQL query results in `Query`. For more information, please visit https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1
                     * @param Limit Number of raw logs returned in a single query. Maximum value: 100. If the query statement (Query) contains an SQL query, you need to specify the number of SQL query results in `Query`. For more information, please visit https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取This parameter is used to load more logs. Pass through the last `Context` value returned to get more log content. Up to 10,000 raw logs can be obtained in total. This parameter expires in 1 hour.
                     * @return Context This parameter is used to load more logs. Pass through the last `Context` value returned to get more log content. Up to 10,000 raw logs can be obtained in total. This parameter expires in 1 hour.
                     */
                    std::string GetContext() const;

                    /**
                     * 设置This parameter is used to load more logs. Pass through the last `Context` value returned to get more log content. Up to 10,000 raw logs can be obtained in total. This parameter expires in 1 hour.
                     * @param Context This parameter is used to load more logs. Pass through the last `Context` value returned to get more log content. Up to 10,000 raw logs can be obtained in total. This parameter expires in 1 hour.
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Order of the logs sorted by time returned by the log API. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     * @return Sort Order of the logs sorted by time returned by the log API. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Order of the logs sorted by time returned by the log API. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     * @param Sort Order of the logs sorted by time returned by the log API. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取If the value is `true`, the new search method will be used, and the response parameters `AnalysisRecords` and `Columns` will be valid. If the value is `false`, the old search method will be used, and `AnalysisResults` and `ColNames` will be valid.
                     * @return UseNewAnalysis If the value is `true`, the new search method will be used, and the response parameters `AnalysisRecords` and `Columns` will be valid. If the value is `false`, the old search method will be used, and `AnalysisResults` and `ColNames` will be valid.
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置If the value is `true`, the new search method will be used, and the response parameters `AnalysisRecords` and `Columns` will be valid. If the value is `false`, the old search method will be used, and `AnalysisResults` and `ColNames` will be valid.
                     * @param UseNewAnalysis If the value is `true`, the new search method will be used, and the response parameters `AnalysisRecords` and `Columns` will be valid. If the value is `false`, the old search method will be used, and `AnalysisResults` and `ColNames` will be valid.
                     */
                    void SetUseNewAnalysis(const bool& _useNewAnalysis);

                    /**
                     * 判断参数 UseNewAnalysis 是否已赋值
                     * @return UseNewAnalysis 是否已赋值
                     */
                    bool UseNewAnalysisHasBeenSet() const;

                private:

                    /**
                     * Log topic ID to be queried
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Query statement. Maximum length: 4096
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Number of raw logs returned in a single query. Maximum value: 100. If the query statement (Query) contains an SQL query, you need to specify the number of SQL query results in `Query`. For more information, please visit https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * This parameter is used to load more logs. Pass through the last `Context` value returned to get more log content. Up to 10,000 raw logs can be obtained in total. This parameter expires in 1 hour.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Order of the logs sorted by time returned by the log API. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * If the value is `true`, the new search method will be used, and the response parameters `AnalysisRecords` and `Columns` will be valid. If the value is `false`, the old search method will be used, and `AnalysisResults` and `ColNames` will be valid.
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHLOGREQUEST_H_
