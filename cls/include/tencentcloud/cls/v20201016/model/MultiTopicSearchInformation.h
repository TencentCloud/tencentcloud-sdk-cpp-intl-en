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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MULTITOPICSEARCHINFORMATION_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MULTITOPICSEARCHINFORMATION_H_

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
                * Log topic search information
                */
                class MultiTopicSearchInformation : public AbstractModel
                {
                public:
                    MultiTopicSearchInformation();
                    ~MultiTopicSearchInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the log topic to be searched for
                     * @return TopicId ID of the log topic to be searched for
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic to be searched for
                     * @param _topicId ID of the log topic to be searched for
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
                     * 获取You can pass through the `Context` value (validity: 1 hour) returned by the last API to continue to get logs, which can get up to 10,000 raw logs.
                     * @return Context You can pass through the `Context` value (validity: 1 hour) returned by the last API to continue to get logs, which can get up to 10,000 raw logs.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置You can pass through the `Context` value (validity: 1 hour) returned by the last API to continue to get logs, which can get up to 10,000 raw logs.
                     * @param _context You can pass through the `Context` value (validity: 1 hour) returned by the last API to continue to get logs, which can get up to 10,000 raw logs.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * ID of the log topic to be searched for
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * You can pass through the `Context` value (validity: 1 hour) returned by the last API to continue to get logs, which can get up to 10,000 raw logs.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MULTITOPICSEARCHINFORMATION_H_
