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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERGROUPREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateConsumerGroup request structure.
                */
                class CreateConsumerGroupRequest : public AbstractModel
                {
                public:
                    CreateConsumerGroupRequest();
                    ~CreateConsumerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the created consumer group
Restriction: Alphanumeric underscore, numbers not allowed at the beginning, length limited to 256.
                     * @return ConsumerGroup ID of the created consumer group
Restriction: Alphanumeric underscore, numbers not allowed at the beginning, length limited to 256.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置ID of the created consumer group
Restriction: Alphanumeric underscore, numbers not allowed at the beginning, length limited to 256.
                     * @param _consumerGroup ID of the created consumer group
Restriction: Alphanumeric underscore, numbers not allowed at the beginning, length limited to 256.
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取Consumer heartbeat timeout (seconds).
                     * @return Timeout Consumer heartbeat timeout (seconds).
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Consumer heartbeat timeout (seconds).
                     * @param _timeout Consumer heartbeat timeout (seconds).
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取List of log topics included in the created consumer group.
                     * @return Topics List of log topics included in the created consumer group.
                     * 
                     */
                    std::vector<std::string> GetTopics() const;

                    /**
                     * 设置List of log topics included in the created consumer group.
                     * @param _topics List of log topics included in the created consumer group.
                     * 
                     */
                    void SetTopics(const std::vector<std::string>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取Logset ID (the logset to which a log topic belongs).
                     * @return LogsetId Logset ID (the logset to which a log topic belongs).
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID (the logset to which a log topic belongs).
                     * @param _logsetId Logset ID (the logset to which a log topic belongs).
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                private:

                    /**
                     * ID of the created consumer group
Restriction: Alphanumeric underscore, numbers not allowed at the beginning, length limited to 256.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Consumer heartbeat timeout (seconds).
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * List of log topics included in the created consumer group.
                     */
                    std::vector<std::string> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * Logset ID (the logset to which a log topic belongs).
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERGROUPREQUEST_H_
