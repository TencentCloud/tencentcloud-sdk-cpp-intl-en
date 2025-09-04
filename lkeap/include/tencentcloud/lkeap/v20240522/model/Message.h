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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_MESSAGE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_MESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * Session content.
                */
                class Message : public AbstractModel
                {
                public:
                    Message();
                    ~Message() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role.
                     * @return Role Role.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Role.
                     * @param _role Role.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Content.
                     * @return Content Content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content.
                     * @param _content Content.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Chain of thought content. The ReasoningConent parameter only supports output parameters, and is only returned by the deepseek-r1 model.
                     * @return ReasoningContent Chain of thought content. The ReasoningConent parameter only supports output parameters, and is only returned by the deepseek-r1 model.
                     * 
                     */
                    std::string GetReasoningContent() const;

                    /**
                     * 设置Chain of thought content. The ReasoningConent parameter only supports output parameters, and is only returned by the deepseek-r1 model.
                     * @param _reasoningContent Chain of thought content. The ReasoningConent parameter only supports output parameters, and is only returned by the deepseek-r1 model.
                     * 
                     */
                    void SetReasoningContent(const std::string& _reasoningContent);

                    /**
                     * 判断参数 ReasoningContent 是否已赋值
                     * @return ReasoningContent 是否已赋值
                     * 
                     */
                    bool ReasoningContentHasBeenSet() const;

                private:

                    /**
                     * Role.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Chain of thought content. The ReasoningConent parameter only supports output parameters, and is only returned by the deepseek-r1 model.
                     */
                    std::string m_reasoningContent;
                    bool m_reasoningContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_MESSAGE_H_
