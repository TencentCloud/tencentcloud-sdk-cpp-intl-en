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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DENIEDACTION_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DENIEDACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Restricted operation.
                */
                class DeniedAction : public AbstractModel
                {
                public:
                    DeniedAction();
                    ~DeniedAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Restricted operation name.
                     * @return Action Restricted operation name.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Restricted operation name.
                     * @param _action Restricted operation name.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Restricted operation message code.
                     * @return Code Restricted operation message code.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Restricted operation message code.
                     * @param _code Restricted operation message code.
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Restricted operation message.
                     * @return Message Restricted operation message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Restricted operation message.
                     * @param _message Restricted operation message.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Restricted operation name.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Restricted operation message code.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Restricted operation message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DENIEDACTION_H_
