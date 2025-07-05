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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_OPTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_OPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Dropdown options.
                */
                class Option : public AbstractModel
                {
                public:
                    Option();
                    ~Option() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Text.
                     * @return Text Text.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Text.
                     * @param _text Text.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Value.
                     * @return Value Value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value.
                     * @param _value Value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Number of characters in a file.
                     * @return CharSize Number of characters in a file.
                     * 
                     */
                    std::string GetCharSize() const;

                    /**
                     * 设置Number of characters in a file.
                     * @param _charSize Number of characters in a file.
                     * 
                     */
                    void SetCharSize(const std::string& _charSize);

                    /**
                     * 判断参数 CharSize 是否已赋值
                     * @return CharSize 是否已赋值
                     * 
                     */
                    bool CharSizeHasBeenSet() const;

                    /**
                     * 获取File type.
                     * @return FileType File type.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type.
                     * @param _fileType File type.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * Text.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Number of characters in a file.
                     */
                    std::string m_charSize;
                    bool m_charSizeHasBeenSet;

                    /**
                     * File type.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_OPTION_H_
