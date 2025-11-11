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
                     * 获取(Query condition) filter by the ckafka cluster instance Id.
                     * @return InstanceId (Query condition) filter by the ckafka cluster instance Id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置(Query condition) filter by the ckafka cluster instance Id.
                     * @param _instanceId (Query condition) filter by the ckafka cluster instance Id.
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
                     * 获取Search term. example: (query condition) filter by instance name. fuzzy query is supported.
                     * @return SearchWord Search term. example: (query condition) filter by instance name. fuzzy query is supported.
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Search term. example: (query condition) filter by instance name. fuzzy query is supported.
                     * @param _searchWord Search term. example: (query condition) filter by instance name. fuzzy query is supported.
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
                     * 获取Instance status (query condition). valid values: 0: creating, 1: running, 2: deleting, 5: isolated, 7: upgrading. default return: all.
                     * @return Status Instance status (query condition). valid values: 0: creating, 1: running, 2: deleting, 5: isolated, 7: upgrading. default return: all.
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Instance status (query condition). valid values: 0: creating, 1: running, 2: deleting, 5: isolated, 7: upgrading. default return: all.
                     * @param _status Instance status (query condition). valid values: 0: creating, 1: running, 2: deleting, 5: isolated, 7: upgrading. default return: all.
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
                     * @deprecated
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key value (this field has been deprecated).
                     * @param _tagKey Tag key value (this field has been deprecated).
                     * @deprecated
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * @deprecated
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取(Query condition) VPC Id.
                     * @return VpcId (Query condition) VPC Id.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置(Query condition) VPC Id.
                     * @param _vpcId (Query condition) VPC Id.
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
                     * (Query condition) filter by the ckafka cluster instance Id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Search term. example: (query condition) filter by instance name. fuzzy query is supported.
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Instance status (query condition). valid values: 0: creating, 1: running, 2: deleting, 5: isolated, 7: upgrading. default return: all.
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
                     * (Query condition) VPC Id.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEINSTANCESREQUEST_H_
