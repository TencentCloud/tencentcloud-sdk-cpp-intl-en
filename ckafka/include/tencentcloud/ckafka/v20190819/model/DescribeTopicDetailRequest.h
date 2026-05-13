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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Filter.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeTopicDetail request structure.
                */
                class DescribeTopicDetailRequest : public AbstractModel
                {
                public:
                    DescribeTopicDetailRequest();
                    ~DescribeTopicDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * @return InstanceId <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * @param _instanceId <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>(Filtering Conditions) Filter by topicName. Fuzzy query is supported.</p>
                     * @return SearchWord <p>(Filtering Conditions) Filter by topicName. Fuzzy query is supported.</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>(Filtering Conditions) Filter by topicName. Fuzzy query is supported.</p>
                     * @param _searchWord <p>(Filtering Conditions) Filter by topicName. Fuzzy query is supported.</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>Offset, which is 0 by default</p>
                     * @return Offset <p>Offset, which is 0 by default</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset, which is 0 by default</p>
                     * @param _offset <p>Offset, which is 0 by default</p>
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
                     * 获取<p>Number of returned results. Default value: 20. Value must be above 0.</p>
                     * @return Limit <p>Number of returned results. Default value: 20. Value must be above 0.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned results. Default value: 20. Value must be above 0.</p>
                     * @param _limit <p>Number of returned results. Default value: 20. Value must be above 0.</p>
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
                     * 获取<p>Acl preset policy name</p>
                     * @return AclRuleName <p>Acl preset policy name</p>
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置<p>Acl preset policy name</p>
                     * @param _aclRuleName <p>Acl preset policy name</p>
                     * 
                     */
                    void SetAclRuleName(const std::string& _aclRuleName);

                    /**
                     * 判断参数 AclRuleName 是否已赋值
                     * @return AclRuleName 是否已赋值
                     * 
                     */
                    bool AclRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Sort by specific attributes (Currently supports PartitionNum/CreateTime). Default value is CreateTime.</p><p>If empty, default to reverse sort by CreateTime.</p>
                     * @return OrderBy <p>Sort by specific attributes (Currently supports PartitionNum/CreateTime). Default value is CreateTime.</p><p>If empty, default to reverse sort by CreateTime.</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>Sort by specific attributes (Currently supports PartitionNum/CreateTime). Default value is CreateTime.</p><p>If empty, default to reverse sort by CreateTime.</p>
                     * @param _orderBy <p>Sort by specific attributes (Currently supports PartitionNum/CreateTime). Default value is CreateTime.</p><p>If empty, default to reverse sort by CreateTime.</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>0-sequential, 1-reverse, default value is 0.</p>
                     * @return OrderType <p>0-sequential, 1-reverse, default value is 0.</p>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置<p>0-sequential, 1-reverse, default value is 0.</p>
                     * @param _orderType <p>0-sequential, 1-reverse, default value is 0.</p>
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>Currently supports filtering by ReplicaNum (number of replicas)</p>
                     * @return Filters <p>Currently supports filtering by ReplicaNum (number of replicas)</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Currently supports filtering by ReplicaNum (number of replicas)</p>
                     * @param _filters <p>Currently supports filtering by ReplicaNum (number of replicas)</p>
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
                     * <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>(Filtering Conditions) Filter by topicName. Fuzzy query is supported.</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>Offset, which is 0 by default</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned results. Default value: 20. Value must be above 0.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Acl preset policy name</p>
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * <p>Sort by specific attributes (Currently supports PartitionNum/CreateTime). Default value is CreateTime.</p><p>If empty, default to reverse sort by CreateTime.</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>0-sequential, 1-reverse, default value is 0.</p>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>Currently supports filtering by ReplicaNum (number of replicas)</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_
