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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEBYTOPICREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEBYTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeMessageByTopic request structure.
                */
                class DescribeMessageByTopicRequest : public AbstractModel
                {
                public:
                    DescribeMessageByTopicRequest();
                    ~DescribeMessageByTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @return InstanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @param _instanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
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
                     * 获取home/room
                     * @return Topic home/room
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置home/room
                     * @param _topic home/room
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Start time. millisecond-level timestamp.
                     * @return StartTime Start time. millisecond-level timestamp.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time. millisecond-level timestamp.
                     * @param _startTime Start time. millisecond-level timestamp.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the number of query messages. value range: 1-1024. default: 100.
                     * @return MaxNumber Specifies the number of query messages. value range: 1-1024. default: 100.
                     * 
                     */
                    int64_t GetMaxNumber() const;

                    /**
                     * 设置Specifies the number of query messages. value range: 1-1024. default: 100.
                     * @param _maxNumber Specifies the number of query messages. value range: 1-1024. default: 100.
                     * 
                     */
                    void SetMaxNumber(const int64_t& _maxNumber);

                    /**
                     * 判断参数 MaxNumber 是否已赋值
                     * @return MaxNumber 是否已赋值
                     * 
                     */
                    bool MaxNumberHasBeenSet() const;

                private:

                    /**
                     * tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * home/room
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Start time. millisecond-level timestamp.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specifies the number of query messages. value range: 1-1024. default: 100.
                     */
                    int64_t m_maxNumber;
                    bool m_maxNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEBYTOPICREQUEST_H_
