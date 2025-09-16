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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_LOGCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_LOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Log configurations.
                */
                class LogConfig : public AbstractModel
                {
                public:
                    LogConfig();
                    ~LogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Logs should be shipped to a Cloud Log Service (CLS) log set.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogsetId Logs should be shipped to a Cloud Log Service (CLS) log set.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logs should be shipped to a Cloud Log Service (CLS) log set.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logsetId Logs should be shipped to a Cloud Log Service (CLS) log set.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Logs should be shipped to a CLS topic.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicId Logs should be shipped to a CLS topic.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Logs should be shipped to a CLS topic.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicId Logs should be shipped to a CLS topic.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * Logs should be shipped to a Cloud Log Service (CLS) log set.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Logs should be shipped to a CLS topic.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_LOGCONFIG_H_
