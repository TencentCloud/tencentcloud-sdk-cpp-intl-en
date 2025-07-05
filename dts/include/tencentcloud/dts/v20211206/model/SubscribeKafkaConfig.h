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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEKAFKACONFIG_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEKAFKACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DistributeRule.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Number of subscribed Kafka partitions and partition rules. mariadb, percona, tdsqlmysql, tdpg do not support custom partitions, so DistributeRules and DefaultRuleType can be left blank, but NumberOfPartitions is required.
                */
                class SubscribeKafkaConfig : public AbstractModel
                {
                public:
                    SubscribeKafkaConfig();
                    ~SubscribeKafkaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of Kafka partitions. Valid values: 1, 4, 8.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NumberOfPartitions Number of Kafka partitions. Valid values: 1, 4, 8.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNumberOfPartitions() const;

                    /**
                     * 设置Number of Kafka partitions. Valid values: 1, 4, 8.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _numberOfPartitions Number of Kafka partitions. Valid values: 1, 4, 8.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNumberOfPartitions(const uint64_t& _numberOfPartitions);

                    /**
                     * 判断参数 NumberOfPartitions 是否已赋值
                     * @return NumberOfPartitions 是否已赋值
                     * 
                     */
                    bool NumberOfPartitionsHasBeenSet() const;

                    /**
                     * 获取Partition rules. This field is required when NumberOfPartitions > 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DistributeRules Partition rules. This field is required when NumberOfPartitions > 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DistributeRule> GetDistributeRules() const;

                    /**
                     * 设置Partition rules. This field is required when NumberOfPartitions > 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _distributeRules Partition rules. This field is required when NumberOfPartitions > 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDistributeRules(const std::vector<DistributeRule>& _distributeRules);

                    /**
                     * 判断参数 DistributeRules 是否已赋值
                     * @return DistributeRules 是否已赋值
                     * 
                     */
                    bool DistributeRulesHasBeenSet() const;

                    /**
                     * 获取Default partitioning policy. If NumberOfPartitions > 1, this field is required. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key). Valid values for mongo: collection (partitioned by collection name). This field is used in conjunction with DistributeRules. If this field is configured, it is considered as configuring a DistributeRules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultRuleType Default partitioning policy. If NumberOfPartitions > 1, this field is required. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key). Valid values for mongo: collection (partitioned by collection name). This field is used in conjunction with DistributeRules. If this field is configured, it is considered as configuring a DistributeRules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefaultRuleType() const;

                    /**
                     * 设置Default partitioning policy. If NumberOfPartitions > 1, this field is required. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key). Valid values for mongo: collection (partitioned by collection name). This field is used in conjunction with DistributeRules. If this field is configured, it is considered as configuring a DistributeRules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultRuleType Default partitioning policy. If NumberOfPartitions > 1, this field is required. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key). Valid values for mongo: collection (partitioned by collection name). This field is used in conjunction with DistributeRules. If this field is configured, it is considered as configuring a DistributeRules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultRuleType(const std::string& _defaultRuleType);

                    /**
                     * 判断参数 DefaultRuleType 是否已赋值
                     * @return DefaultRuleType 是否已赋值
                     * 
                     */
                    bool DefaultRuleTypeHasBeenSet() const;

                private:

                    /**
                     * Number of Kafka partitions. Valid values: 1, 4, 8.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_numberOfPartitions;
                    bool m_numberOfPartitionsHasBeenSet;

                    /**
                     * Partition rules. This field is required when NumberOfPartitions > 1.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DistributeRule> m_distributeRules;
                    bool m_distributeRulesHasBeenSet;

                    /**
                     * Default partitioning policy. If NumberOfPartitions > 1, this field is required. Data that does not meet the regex in DistributeRules will be partitioned according to the default partitioning policy.Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key). Valid values for mongo: collection (partitioned by collection name). This field is used in conjunction with DistributeRules. If this field is configured, it is considered as configuring a DistributeRules.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultRuleType;
                    bool m_defaultRuleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEKAFKACONFIG_H_
