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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_INVOKELLM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_INVOKELLM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Service invocation actively initiates requests to the LLM.
                */
                class InvokeLLM : public AbstractModel
                {
                public:
                    InvokeLLM();
                    ~InvokeLLM() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the content of the LLM request.
                     * @return Content Specifies the content of the LLM request.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Specifies the content of the LLM request.
                     * @param _content Specifies the content of the LLM request.
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
                     * 获取Whether the text is allowed to interrupt the robot speaking.
                     * @return Interrupt Whether the text is allowed to interrupt the robot speaking.
                     * 
                     */
                    bool GetInterrupt() const;

                    /**
                     * 设置Whether the text is allowed to interrupt the robot speaking.
                     * @param _interrupt Whether the text is allowed to interrupt the robot speaking.
                     * 
                     */
                    void SetInterrupt(const bool& _interrupt);

                    /**
                     * 判断参数 Interrupt 是否已赋值
                     * @return Interrupt 是否已赋值
                     * 
                     */
                    bool InterruptHasBeenSet() const;

                private:

                    /**
                     * Specifies the content of the LLM request.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Whether the text is allowed to interrupt the robot speaking.
                     */
                    bool m_interrupt;
                    bool m_interruptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_INVOKELLM_H_
