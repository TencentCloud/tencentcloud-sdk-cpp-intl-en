/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Connection.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Producer
                */
                class Producer : public AbstractModel
                {
                public:
                    Producer();
                    ~Producer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param EnvironmentId Environment (namespace) name.
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
                     * @return TopicName Topic name.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
                     * @param TopicName Topic name.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Number of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CountConnect Number of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCountConnect() const;

                    /**
                     * 设置Number of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CountConnect Number of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCountConnect(const int64_t& _countConnect);

                    /**
                     * 判断参数 CountConnect 是否已赋值
                     * @return CountConnect 是否已赋值
                     */
                    bool CountConnectHasBeenSet() const;

                    /**
                     * 获取Set of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ConnectionSets Set of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Connection> GetConnectionSets() const;

                    /**
                     * 设置Set of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ConnectionSets Set of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConnectionSets(const std::vector<Connection>& _connectionSets);

                    /**
                     * 判断参数 ConnectionSets 是否已赋值
                     * @return ConnectionSets 是否已赋值
                     */
                    bool ConnectionSetsHasBeenSet() const;

                private:

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Number of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_countConnect;
                    bool m_countConnectHasBeenSet;

                    /**
                     * Set of connections.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Connection> m_connectionSets;
                    bool m_connectionSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCER_H_
