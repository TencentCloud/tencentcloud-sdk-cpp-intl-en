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
                     * 获取ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * @return InstanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * @param _instanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
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
                     * 获取Kafka group list. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.com/document/product/597/40841?from_cn_redirect=1).
                     * @return GroupList Kafka group list. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.com/document/product/597/40841?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetGroupList() const;

                    /**
                     * 设置Kafka group list. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.com/document/product/597/40841?from_cn_redirect=1).
                     * @param _groupList Kafka group list. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.com/document/product/597/40841?from_cn_redirect=1).
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
                     * ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Kafka group list. obtain through the API [DescribeConsumerGroup](https://www.tencentcloud.com/document/product/597/40841?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_groupList;
                    bool m_groupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPINFOREQUEST_H_
