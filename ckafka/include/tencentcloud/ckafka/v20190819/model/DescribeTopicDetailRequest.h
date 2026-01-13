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
                     * 获取The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * @return InstanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * @param _instanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
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
                     * 获取(Filter) filter by `topicName`. Fuzzy search is supported
                     * @return SearchWord (Filter) filter by `topicName`. Fuzzy search is supported
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置(Filter) filter by `topicName`. Fuzzy search is supported
                     * @param _searchWord (Filter) filter by `topicName`. Fuzzy search is supported
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
                     * 获取Offset. If this parameter is left empty, 0 will be used by default
                     * @return Offset Offset. If this parameter is left empty, 0 will be used by default
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. If this parameter is left empty, 0 will be used by default
                     * @param _offset Offset. If this parameter is left empty, 0 will be used by default
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
                     * 获取Number of returned results. default: 20. value must be above 0.
                     * @return Limit Number of returned results. default: 20. value must be above 0.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. default: 20. value must be above 0.
                     * @param _limit Number of returned results. default: 20. value must be above 0.
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
                     * 获取Name of the preset ACL rule.
                     * @return AclRuleName Name of the preset ACL rule.
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置Name of the preset ACL rule.
                     * @param _aclRuleName Name of the preset ACL rule.
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
                     * 获取Sorts based on specific attributes (currently supports PartitionNum/CreateTime). default value: CreateTime.
                     * @return OrderBy Sorts based on specific attributes (currently supports PartitionNum/CreateTime). default value: CreateTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorts based on specific attributes (currently supports PartitionNum/CreateTime). default value: CreateTime.
                     * @param _orderBy Sorts based on specific attributes (currently supports PartitionNum/CreateTime). default value: CreateTime.
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
                     * 获取0 - sequential, 1 - reverse order. default value: 0.
                     * @return OrderType 0 - sequential, 1 - reverse order. default value: 0.
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置0 - sequential, 1 - reverse order. default value: 0.
                     * @param _orderType 0 - sequential, 1 - reverse order. default value: 0.
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
                     * 获取Currently supports ReplicaNum (number of replicas) filter criteria.
                     * @return Filters Currently supports ReplicaNum (number of replicas) filter criteria.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Currently supports ReplicaNum (number of replicas) filter criteria.
                     * @param _filters Currently supports ReplicaNum (number of replicas) filter criteria.
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
                     * The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * (Filter) filter by `topicName`. Fuzzy search is supported
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Offset. If this parameter is left empty, 0 will be used by default
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. default: 20. value must be above 0.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Name of the preset ACL rule.
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * Sorts based on specific attributes (currently supports PartitionNum/CreateTime). default value: CreateTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 0 - sequential, 1 - reverse order. default value: 0.
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Currently supports ReplicaNum (number of replicas) filter criteria.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICDETAILREQUEST_H_
