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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESCONFIG_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Configuration object for modifying instance attributes
                */
                class ModifyInstanceAttributesConfig : public AbstractModel
                {
                public:
                    ModifyInstanceAttributesConfig();
                    ~ModifyInstanceAttributesConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Automatic creation. true: enabled, false: not enabled
                     * @return AutoCreateTopicEnable Automatic creation. true: enabled, false: not enabled
                     * 
                     */
                    bool GetAutoCreateTopicEnable() const;

                    /**
                     * 设置Automatic creation. true: enabled, false: not enabled
                     * @param _autoCreateTopicEnable Automatic creation. true: enabled, false: not enabled
                     * 
                     */
                    void SetAutoCreateTopicEnable(const bool& _autoCreateTopicEnable);

                    /**
                     * 判断参数 AutoCreateTopicEnable 是否已赋值
                     * @return AutoCreateTopicEnable 是否已赋值
                     * 
                     */
                    bool AutoCreateTopicEnableHasBeenSet() const;

                    /**
                     * 获取Default number of partitions for a newly created topic. if AutoCreateTopicEnable is set to true and no value is set, defaults to 3.
                     * @return DefaultNumPartitions Default number of partitions for a newly created topic. if AutoCreateTopicEnable is set to true and no value is set, defaults to 3.
                     * 
                     */
                    int64_t GetDefaultNumPartitions() const;

                    /**
                     * 设置Default number of partitions for a newly created topic. if AutoCreateTopicEnable is set to true and no value is set, defaults to 3.
                     * @param _defaultNumPartitions Default number of partitions for a newly created topic. if AutoCreateTopicEnable is set to true and no value is set, defaults to 3.
                     * 
                     */
                    void SetDefaultNumPartitions(const int64_t& _defaultNumPartitions);

                    /**
                     * 判断参数 DefaultNumPartitions 是否已赋值
                     * @return DefaultNumPartitions 是否已赋值
                     * 
                     */
                    bool DefaultNumPartitionsHasBeenSet() const;

                    /**
                     * 获取Default number of replicas for a newly created topic. if AutoCreateTopicEnable is set to true and not specified, defaults to 2.
                     * @return DefaultReplicationFactor Default number of replicas for a newly created topic. if AutoCreateTopicEnable is set to true and not specified, defaults to 2.
                     * 
                     */
                    int64_t GetDefaultReplicationFactor() const;

                    /**
                     * 设置Default number of replicas for a newly created topic. if AutoCreateTopicEnable is set to true and not specified, defaults to 2.
                     * @param _defaultReplicationFactor Default number of replicas for a newly created topic. if AutoCreateTopicEnable is set to true and not specified, defaults to 2.
                     * 
                     */
                    void SetDefaultReplicationFactor(const int64_t& _defaultReplicationFactor);

                    /**
                     * 判断参数 DefaultReplicationFactor 是否已赋值
                     * @return DefaultReplicationFactor 是否已赋值
                     * 
                     */
                    bool DefaultReplicationFactorHasBeenSet() const;

                private:

                    /**
                     * Automatic creation. true: enabled, false: not enabled
                     */
                    bool m_autoCreateTopicEnable;
                    bool m_autoCreateTopicEnableHasBeenSet;

                    /**
                     * Default number of partitions for a newly created topic. if AutoCreateTopicEnable is set to true and no value is set, defaults to 3.
                     */
                    int64_t m_defaultNumPartitions;
                    bool m_defaultNumPartitionsHasBeenSet;

                    /**
                     * Default number of replicas for a newly created topic. if AutoCreateTopicEnable is set to true and not specified, defaults to 2.
                     */
                    int64_t m_defaultReplicationFactor;
                    bool m_defaultReplicationFactorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESCONFIG_H_
