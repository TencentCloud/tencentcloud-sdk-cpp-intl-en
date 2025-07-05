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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
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
                     * 获取(Filter) filter by instance name. Fuzzy search is supported
                     * @return SearchWord (Filter) filter by instance name. Fuzzy search is supported
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置(Filter) filter by instance name. Fuzzy search is supported
                     * @param _searchWord (Filter) filter by instance name. Fuzzy search is supported
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
                     * 获取Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 100.
                     * @return Limit Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 100.
                     * @param _limit Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 100.
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
                     * 获取Tag key value (this field has been deprecated).
                     * @return TagKey Tag key value (this field has been deprecated).
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key value (this field has been deprecated).
                     * @param _tagKey Tag key value (this field has been deprecated).
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
                     * 获取VPC ID.
                     * @return VpcId VPC ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID.
                     * @param _vpcId VPC ID.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * (Filter) filter by instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * (Filter) filter by instance name. Fuzzy search is supported
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * (Filter) instance status. 0: creating, 1: running, 2: deleting. If this parameter is left empty, all instances will be returned by default
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Offset. If this parameter is left empty, 0 will be used by default
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Tag key value (this field has been deprecated).
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * VPC ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESREQUEST_H_
