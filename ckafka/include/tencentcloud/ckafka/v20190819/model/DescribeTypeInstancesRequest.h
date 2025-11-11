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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETYPEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETYPEINSTANCESREQUEST_H_

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
                * DescribeTypeInstances request structure.
                */
                class DescribeTypeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeTypeInstancesRequest();
                    ~DescribeTypeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取(Filter condition) filter by instance ID.
                     * @return InstanceId (Filter condition) filter by instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置(Filter condition) filter by instance ID.
                     * @param _instanceId (Filter condition) filter by instance ID.
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
                     * 获取(Filter condition) filter by instance name. fuzzy query is supported.
                     * @return SearchWord (Filter condition) filter by instance name. fuzzy query is supported.
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置(Filter condition) filter by instance name. fuzzy query is supported.
                     * @param _searchWord (Filter condition) filter by instance name. fuzzy query is supported.
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
                     * 获取Instance status (filter condition). valid values: 0: creating, 1: running, 2: deleting. default return: all.
                     * @return Status Instance status (filter condition). valid values: 0: creating, 1: running, 2: deleting. default return: all.
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Instance status (filter condition). valid values: 0: creating, 1: running, 2: deleting. default return: all.
                     * @param _status Instance status (filter condition). valid values: 0: creating, 1: running, 2: deleting. default return: all.
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
                     * 获取Offset. default value: 0.
                     * @return Offset Offset. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. default value: 0.
                     * @param _offset Offset. default value: 0.
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
                     * 获取Number of returned results. default: 10. maximum value: 100.
                     * @return Limit Number of returned results. default: 10. maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. default: 10. maximum value: 100.
                     * @param _limit Number of returned results. default: 10. maximum value: 100.
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
                     * 获取Matches the Tag key.
                     * @return TagKey Matches the Tag key.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Matches the Tag key.
                     * @param _tagKey Matches the Tag key.
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * (Filter condition) filter by instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * (Filter condition) filter by instance name. fuzzy query is supported.
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Instance status (filter condition). valid values: 0: creating, 1: running, 2: deleting. default return: all.
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Offset. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. default: 10. maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Matches the Tag key.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETYPEINSTANCESREQUEST_H_
