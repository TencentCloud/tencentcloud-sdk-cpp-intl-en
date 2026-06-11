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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBETOPICSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBETOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeTopics request structure.
                */
                class DescribeTopicsRequest : public AbstractModel
                {
                public:
                    DescribeTopicsRequest();
                    ~DescribeTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<ul><li>Filter topicName by [topic name]. The default is fuzzy matching. You can set the PreciseSearch parameter to exact match. Type: String. Required: No</li>
<li>logsetName filters by [logset name], defaults to fuzzy matching, and can be set to exact match using the PreciseSearch parameter. Type: String. Required: No</li>
<li>topicId filters by [topic ID]. Type: String. Required: No</li>
<li>logsetId filters by [logset ID]. You can call the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">DescribeLogsets</a> API to query the list of created logsets or log in to the console to view. You can also call the <a href="https://www.tencentcloud.com/document/product/614/58626?from_cn_redirect=1">CreateLogset</a> API to create logset. Type: String. Required: No</li>
<li>tagKey Filter by [tag key]. Type: String. Required: No</li>
<li>tag:tagKey - filter by [tag key-value pair]. Replace tagKey with a specific tag key, such as tag:exampleKey. Type: String. Required: no</li>
<li>storageType filters by [storage type of the topic]. Value range: hot (standard storage), cold (infrequent storage). Type: String. Required: No</li></ul>
Note: Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @return Filters <ul><li>Filter topicName by [topic name]. The default is fuzzy matching. You can set the PreciseSearch parameter to exact match. Type: String. Required: No</li>
<li>logsetName filters by [logset name], defaults to fuzzy matching, and can be set to exact match using the PreciseSearch parameter. Type: String. Required: No</li>
<li>topicId filters by [topic ID]. Type: String. Required: No</li>
<li>logsetId filters by [logset ID]. You can call the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">DescribeLogsets</a> API to query the list of created logsets or log in to the console to view. You can also call the <a href="https://www.tencentcloud.com/document/product/614/58626?from_cn_redirect=1">CreateLogset</a> API to create logset. Type: String. Required: No</li>
<li>tagKey Filter by [tag key]. Type: String. Required: No</li>
<li>tag:tagKey - filter by [tag key-value pair]. Replace tagKey with a specific tag key, such as tag:exampleKey. Type: String. Required: no</li>
<li>storageType filters by [storage type of the topic]. Value range: hot (standard storage), cold (infrequent storage). Type: String. Required: No</li></ul>
Note: Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<ul><li>Filter topicName by [topic name]. The default is fuzzy matching. You can set the PreciseSearch parameter to exact match. Type: String. Required: No</li>
<li>logsetName filters by [logset name], defaults to fuzzy matching, and can be set to exact match using the PreciseSearch parameter. Type: String. Required: No</li>
<li>topicId filters by [topic ID]. Type: String. Required: No</li>
<li>logsetId filters by [logset ID]. You can call the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">DescribeLogsets</a> API to query the list of created logsets or log in to the console to view. You can also call the <a href="https://www.tencentcloud.com/document/product/614/58626?from_cn_redirect=1">CreateLogset</a> API to create logset. Type: String. Required: No</li>
<li>tagKey Filter by [tag key]. Type: String. Required: No</li>
<li>tag:tagKey - filter by [tag key-value pair]. Replace tagKey with a specific tag key, such as tag:exampleKey. Type: String. Required: no</li>
<li>storageType filters by [storage type of the topic]. Value range: hot (standard storage), cold (infrequent storage). Type: String. Required: No</li></ul>
Note: Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @param _filters <ul><li>Filter topicName by [topic name]. The default is fuzzy matching. You can set the PreciseSearch parameter to exact match. Type: String. Required: No</li>
<li>logsetName filters by [logset name], defaults to fuzzy matching, and can be set to exact match using the PreciseSearch parameter. Type: String. Required: No</li>
<li>topicId filters by [topic ID]. Type: String. Required: No</li>
<li>logsetId filters by [logset ID]. You can call the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">DescribeLogsets</a> API to query the list of created logsets or log in to the console to view. You can also call the <a href="https://www.tencentcloud.com/document/product/614/58626?from_cn_redirect=1">CreateLogset</a> API to create logset. Type: String. Required: No</li>
<li>tagKey Filter by [tag key]. Type: String. Required: No</li>
<li>tag:tagKey - filter by [tag key-value pair]. Replace tagKey with a specific tag key, such as tag:exampleKey. Type: String. Required: no</li>
<li>storageType filters by [storage type of the topic]. Value range: hot (standard storage), cold (infrequent storage). Type: String. Required: No</li></ul>
Note: Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
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
                     * 获取Page offset. Default value: 0.
                     * @return Offset Page offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0.
                     * @param _offset Page offset. Default value: 0.
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
                     * 获取Control whether the related fields in Filters are exact matches.
<ul><li>0: Default value. topicName and logsetName use fuzzy matching</li>
<li>1: topicName   Exact match</li>
<li>2: Exact match by logsetName</li>
<li>3: Exact match by both topicName and logsetName</li></ul>
                     * @return PreciseSearch Control whether the related fields in Filters are exact matches.
<ul><li>0: Default value. topicName and logsetName use fuzzy matching</li>
<li>1: topicName   Exact match</li>
<li>2: Exact match by logsetName</li>
<li>3: Exact match by both topicName and logsetName</li></ul>
                     * 
                     */
                    uint64_t GetPreciseSearch() const;

                    /**
                     * 设置Control whether the related fields in Filters are exact matches.
<ul><li>0: Default value. topicName and logsetName use fuzzy matching</li>
<li>1: topicName   Exact match</li>
<li>2: Exact match by logsetName</li>
<li>3: Exact match by both topicName and logsetName</li></ul>
                     * @param _preciseSearch Control whether the related fields in Filters are exact matches.
<ul><li>0: Default value. topicName and logsetName use fuzzy matching</li>
<li>1: topicName   Exact match</li>
<li>2: Exact match by logsetName</li>
<li>3: Exact match by both topicName and logsetName</li></ul>
                     * 
                     */
                    void SetPreciseSearch(const uint64_t& _preciseSearch);

                    /**
                     * 判断参数 PreciseSearch 是否已赋值
                     * @return PreciseSearch 是否已赋值
                     * 
                     */
                    bool PreciseSearchHasBeenSet() const;

                    /**
                     * 获取Topic type
-0: Log topic, default value
-Metric topic
                     * @return BizType Topic type
-0: Log topic, default value
-Metric topic
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置Topic type
-0: Log topic, default value
-Metric topic
                     * @param _bizType Topic type
-0: Log topic, default value
-Metric topic
                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                private:

                    /**
                     * <ul><li>Filter topicName by [topic name]. The default is fuzzy matching. You can set the PreciseSearch parameter to exact match. Type: String. Required: No</li>
<li>logsetName filters by [logset name], defaults to fuzzy matching, and can be set to exact match using the PreciseSearch parameter. Type: String. Required: No</li>
<li>topicId filters by [topic ID]. Type: String. Required: No</li>
<li>logsetId filters by [logset ID]. You can call the <a href="https://www.tencentcloud.com/document/product/614/58624?from_cn_redirect=1">DescribeLogsets</a> API to query the list of created logsets or log in to the console to view. You can also call the <a href="https://www.tencentcloud.com/document/product/614/58626?from_cn_redirect=1">CreateLogset</a> API to create logset. Type: String. Required: No</li>
<li>tagKey Filter by [tag key]. Type: String. Required: No</li>
<li>tag:tagKey - filter by [tag key-value pair]. Replace tagKey with a specific tag key, such as tag:exampleKey. Type: String. Required: no</li>
<li>storageType filters by [storage type of the topic]. Value range: hot (standard storage), cold (infrequent storage). Type: String. Required: No</li></ul>
Note: Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Page offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Control whether the related fields in Filters are exact matches.
<ul><li>0: Default value. topicName and logsetName use fuzzy matching</li>
<li>1: topicName   Exact match</li>
<li>2: Exact match by logsetName</li>
<li>3: Exact match by both topicName and logsetName</li></ul>
                     */
                    uint64_t m_preciseSearch;
                    bool m_preciseSearchHasBeenSet;

                    /**
                     * Topic type
-0: Log topic, default value
-Metric topic
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBETOPICSREQUEST_H_
