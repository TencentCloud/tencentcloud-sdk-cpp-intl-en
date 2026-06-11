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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KafkaConsumerContent.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * OpenKafkaConsumer request structure.
                */
                class OpenKafkaConsumerRequest : public AbstractModel
                {
                public:
                    OpenKafkaConsumerRequest();
                    ~OpenKafkaConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Log topic Id.</p><ul><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1">create log topic</a>.</li></ul>
                     * @return FromTopicId <p>Log topic Id.</p><ul><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1">create log topic</a>.</li></ul>
                     * 
                     */
                    std::string GetFromTopicId() const;

                    /**
                     * 设置<p>Log topic Id.</p><ul><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1">create log topic</a>.</li></ul>
                     * @param _fromTopicId <p>Log topic Id.</p><ul><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1">create log topic</a>.</li></ul>
                     * 
                     */
                    void SetFromTopicId(const std::string& _fromTopicId);

                    /**
                     * 判断参数 FromTopicId 是否已赋值
                     * @return FromTopicId 是否已赋值
                     * 
                     */
                    bool FromTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Compression mode [0:NONE; 2:SNAPPY; 3:LZ4], default: 0</p>
                     * @return Compression <p>Compression mode [0:NONE; 2:SNAPPY; 3:LZ4], default: 0</p>
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置<p>Compression mode [0:NONE; 2:SNAPPY; 3:LZ4], default: 0</p>
                     * @param _compression <p>Compression mode [0:NONE; 2:SNAPPY; 3:LZ4], default: 0</p>
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
                     * 获取<p>kafka protocol consumption data format</p>
                     * @return ConsumerContent <p>kafka protocol consumption data format</p>
                     * 
                     */
                    KafkaConsumerContent GetConsumerContent() const;

                    /**
                     * 设置<p>kafka protocol consumption data format</p>
                     * @param _consumerContent <p>kafka protocol consumption data format</p>
                     * 
                     */
                    void SetConsumerContent(const KafkaConsumerContent& _consumerContent);

                    /**
                     * 判断参数 ConsumerContent 是否已赋值
                     * @return ConsumerContent 是否已赋值
                     * 
                     */
                    bool ConsumerContentHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable. Default value: 2</p>
                     * @return HasServicesLog <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable. Default value: 2</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable. Default value: 2</p>
                     * @param _hasServicesLog <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable. Default value: 2</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取<p>Range type of consumption, 0: latest; 1: historic + latest; default value: 0</p>
                     * @return ScopeType <p>Range type of consumption, 0: latest; 1: historic + latest; default value: 0</p>
                     * 
                     */
                    uint64_t GetScopeType() const;

                    /**
                     * 设置<p>Range type of consumption, 0: latest; 1: historic + latest; default value: 0</p>
                     * @param _scopeType <p>Range type of consumption, 0: latest; 1: historic + latest; default value: 0</p>
                     * 
                     */
                    void SetScopeType(const uint64_t& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Log topic Id.</p><ul><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">get log topic list</a>.</li><li>Get log topic Id by <a href="https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1">create log topic</a>.</li></ul>
                     */
                    std::string m_fromTopicId;
                    bool m_fromTopicIdHasBeenSet;

                    /**
                     * <p>Compression mode [0:NONE; 2:SNAPPY; 3:LZ4], default: 0</p>
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * <p>kafka protocol consumption data format</p>
                     */
                    KafkaConsumerContent m_consumerContent;
                    bool m_consumerContentHasBeenSet;

                    /**
                     * <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable. Default value: 2</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>Range type of consumption, 0: latest; 1: historic + latest; default value: 0</p>
                     */
                    uint64_t m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_OPENKAFKACONSUMERREQUEST_H_
