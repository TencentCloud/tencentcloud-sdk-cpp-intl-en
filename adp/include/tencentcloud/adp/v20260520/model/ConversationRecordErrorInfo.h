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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDERRORINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDERRORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Description of a single dialogue failure
                */
                class ConversationRecordErrorInfo : public AbstractModel
                {
                public:
                    ConversationRecordErrorInfo();
                    ~ConversationRecordErrorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Failure error code of the dialogue</p>
                     * @return Code <p>Failure error code of the dialogue</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>Failure error code of the dialogue</p>
                     * @param _code <p>Failure error code of the dialogue</p>
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
                     * 获取<p>Dialogue failure error message</p>
                     * @return Message <p>Dialogue failure error message</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>Dialogue failure error message</p>
                     * @param _message <p>Dialogue failure error message</p>
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
                     * <p>Failure error code of the dialogue</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>Dialogue failure error message</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDERRORINFO_H_
