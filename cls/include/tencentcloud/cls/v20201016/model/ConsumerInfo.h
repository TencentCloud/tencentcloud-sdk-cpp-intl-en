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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Ckafka.h>
#include <tencentcloud/cls/v20201016/model/ConsumerContent.h>
#include <tencentcloud/cls/v20201016/model/AdvancedConsumerConfiguration.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Shipping Rule
                */
                class ConsumerInfo : public AbstractModel
                {
                public:
                    ConsumerInfo();
                    ~ConsumerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shipping rule ID
                     * @return ConsumerId Shipping rule ID
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置Shipping rule ID
                     * @param _consumerId Shipping rule ID
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Whether the shipping task is effective.
                     * @return Effective Whether the shipping task is effective.
                     * 
                     */
                    bool GetEffective() const;

                    /**
                     * 设置Whether the shipping task is effective.
                     * @param _effective Whether the shipping task is effective.
                     * 
                     */
                    void SetEffective(const bool& _effective);

                    /**
                     * 判断参数 Effective 是否已赋值
                     * @return Effective 是否已赋值
                     * 
                     */
                    bool EffectiveHasBeenSet() const;

                    /**
                     * 获取Description of CKafka
                     * @return Ckafka Description of CKafka
                     * 
                     */
                    Ckafka GetCkafka() const;

                    /**
                     * 设置Description of CKafka
                     * @param _ckafka Description of CKafka
                     * 
                     */
                    void SetCkafka(const Ckafka& _ckafka);

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     * 
                     */
                    bool CkafkaHasBeenSet() const;

                    /**
                     * 获取Whether to ship the log's metadata information
                     * @return NeedContent Whether to ship the log's metadata information
                     * 
                     */
                    bool GetNeedContent() const;

                    /**
                     * 设置Whether to ship the log's metadata information
                     * @param _needContent Whether to ship the log's metadata information
                     * 
                     */
                    void SetNeedContent(const bool& _needContent);

                    /**
                     * 判断参数 NeedContent 是否已赋值
                     * @return NeedContent 是否已赋值
                     * 
                     */
                    bool NeedContentHasBeenSet() const;

                    /**
                     * 获取Description of the metadata information to be shipped
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Content Description of the metadata information to be shipped
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConsumerContent GetContent() const;

                    /**
                     * 设置Description of the metadata information to be shipped
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _content Description of the metadata information to be shipped
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContent(const ConsumerContent& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Compression mode [0:NONE；2:SNAPPY；3:LZ4]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Compression Compression mode [0:NONE；2:SNAPPY；3:LZ4]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置Compression mode [0:NONE；2:SNAPPY；3:LZ4]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compression Compression mode [0:NONE；2:SNAPPY；3:LZ4]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompression(const int64_t& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取Creation time of a shipping task (a millisecond-level timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time of a shipping task (a millisecond-level timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time of a shipping task (a millisecond-level timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time of a shipping task (a millisecond-level timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取ARN (Access Role Name) [Create role](https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1)	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleArn ARN (Access Role Name) [Create role](https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1)	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置ARN (Access Role Name) [Create role](https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1)	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleArn ARN (Access Role Name) [Create role](https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1)	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取External ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExternalId External ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置External ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _externalId External ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取Task running status. Valid values: 0: stopped; 1: running; 2: abnormal.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStatus Task running status. Valid values: 0: stopped; 1: running; 2: abnormal.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置Task running status. Valid values: 0: stopped; 1: running; 2: abnormal.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskStatus Task running status. Valid values: 0: stopped; 1: running; 2: abnormal.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Advanced configuration
                     * @return AdvancedConfig Advanced configuration
                     * 
                     */
                    AdvancedConsumerConfiguration GetAdvancedConfig() const;

                    /**
                     * 设置Advanced configuration
                     * @param _advancedConfig Advanced configuration
                     * 
                     */
                    void SetAdvancedConfig(const AdvancedConsumerConfiguration& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                private:

                    /**
                     * Shipping rule ID
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Whether the shipping task is effective.
                     */
                    bool m_effective;
                    bool m_effectiveHasBeenSet;

                    /**
                     * Description of CKafka
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * Whether to ship the log's metadata information
                     */
                    bool m_needContent;
                    bool m_needContentHasBeenSet;

                    /**
                     * Description of the metadata information to be shipped
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConsumerContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Compression mode [0:NONE；2:SNAPPY；3:LZ4]
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Creation time of a shipping task (a millisecond-level timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * ARN (Access Role Name) [Create role](https://www.tencentcloud.com/document/product/598/19381?from_cn_redirect=1)	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * External ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * Task running status. Valid values: 0: stopped; 1: running; 2: abnormal.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Advanced configuration
                     */
                    AdvancedConsumerConfiguration m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERINFO_H_
