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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ADVANCEDCONSUMERCONFIGURATION_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ADVANCEDCONSUMERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Advanced configuration for CKafka shipping.
                */
                class AdvancedConsumerConfiguration : public AbstractModel
                {
                public:
                    AdvancedConsumerConfiguration();
                    ~AdvancedConsumerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Kafka partition hash status. Default false.

-true: Enable sending messages with equal field Hash values to the same Kafka partition.
-false: Disable sending messages with equivalent field Hash values to the same kafka partition.
                     * @return PartitionHashStatus Kafka partition hash status. Default false.

-true: Enable sending messages with equal field Hash values to the same Kafka partition.
-false: Disable sending messages with equivalent field Hash values to the same kafka partition.
                     * 
                     */
                    bool GetPartitionHashStatus() const;

                    /**
                     * 设置Kafka partition hash status. Default false.

-true: Enable sending messages with equal field Hash values to the same Kafka partition.
-false: Disable sending messages with equivalent field Hash values to the same kafka partition.
                     * @param _partitionHashStatus Kafka partition hash status. Default false.

-true: Enable sending messages with equal field Hash values to the same Kafka partition.
-false: Disable sending messages with equivalent field Hash values to the same kafka partition.
                     * 
                     */
                    void SetPartitionHashStatus(const bool& _partitionHashStatus);

                    /**
                     * 判断参数 PartitionHashStatus 是否已赋值
                     * @return PartitionHashStatus 是否已赋值
                     * 
                     */
                    bool PartitionHashStatusHasBeenSet() const;

                    /**
                     * 获取Field list to calculate hash. Supports a maximum of 5 fields.
                     * @return PartitionFields Field list to calculate hash. Supports a maximum of 5 fields.
                     * 
                     */
                    std::vector<std::string> GetPartitionFields() const;

                    /**
                     * 设置Field list to calculate hash. Supports a maximum of 5 fields.
                     * @param _partitionFields Field list to calculate hash. Supports a maximum of 5 fields.
                     * 
                     */
                    void SetPartitionFields(const std::vector<std::string>& _partitionFields);

                    /**
                     * 判断参数 PartitionFields 是否已赋值
                     * @return PartitionFields 是否已赋值
                     * 
                     */
                    bool PartitionFieldsHasBeenSet() const;

                private:

                    /**
                     * Kafka partition hash status. Default false.

-true: Enable sending messages with equal field Hash values to the same Kafka partition.
-false: Disable sending messages with equivalent field Hash values to the same kafka partition.
                     */
                    bool m_partitionHashStatus;
                    bool m_partitionHashStatusHasBeenSet;

                    /**
                     * Field list to calculate hash. Supports a maximum of 5 fields.
                     */
                    std::vector<std::string> m_partitionFields;
                    bool m_partitionFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ADVANCEDCONSUMERCONFIGURATION_H_
