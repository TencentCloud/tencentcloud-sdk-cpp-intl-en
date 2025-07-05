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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsumerContent.h>
#include <tencentcloud/cls/v20201016/model/Ckafka.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyConsumer request structure.
                */
                class ModifyConsumerRequest : public AbstractModel
                {
                public:
                    ModifyConsumerRequest();
                    ~ModifyConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID bound to the task
                     * @return TopicId Log topic ID bound to the task
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID bound to the task
                     * @param _topicId Log topic ID bound to the task
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
                     * 获取Whether the shipping task takes effect (default: no)
                     * @return Effective Whether the shipping task takes effect (default: no)
                     * 
                     */
                    bool GetEffective() const;

                    /**
                     * 设置Whether the shipping task takes effect (default: no)
                     * @param _effective Whether the shipping task takes effect (default: no)
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
                     * 获取Whether to deliver log Metadata information; the default is true.When NeedContent is true: Content field is valid.When NeedContent is false: Content field is invalid.
                     * @return NeedContent Whether to deliver log Metadata information; the default is true.When NeedContent is true: Content field is valid.When NeedContent is false: Content field is invalid.
                     * 
                     */
                    bool GetNeedContent() const;

                    /**
                     * 设置Whether to deliver log Metadata information; the default is true.When NeedContent is true: Content field is valid.When NeedContent is false: Content field is invalid.
                     * @param _needContent Whether to deliver log Metadata information; the default is true.When NeedContent is true: Content field is valid.When NeedContent is false: Content field is invalid.
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
                     * 获取Metadata to ship if `NeedContent` is `true`
                     * @return Content Metadata to ship if `NeedContent` is `true`
                     * 
                     */
                    ConsumerContent GetContent() const;

                    /**
                     * 设置Metadata to ship if `NeedContent` is `true`
                     * @param _content Metadata to ship if `NeedContent` is `true`
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
                     * 获取CKafka information
                     * @return Ckafka CKafka information
                     * 
                     */
                    Ckafka GetCkafka() const;

                    /**
                     * 设置CKafka information
                     * @param _ckafka CKafka information
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
                     * 获取Compression method during delivery. Valid values: 0, 2, and 3. [0: NONE; 2: SNAPPY; 3: LZ4]
                     * @return Compression Compression method during delivery. Valid values: 0, 2, and 3. [0: NONE; 2: SNAPPY; 3: LZ4]
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置Compression method during delivery. Valid values: 0, 2, and 3. [0: NONE; 2: SNAPPY; 3: LZ4]
                     * @param _compression Compression method during delivery. Valid values: 0, 2, and 3. [0: NONE; 2: SNAPPY; 3: LZ4]
                     * 
                     */
                    void SetCompression(const int64_t& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                private:

                    /**
                     * Log topic ID bound to the task
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Whether the shipping task takes effect (default: no)
                     */
                    bool m_effective;
                    bool m_effectiveHasBeenSet;

                    /**
                     * Whether to deliver log Metadata information; the default is true.When NeedContent is true: Content field is valid.When NeedContent is false: Content field is invalid.
                     */
                    bool m_needContent;
                    bool m_needContentHasBeenSet;

                    /**
                     * Metadata to ship if `NeedContent` is `true`
                     */
                    ConsumerContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * CKafka information
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * Compression method during delivery. Valid values: 0, 2, and 3. [0: NONE; 2: SNAPPY; 3: LZ4]
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_
