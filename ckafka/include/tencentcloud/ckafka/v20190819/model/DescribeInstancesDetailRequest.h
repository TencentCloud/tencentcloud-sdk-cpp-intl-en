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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESDETAILREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Filter.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeInstancesDetail request structure.
                */
                class DescribeInstancesDetailRequest : public AbstractModel
                {
                public:
                    DescribeInstancesDetailRequest();
                    ~DescribeInstancesDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>(Filtering Conditions) Filter by instance ID</p>
                     * @return InstanceId <p>(Filtering Conditions) Filter by instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>(Filtering Conditions) Filter by instance ID</p>
                     * @param _instanceId <p>(Filtering Conditions) Filter by instance ID</p>
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
                     * 获取<p>(Filtering Conditions) Filter by instance name, instance Id, availability zone, VPC Id, or subnet Id. Fuzzy query is supported.</p>
                     * @return SearchWord <p>(Filtering Conditions) Filter by instance name, instance Id, availability zone, VPC Id, or subnet Id. Fuzzy query is supported.</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>(Filtering Conditions) Filter by instance name, instance Id, availability zone, VPC Id, or subnet Id. Fuzzy query is supported.</p>
                     * @param _searchWord <p>(Filtering Conditions) Filter by instance name, instance Id, availability zone, VPC Id, or subnet Id. Fuzzy query is supported.</p>
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
                     * 获取<p>(Filtering Conditions) Instance status. Return all by default if left blank.</p><p>Enumeration values:</p><ul><li>-1: Creation failed</li><li>0:Creating</li><li>1:Running</li><li>2:Deleting</li><li>3:Deleted</li><li>4:Deletion failure</li><li>5:Isolated</li><li>7:Upgrading</li></ul>
                     * @return Status <p>(Filtering Conditions) Instance status. Return all by default if left blank.</p><p>Enumeration values:</p><ul><li>-1: Creation failed</li><li>0:Creating</li><li>1:Running</li><li>2:Deleting</li><li>3:Deleted</li><li>4:Deletion failure</li><li>5:Isolated</li><li>7:Upgrading</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>(Filtering Conditions) Instance status. Return all by default if left blank.</p><p>Enumeration values:</p><ul><li>-1: Creation failed</li><li>0:Creating</li><li>1:Running</li><li>2:Deleting</li><li>3:Deleted</li><li>4:Deletion failure</li><li>5:Isolated</li><li>7:Upgrading</li></ul>
                     * @param _status <p>(Filtering Conditions) Instance status. Return all by default if left blank.</p><p>Enumeration values:</p><ul><li>-1: Creation failed</li><li>0:Creating</li><li>1:Running</li><li>2:Deleting</li><li>3:Deleted</li><li>4:Deletion failure</li><li>5:Isolated</li><li>7:Upgrading</li></ul>
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Offset, which is 0 by default.</p>
                     * @return Offset <p>Offset, which is 0 by default.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset, which is 0 by default.</p>
                     * @param _offset <p>Offset, which is 0 by default.</p>
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
                     * 获取<p>Number of returned results. Default value: 10. Maximum value: 20.</p>
                     * @return Limit <p>Number of returned results. Default value: 10. Maximum value: 20.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned results. Default value: 10. Maximum value: 20.</p>
                     * @param _limit <p>Number of returned results. Default value: 10. Maximum value: 20.</p>
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
                     * 获取<p>Match the tag key.</p>
                     * @return TagKey <p>Match the tag key.</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>Match the tag key.</p>
                     * @param _tagKey <p>Match the tag key.</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>Filter. filter.Name supports ('Ip', 'VpcId', 'SubNetId', 'InstanceType', 'InstanceId'). filter.Values can transmit up to 10 values.</p>
                     * @return Filters <p>Filter. filter.Name supports ('Ip', 'VpcId', 'SubNetId', 'InstanceType', 'InstanceId'). filter.Values can transmit up to 10 values.</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter. filter.Name supports ('Ip', 'VpcId', 'SubNetId', 'InstanceType', 'InstanceId'). filter.Values can transmit up to 10 values.</p>
                     * @param _filters <p>Filter. filter.Name supports ('Ip', 'VpcId', 'SubNetId', 'InstanceType', 'InstanceId'). filter.Values can transmit up to 10 values.</p>
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
                     * 获取<p>Deprecated. Use InstanceIdList.</p>
                     * @return InstanceIds <p>Deprecated. Use InstanceIdList.</p>
                     * @deprecated
                     */
                    std::string GetInstanceIds() const;

                    /**
                     * 设置<p>Deprecated. Use InstanceIdList.</p>
                     * @param _instanceIds <p>Deprecated. Use InstanceIdList.</p>
                     * @deprecated
                     */
                    void SetInstanceIds(const std::string& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Filter by instance ID</p>
                     * @return InstanceIdList <p>Filter by instance ID</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置<p>Filter by instance ID</p>
                     * @param _instanceIdList <p>Filter by instance ID</p>
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取<p>Filter instances based on tag list (take the intersection)</p>
                     * @return TagList <p>Filter instances based on tag list (take the intersection)</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>Filter instances based on tag list (take the intersection)</p>
                     * @param _tagList <p>Filter instances based on tag list (take the intersection)</p>
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * <p>(Filtering Conditions) Filter by instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>(Filtering Conditions) Filter by instance name, instance Id, availability zone, VPC Id, or subnet Id. Fuzzy query is supported.</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>(Filtering Conditions) Instance status. Return all by default if left blank.</p><p>Enumeration values:</p><ul><li>-1: Creation failed</li><li>0:Creating</li><li>1:Running</li><li>2:Deleting</li><li>3:Deleted</li><li>4:Deletion failure</li><li>5:Isolated</li><li>7:Upgrading</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Offset, which is 0 by default.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned results. Default value: 10. Maximum value: 20.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Match the tag key.</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>Filter. filter.Name supports ('Ip', 'VpcId', 'SubNetId', 'InstanceType', 'InstanceId'). filter.Values can transmit up to 10 values.</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Deprecated. Use InstanceIdList.</p>
                     */
                    std::string m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Filter by instance ID</p>
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * <p>Filter instances based on tag list (take the intersection)</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESDETAILREQUEST_H_
