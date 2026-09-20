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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 
                */
                class ItemNames : public AbstractModel
                {
                public:
                    ItemNames();
                    ~ItemNames() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return KeyName 
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置
                     * @param _keyName 
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyType 
                     * 
                     */
                    int64_t GetKeyType() const;

                    /**
                     * 设置
                     * @param _keyType 
                     * 
                     */
                    void SetKeyType(const int64_t& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyPrompt 
                     * 
                     */
                    std::string GetKeyPrompt() const;

                    /**
                     * 设置
                     * @param _keyPrompt 
                     * 
                     */
                    void SetKeyPrompt(const std::string& _keyPrompt);

                    /**
                     * 判断参数 KeyPrompt 是否已赋值
                     * @return KeyPrompt 是否已赋值
                     * 
                     */
                    bool KeyPromptHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyExpectedValue 
                     * 
                     */
                    std::string GetKeyExpectedValue() const;

                    /**
                     * 设置
                     * @param _keyExpectedValue 
                     * 
                     */
                    void SetKeyExpectedValue(const std::string& _keyExpectedValue);

                    /**
                     * 判断参数 KeyExpectedValue 是否已赋值
                     * @return KeyExpectedValue 是否已赋值
                     * 
                     */
                    bool KeyExpectedValueHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyAuditPrompt 
                     * 
                     */
                    std::string GetKeyAuditPrompt() const;

                    /**
                     * 设置
                     * @param _keyAuditPrompt 
                     * 
                     */
                    void SetKeyAuditPrompt(const std::string& _keyAuditPrompt);

                    /**
                     * 判断参数 KeyAuditPrompt 是否已赋值
                     * @return KeyAuditPrompt 是否已赋值
                     * 
                     */
                    bool KeyAuditPromptHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_keyPrompt;
                    bool m_keyPromptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_keyExpectedValue;
                    bool m_keyExpectedValueHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_keyAuditPrompt;
                    bool m_keyAuditPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_
