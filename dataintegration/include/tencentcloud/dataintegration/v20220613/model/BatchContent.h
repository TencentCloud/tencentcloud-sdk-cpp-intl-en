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

#ifndef TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_BATCHCONTENT_H_
#define TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_BATCHCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataintegration
    {
        namespace V20220613
        {
            namespace Model
            {
                /**
                * A batch of messages
                */
                class BatchContent : public AbstractModel
                {
                public:
                    BatchContent();
                    ~BatchContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message body
                     * @return Body Message body
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置Message body
                     * @param _body Message body
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取Key of a message
                     * @return Key Key of a message
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key of a message
                     * @param _key Key of a message
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * Message body
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * Key of a message
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_BATCHCONTENT_H_
