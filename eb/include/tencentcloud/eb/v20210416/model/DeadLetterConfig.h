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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_DEADLETTERCONFIG_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_DEADLETTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/CkafkaDeliveryParams.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * DLQ configuration of rule
                */
                class DeadLetterConfig : public AbstractModel
                {
                public:
                    DeadLetterConfig();
                    ~DeadLetterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Three modes are supported: DLQ, drop, and ignore error, which correspond to `DLQ`, `DROP`, and `IGNORE_ERROR` respectively
                     * @return DisposeMethod Three modes are supported: DLQ, drop, and ignore error, which correspond to `DLQ`, `DROP`, and `IGNORE_ERROR` respectively
                     * 
                     */
                    std::string GetDisposeMethod() const;

                    /**
                     * 设置Three modes are supported: DLQ, drop, and ignore error, which correspond to `DLQ`, `DROP`, and `IGNORE_ERROR` respectively
                     * @param _disposeMethod Three modes are supported: DLQ, drop, and ignore error, which correspond to `DLQ`, `DROP`, and `IGNORE_ERROR` respectively
                     * 
                     */
                    void SetDisposeMethod(const std::string& _disposeMethod);

                    /**
                     * 判断参数 DisposeMethod 是否已赋值
                     * @return DisposeMethod 是否已赋值
                     * 
                     */
                    bool DisposeMethodHasBeenSet() const;

                    /**
                     * 获取If the DLQ mode is set, this option is required. Error messages will be delivered to the corresponding Kafka topic
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CkafkaDeliveryParams If the DLQ mode is set, this option is required. Error messages will be delivered to the corresponding Kafka topic
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CkafkaDeliveryParams GetCkafkaDeliveryParams() const;

                    /**
                     * 设置If the DLQ mode is set, this option is required. Error messages will be delivered to the corresponding Kafka topic
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _ckafkaDeliveryParams If the DLQ mode is set, this option is required. Error messages will be delivered to the corresponding Kafka topic
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCkafkaDeliveryParams(const CkafkaDeliveryParams& _ckafkaDeliveryParams);

                    /**
                     * 判断参数 CkafkaDeliveryParams 是否已赋值
                     * @return CkafkaDeliveryParams 是否已赋值
                     * 
                     */
                    bool CkafkaDeliveryParamsHasBeenSet() const;

                private:

                    /**
                     * Three modes are supported: DLQ, drop, and ignore error, which correspond to `DLQ`, `DROP`, and `IGNORE_ERROR` respectively
                     */
                    std::string m_disposeMethod;
                    bool m_disposeMethodHasBeenSet;

                    /**
                     * If the DLQ mode is set, this option is required. Error messages will be delivered to the corresponding Kafka topic
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CkafkaDeliveryParams m_ckafkaDeliveryParams;
                    bool m_ckafkaDeliveryParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_DEADLETTERCONFIG_H_
