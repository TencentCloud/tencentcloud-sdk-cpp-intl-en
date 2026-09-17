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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SOURCETOPICCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SOURCETOPICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/SourceTopicInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Source log topic configuration
                */
                class SourceTopicConfig : public AbstractModel
                {
                public:
                    SourceTopicConfig();
                    ~SourceTopicConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Log topic filtering method.</p><p>Enumeration values:</p><ul><li>1: Static selection</li></ul>
                     * @return TopicFilterType <p>Log topic filtering method.</p><p>Enumeration values:</p><ul><li>1: Static selection</li></ul>
                     * 
                     */
                    uint64_t GetTopicFilterType() const;

                    /**
                     * 设置<p>Log topic filtering method.</p><p>Enumeration values:</p><ul><li>1: Static selection</li></ul>
                     * @param _topicFilterType <p>Log topic filtering method.</p><p>Enumeration values:</p><ul><li>1: Static selection</li></ul>
                     * 
                     */
                    void SetTopicFilterType(const uint64_t& _topicFilterType);

                    /**
                     * 判断参数 TopicFilterType 是否已赋值
                     * @return TopicFilterType 是否已赋值
                     * 
                     */
                    bool TopicFilterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Source logset id</p>
                     * @return LogsetId <p>Source logset id</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>Source logset id</p>
                     * @param _logsetId <p>Source logset id</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>Source log topic list</p><p>Required when TopicFilterType=1</p>
                     * @return Topics <p>Source log topic list</p><p>Required when TopicFilterType=1</p>
                     * 
                     */
                    std::vector<SourceTopicInfo> GetTopics() const;

                    /**
                     * 设置<p>Source log topic list</p><p>Required when TopicFilterType=1</p>
                     * @param _topics <p>Source log topic list</p><p>Required when TopicFilterType=1</p>
                     * 
                     */
                    void SetTopics(const std::vector<SourceTopicInfo>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                private:

                    /**
                     * <p>Log topic filtering method.</p><p>Enumeration values:</p><ul><li>1: Static selection</li></ul>
                     */
                    uint64_t m_topicFilterType;
                    bool m_topicFilterTypeHasBeenSet;

                    /**
                     * <p>Source logset id</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Source log topic list</p><p>Required when TopicFilterType=1</p>
                     */
                    std::vector<SourceTopicInfo> m_topics;
                    bool m_topicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SOURCETOPICCONFIG_H_
