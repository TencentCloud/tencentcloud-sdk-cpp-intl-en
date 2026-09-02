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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3REQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogContextInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCLSLogListV3 request structure.
                */
                class DescribeCLSLogListV3Request : public AbstractModel
                {
                public:
                    DescribeCLSLogListV3Request();
                    ~DescribeCLSLogListV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Start time.</p>
                     * @return From <p>Start time.</p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _from <p>Start time.</p>
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>End time.</p>
                     * @return To <p>End time.</p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>End time.</p>
                     * @param _to <p>End time.</p>
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取<p>Query condition</p>
                     * @return Query <p>Query condition</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>Query condition</p>
                     * @param _query <p>Query condition</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>Grammar.</p>
                     * @return SyntaxRule <p>Grammar.</p>
                     * 
                     */
                    int64_t GetSyntaxRule() const;

                    /**
                     * 设置<p>Grammar.</p>
                     * @param _syntaxRule <p>Grammar.</p>
                     * 
                     */
                    void SetSyntaxRule(const int64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取<p>Topic</p>
                     * @return Topics <p>Topic</p>
                     * 
                     */
                    std::vector<LogContextInfo> GetTopics() const;

                    /**
                     * 设置<p>Topic</p>
                     * @param _topics <p>Topic</p>
                     * 
                     */
                    void SetTopics(const std::vector<LogContextInfo>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Sort</p>
                     * @return Sort <p>Sort</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>Sort</p>
                     * @param _sort <p>Sort</p>
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
                     * 获取<p>limit</p>
                     * @return Limit <p>limit</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>limit</p>
                     * @param _limit <p>limit</p>
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
                     * 获取<p>offset</p>
                     * @return Offset <p>offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>offset</p>
                     * @param _offset <p>offset</p>
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
                     * 获取<p>Sampling</p>
                     * @return SamplingRate <p>Sampling</p>
                     * 
                     */
                    double GetSamplingRate() const;

                    /**
                     * 设置<p>Sampling</p>
                     * @param _samplingRate <p>Sampling</p>
                     * 
                     */
                    void SetSamplingRate(const double& _samplingRate);

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取<p>Highlight or not</p>
                     * @return HighLight <p>Highlight or not</p>
                     * 
                     */
                    bool GetHighLight() const;

                    /**
                     * 设置<p>Highlight or not</p>
                     * @param _highLight <p>Highlight or not</p>
                     * 
                     */
                    void SetHighLight(const bool& _highLight);

                    /**
                     * 判断参数 HighLight 是否已赋值
                     * @return HighLight 是否已赋值
                     * 
                     */
                    bool HighLightHasBeenSet() const;

                    /**
                     * 获取<p>Whether to adopt new analytics</p>
                     * @return UseNewAnalysis <p>Whether to adopt new analytics</p>
                     * 
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置<p>Whether to adopt new analytics</p>
                     * @param _useNewAnalysis <p>Whether to adopt new analytics</p>
                     * 
                     */
                    void SetUseNewAnalysis(const bool& _useNewAnalysis);

                    /**
                     * 判断参数 UseNewAnalysis 是否已赋值
                     * @return UseNewAnalysis 是否已赋值
                     * 
                     */
                    bool UseNewAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>Query optimization</p>
                     * @return QueryOptimize <p>Query optimization</p>
                     * 
                     */
                    int64_t GetQueryOptimize() const;

                    /**
                     * 设置<p>Query optimization</p>
                     * @param _queryOptimize <p>Query optimization</p>
                     * 
                     */
                    void SetQueryOptimize(const int64_t& _queryOptimize);

                    /**
                     * 判断参数 QueryOptimize 是否已赋值
                     * @return QueryOptimize 是否已赋值
                     * 
                     */
                    bool QueryOptimizeHasBeenSet() const;

                    /**
                     * 获取<p>Topic id</p>
                     * @return TopicId <p>Topic id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Topic id</p>
                     * @param _topicId <p>Topic id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>context information</p>
                     * @return Context <p>context information</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>context information</p>
                     * @param _context <p>context information</p>
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
                     * 获取<p>Query type.</p>
                     * @return SubQueryTypes <p>Query type.</p>
                     * 
                     */
                    std::vector<std::string> GetSubQueryTypes() const;

                    /**
                     * 设置<p>Query type.</p>
                     * @param _subQueryTypes <p>Query type.</p>
                     * 
                     */
                    void SetSubQueryTypes(const std::vector<std::string>& _subQueryTypes);

                    /**
                     * 判断参数 SubQueryTypes 是否已赋值
                     * @return SubQueryTypes 是否已赋值
                     * 
                     */
                    bool SubQueryTypesHasBeenSet() const;

                private:

                    /**
                     * <p>Start time.</p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>End time.</p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * <p>Query condition</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>Grammar.</p>
                     */
                    int64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * <p>Topic</p>
                     */
                    std::vector<LogContextInfo> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Sort</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>limit</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sampling</p>
                     */
                    double m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * <p>Highlight or not</p>
                     */
                    bool m_highLight;
                    bool m_highLightHasBeenSet;

                    /**
                     * <p>Whether to adopt new analytics</p>
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                    /**
                     * <p>Query optimization</p>
                     */
                    int64_t m_queryOptimize;
                    bool m_queryOptimizeHasBeenSet;

                    /**
                     * <p>Topic id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>context information</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>Query type.</p>
                     */
                    std::vector<std::string> m_subQueryTypes;
                    bool m_subQueryTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGLISTV3REQUEST_H_
