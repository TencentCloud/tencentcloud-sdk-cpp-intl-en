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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_COMPONENTLOGCONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_COMPONENTLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Component log collection configuration.
                */
                class ComponentLogConfig : public AbstractModel
                {
                public:
                    ComponentLogConfig();
                    ~ComponentLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component name
                     * @return Name Component name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Component name
                     * @param _name Component name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Log level. for components that support dynamic adjustment, you can specify this parameter when enabling logs.
                     * @return LogLevel Log level. for components that support dynamic adjustment, you can specify this parameter when enabling logs.
                     * 
                     */
                    int64_t GetLogLevel() const;

                    /**
                     * 设置Log level. for components that support dynamic adjustment, you can specify this parameter when enabling logs.
                     * @param _logLevel Log level. for components that support dynamic adjustment, you can specify this parameter when enabling logs.
                     * 
                     */
                    void SetLogLevel(const int64_t& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取Logset ID. if not specified, auto-create.
                     * @return LogSetId Logset ID. if not specified, auto-create.
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置Logset ID. if not specified, auto-create.
                     * @param _logSetId Logset ID. if not specified, auto-create.
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID. if not specified, auto-create.
                     * @return TopicId Log topic ID. if not specified, auto-create.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID. if not specified, auto-create.
                     * @param _topicId Log topic ID. if not specified, auto-create.
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
                     * 获取topic region. this parameter enables cross-region shipping of logs.
                     * @return TopicRegion topic region. this parameter enables cross-region shipping of logs.
                     * 
                     */
                    std::string GetTopicRegion() const;

                    /**
                     * 设置topic region. this parameter enables cross-region shipping of logs.
                     * @param _topicRegion topic region. this parameter enables cross-region shipping of logs.
                     * 
                     */
                    void SetTopicRegion(const std::string& _topicRegion);

                    /**
                     * 判断参数 TopicRegion 是否已赋值
                     * @return TopicRegion 是否已赋值
                     * 
                     */
                    bool TopicRegionHasBeenSet() const;

                private:

                    /**
                     * Component name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Log level. for components that support dynamic adjustment, you can specify this parameter when enabling logs.
                     */
                    int64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * Logset ID. if not specified, auto-create.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Log topic ID. if not specified, auto-create.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * topic region. this parameter enables cross-region shipping of logs.
                     */
                    std::string m_topicRegion;
                    bool m_topicRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_COMPONENTLOGCONFIG_H_
