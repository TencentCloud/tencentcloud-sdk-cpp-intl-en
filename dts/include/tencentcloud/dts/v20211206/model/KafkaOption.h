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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_KAFKAOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_KAFKAOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TopicRule.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Synchronization option fields added when the destination is Kafka.
                */
                class KafkaOption : public AbstractModel
                {
                public:
                    KafkaOption();
                    ~KafkaOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Data type delivered to kafka, such as Avro, Json, canal-pb, canal-Json, debezium</p>
                     * @return DataType <p>Data type delivered to kafka, such as Avro, Json, canal-pb, canal-Json, debezium</p>
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置<p>Data type delivered to kafka, such as Avro, Json, canal-pb, canal-Json, debezium</p>
                     * @param _dataType <p>Data type delivered to kafka, such as Avro, Json, canal-pb, canal-Json, debezium</p>
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取<p>Synchronize topic policies, for example, Single (Deliver to a single topic), Multi (Custom topic name)</p>
                     * @return TopicType <p>Synchronize topic policies, for example, Single (Deliver to a single topic), Multi (Custom topic name)</p>
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置<p>Synchronize topic policies, for example, Single (Deliver to a single topic), Multi (Custom topic name)</p>
                     * @param _topicType <p>Synchronize topic policies, for example, Single (Deliver to a single topic), Multi (Custom topic name)</p>
                     * 
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取<p>topic used to store ddl</p>
                     * @return DDLTopicName <p>topic used to store ddl</p>
                     * 
                     */
                    std::string GetDDLTopicName() const;

                    /**
                     * 设置<p>topic used to store ddl</p>
                     * @param _dDLTopicName <p>topic used to store ddl</p>
                     * 
                     */
                    void SetDDLTopicName(const std::string& _dDLTopicName);

                    /**
                     * 判断参数 DDLTopicName 是否已赋值
                     * @return DDLTopicName 是否已赋值
                     * 
                     */
                    bool DDLTopicNameHasBeenSet() const;

                    /**
                     * 获取<p>Description of single topic and custom topic</p>
                     * @return TopicRules <p>Description of single topic and custom topic</p>
                     * 
                     */
                    std::vector<TopicRule> GetTopicRules() const;

                    /**
                     * 设置<p>Description of single topic and custom topic</p>
                     * @param _topicRules <p>Description of single topic and custom topic</p>
                     * 
                     */
                    void SetTopicRules(const std::vector<TopicRule>& _topicRules);

                    /**
                     * 判断参数 TopicRules 是否已赋值
                     * @return TopicRules 是否已赋值
                     * 
                     */
                    bool TopicRulesHasBeenSet() const;

                    /**
                     * 获取<p>Additional information, for specific data types, additional parameters can be set. For example, for Canal-compatible feature support: "canalOfficialFormat":"on" means to enable the Canal-compatible feature, not included by default. For large message skipping feature support: "skipLargeMessage":"on" means to enable skipping large messages, not included by default; when enabled, "maxMessageSizeMB" must be simultaneously set to a positive integer string from 1 to 100, representing the max message size threshold (MB), messages exceeding this size will be skipped, not included by default.</p>
                     * @return DataOption <p>Additional information, for specific data types, additional parameters can be set. For example, for Canal-compatible feature support: "canalOfficialFormat":"on" means to enable the Canal-compatible feature, not included by default. For large message skipping feature support: "skipLargeMessage":"on" means to enable skipping large messages, not included by default; when enabled, "maxMessageSizeMB" must be simultaneously set to a positive integer string from 1 to 100, representing the max message size threshold (MB), messages exceeding this size will be skipped, not included by default.</p>
                     * 
                     */
                    std::vector<KeyValuePairOption> GetDataOption() const;

                    /**
                     * 设置<p>Additional information, for specific data types, additional parameters can be set. For example, for Canal-compatible feature support: "canalOfficialFormat":"on" means to enable the Canal-compatible feature, not included by default. For large message skipping feature support: "skipLargeMessage":"on" means to enable skipping large messages, not included by default; when enabled, "maxMessageSizeMB" must be simultaneously set to a positive integer string from 1 to 100, representing the max message size threshold (MB), messages exceeding this size will be skipped, not included by default.</p>
                     * @param _dataOption <p>Additional information, for specific data types, additional parameters can be set. For example, for Canal-compatible feature support: "canalOfficialFormat":"on" means to enable the Canal-compatible feature, not included by default. For large message skipping feature support: "skipLargeMessage":"on" means to enable skipping large messages, not included by default; when enabled, "maxMessageSizeMB" must be simultaneously set to a positive integer string from 1 to 100, representing the max message size threshold (MB), messages exceeding this size will be skipped, not included by default.</p>
                     * 
                     */
                    void SetDataOption(const std::vector<KeyValuePairOption>& _dataOption);

                    /**
                     * 判断参数 DataOption 是否已赋值
                     * @return DataOption 是否已赋值
                     * 
                     */
                    bool DataOptionHasBeenSet() const;

                private:

                    /**
                     * <p>Data type delivered to kafka, such as Avro, Json, canal-pb, canal-Json, debezium</p>
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * <p>Synchronize topic policies, for example, Single (Deliver to a single topic), Multi (Custom topic name)</p>
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * <p>topic used to store ddl</p>
                     */
                    std::string m_dDLTopicName;
                    bool m_dDLTopicNameHasBeenSet;

                    /**
                     * <p>Description of single topic and custom topic</p>
                     */
                    std::vector<TopicRule> m_topicRules;
                    bool m_topicRulesHasBeenSet;

                    /**
                     * <p>Additional information, for specific data types, additional parameters can be set. For example, for Canal-compatible feature support: "canalOfficialFormat":"on" means to enable the Canal-compatible feature, not included by default. For large message skipping feature support: "skipLargeMessage":"on" means to enable skipping large messages, not included by default; when enabled, "maxMessageSizeMB" must be simultaneously set to a positive integer string from 1 to 100, representing the max message size threshold (MB), messages exceeding this size will be skipped, not included by default.</p>
                     */
                    std::vector<KeyValuePairOption> m_dataOption;
                    bool m_dataOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_KAFKAOPTION_H_
