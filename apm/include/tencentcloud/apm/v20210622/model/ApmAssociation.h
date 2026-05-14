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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMASSOCIATION_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMASSOCIATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Shows the association between the apm business system and other cloud products in the return format.
                */
                class ApmAssociation : public AbstractModel
                {
                public:
                    ApmAssociation();
                    ~ApmAssociation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID of the associated product</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeerId <p>Instance ID of the associated product</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置<p>Instance ID of the associated product</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _peerId <p>Instance ID of the associated product</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                    /**
                     * 获取<p>Association status: 1 (enabled), 2 (not enabled), 3 (invalid)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status <p>Association status: 1 (enabled), 2 (not enabled), 3 (invalid)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Association status: 1 (enabled), 2 (not enabled), 3 (invalid)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status <p>Association status: 1 (enabled), 2 (not enabled), 3 (invalid)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>CKafka message topic</p>
                     * @return Topic <p>CKafka message topic</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>CKafka message topic</p>
                     * @param _topic <p>CKafka message topic</p>
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
                     * 获取<p>Ckafka consumption topic</p><p>Used for Kafka metric delivery</p>
                     * @return MetricTopic <p>Ckafka consumption topic</p><p>Used for Kafka metric delivery</p>
                     * 
                     */
                    std::string GetMetricTopic() const;

                    /**
                     * 设置<p>Ckafka consumption topic</p><p>Used for Kafka metric delivery</p>
                     * @param _metricTopic <p>Ckafka consumption topic</p><p>Used for Kafka metric delivery</p>
                     * 
                     */
                    void SetMetricTopic(const std::string& _metricTopic);

                    /**
                     * 判断参数 MetricTopic 是否已赋值
                     * @return MetricTopic 是否已赋值
                     * 
                     */
                    bool MetricTopicHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID of the associated product</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                    /**
                     * <p>Association status: 1 (enabled), 2 (not enabled), 3 (invalid)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>CKafka message topic</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>Ckafka consumption topic</p><p>Used for Kafka metric delivery</p>
                     */
                    std::string m_metricTopic;
                    bool m_metricTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMASSOCIATION_H_
