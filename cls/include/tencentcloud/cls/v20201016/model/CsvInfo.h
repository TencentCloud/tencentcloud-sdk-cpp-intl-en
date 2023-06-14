/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CSVINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CSVINFO_H_

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
                * CSV content description
                */
                class CsvInfo : public AbstractModel
                {
                public:
                    CsvInfo();
                    ~CsvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to print `key` on the first row of the CSV file
                     * @return PrintKey Whether to print `key` on the first row of the CSV file
                     * 
                     */
                    bool GetPrintKey() const;

                    /**
                     * 设置Whether to print `key` on the first row of the CSV file
                     * @param _printKey Whether to print `key` on the first row of the CSV file
                     * 
                     */
                    void SetPrintKey(const bool& _printKey);

                    /**
                     * 判断参数 PrintKey 是否已赋值
                     * @return PrintKey 是否已赋值
                     * 
                     */
                    bool PrintKeyHasBeenSet() const;

                    /**
                     * 获取Names of keys
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Keys Names of keys
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置Names of keys
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _keys Names of keys
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Field delimiter
                     * @return Delimiter Field delimiter
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置Field delimiter
                     * @param _delimiter Field delimiter
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取Escape character used to enclose any field delimiter in field content. You can enter only a single quotation mark, double quotation mark, or an empty string.
                     * @return EscapeChar Escape character used to enclose any field delimiter in field content. You can enter only a single quotation mark, double quotation mark, or an empty string.
                     * 
                     */
                    std::string GetEscapeChar() const;

                    /**
                     * 设置Escape character used to enclose any field delimiter in field content. You can enter only a single quotation mark, double quotation mark, or an empty string.
                     * @param _escapeChar Escape character used to enclose any field delimiter in field content. You can enter only a single quotation mark, double quotation mark, or an empty string.
                     * 
                     */
                    void SetEscapeChar(const std::string& _escapeChar);

                    /**
                     * 判断参数 EscapeChar 是否已赋值
                     * @return EscapeChar 是否已赋值
                     * 
                     */
                    bool EscapeCharHasBeenSet() const;

                    /**
                     * 获取Content used to populate non-existing fields
                     * @return NonExistingField Content used to populate non-existing fields
                     * 
                     */
                    std::string GetNonExistingField() const;

                    /**
                     * 设置Content used to populate non-existing fields
                     * @param _nonExistingField Content used to populate non-existing fields
                     * 
                     */
                    void SetNonExistingField(const std::string& _nonExistingField);

                    /**
                     * 判断参数 NonExistingField 是否已赋值
                     * @return NonExistingField 是否已赋值
                     * 
                     */
                    bool NonExistingFieldHasBeenSet() const;

                private:

                    /**
                     * Whether to print `key` on the first row of the CSV file
                     */
                    bool m_printKey;
                    bool m_printKeyHasBeenSet;

                    /**
                     * Names of keys
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Field delimiter
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * Escape character used to enclose any field delimiter in field content. You can enter only a single quotation mark, double quotation mark, or an empty string.
                     */
                    std::string m_escapeChar;
                    bool m_escapeCharHasBeenSet;

                    /**
                     * Content used to populate non-existing fields
                     */
                    std::string m_nonExistingField;
                    bool m_nonExistingFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CSVINFO_H_
