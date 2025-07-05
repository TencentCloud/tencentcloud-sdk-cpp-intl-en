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
                     * 获取(Filter) filter by instance ID
                     * @return InstanceId (Filter) filter by instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置(Filter) filter by instance ID
                     * @param _instanceId (Filter) filter by instance ID
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
                     * 获取Filter by instance name, instance ID, AZ, VPC ID, or subnet ID. Fuzzy query is supported.
                     * @return SearchWord Filter by instance name, instance ID, AZ, VPC ID, or subnet ID. Fuzzy query is supported.
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Filter by instance name, instance ID, AZ, VPC ID, or subnet ID. Fuzzy query is supported.
                     * @param _searchWord Filter by instance name, instance ID, AZ, VPC ID, or subnet ID. Fuzzy query is supported.
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
                     * 获取(Filter) instance status. 0: creating, 1: running, 2: deleting. If this parameter is left empty, all instances will be returned by default
                     * @return Status (Filter) instance status. 0: creating, 1: running, 2: deleting. If this parameter is left empty, all instances will be returned by default
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置(Filter) instance status. 0: creating, 1: running, 2: deleting. If this parameter is left empty, all instances will be returned by default
                     * @param _status (Filter) instance status. 0: creating, 1: running, 2: deleting. If this parameter is left empty, all instances will be returned by default
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
                     * 获取Offset. If this parameter is left empty, `0` will be used by default.
                     * @return Offset Offset. If this parameter is left empty, `0` will be used by default.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. If this parameter is left empty, `0` will be used by default.
                     * @param _offset Offset. If this parameter is left empty, `0` will be used by default.
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
                     * 获取Number of returned results. If this parameter is left empty, `10` will be used by default. The maximum value is `20`.
                     * @return Limit Number of returned results. If this parameter is left empty, `10` will be used by default. The maximum value is `20`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. If this parameter is left empty, `10` will be used by default. The maximum value is `20`.
                     * @param _limit Number of returned results. If this parameter is left empty, `10` will be used by default. The maximum value is `20`.
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
                     * 获取Tag key match.
                     * @return TagKey Tag key match.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key match.
                     * @param _tagKey Tag key match.
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
                     * 获取Filter. Valid values of `filter.Name` include `Ip`, `VpcId`, `SubNetId`, `InstanceType`, and `InstanceId`. Up to 10 values can be passed for `filter.Values`.
                     * @return Filters Filter. Valid values of `filter.Name` include `Ip`, `VpcId`, `SubNetId`, `InstanceType`, and `InstanceId`. Up to 10 values can be passed for `filter.Values`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Valid values of `filter.Name` include `Ip`, `VpcId`, `SubNetId`, `InstanceType`, and `InstanceId`. Up to 10 values can be passed for `filter.Values`.
                     * @param _filters Filter. Valid values of `filter.Name` include `Ip`, `VpcId`, `SubNetId`, `InstanceType`, and `InstanceId`. Up to 10 values can be passed for `filter.Values`.
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
                     * 获取This parameter has been deprecated and replaced with `InstanceIdList`.
                     * @return InstanceIds This parameter has been deprecated and replaced with `InstanceIdList`.
                     * 
                     */
                    std::string GetInstanceIds() const;

                    /**
                     * 设置This parameter has been deprecated and replaced with `InstanceIdList`.
                     * @param _instanceIds This parameter has been deprecated and replaced with `InstanceIdList`.
                     * 
                     */
                    void SetInstanceIds(const std::string& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Filter by instance ID.
                     * @return InstanceIdList Filter by instance ID.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置Filter by instance ID.
                     * @param _instanceIdList Filter by instance ID.
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
                     * 获取Filter instances by a set of tags
                     * @return TagList Filter instances by a set of tags
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置Filter instances by a set of tags
                     * @param _tagList Filter instances by a set of tags
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
                     * (Filter) filter by instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Filter by instance name, instance ID, AZ, VPC ID, or subnet ID. Fuzzy query is supported.
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * (Filter) instance status. 0: creating, 1: running, 2: deleting. If this parameter is left empty, all instances will be returned by default
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Offset. If this parameter is left empty, `0` will be used by default.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. If this parameter is left empty, `10` will be used by default. The maximum value is `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Tag key match.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Filter. Valid values of `filter.Name` include `Ip`, `VpcId`, `SubNetId`, `InstanceType`, and `InstanceId`. Up to 10 values can be passed for `filter.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * This parameter has been deprecated and replaced with `InstanceIdList`.
                     */
                    std::string m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Filter by instance ID.
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * Filter instances by a set of tags
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESDETAILREQUEST_H_
