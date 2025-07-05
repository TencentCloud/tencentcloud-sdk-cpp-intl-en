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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPINFOREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPINFOREQUEST_H_

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
                * DescribeGroupInfo request structure.
                */
                class DescribeGroupInfoRequest : public AbstractModel
                {
                public:
                    DescribeGroupInfoRequest();
                    ~DescribeGroupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取(Filter) filter by instance ID.
                     * @return InstanceId (Filter) filter by instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置(Filter) filter by instance ID.
                     * @param _instanceId (Filter) filter by instance ID.
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
                     * 获取Kafka consumer group (`Consumer-group`), which is an array in the format of `GroupList.0=xxx&GroupList.1=yyy`.
                     * @return GroupList Kafka consumer group (`Consumer-group`), which is an array in the format of `GroupList.0=xxx&GroupList.1=yyy`.
                     * 
                     */
                    std::vector<std::string> GetGroupList() const;

                    /**
                     * 设置Kafka consumer group (`Consumer-group`), which is an array in the format of `GroupList.0=xxx&GroupList.1=yyy`.
                     * @param _groupList Kafka consumer group (`Consumer-group`), which is an array in the format of `GroupList.0=xxx&GroupList.1=yyy`.
                     * 
                     */
                    void SetGroupList(const std::vector<std::string>& _groupList);

                    /**
                     * 判断参数 GroupList 是否已赋值
                     * @return GroupList 是否已赋值
                     * 
                     */
                    bool GroupListHasBeenSet() const;

                private:

                    /**
                     * (Filter) filter by instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Kafka consumer group (`Consumer-group`), which is an array in the format of `GroupList.0=xxx&GroupList.1=yyy`.
                     */
                    std::vector<std::string> m_groupList;
                    bool m_groupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPINFOREQUEST_H_
