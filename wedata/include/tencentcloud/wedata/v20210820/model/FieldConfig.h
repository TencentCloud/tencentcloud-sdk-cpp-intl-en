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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FIELDCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FIELDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Field Variable
                */
                class FieldConfig : public AbstractModel
                {
                public:
                    FieldConfig();
                    ~FieldConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FieldKey Field key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFieldKey() const;

                    /**
                     * 设置Field key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fieldKey Field key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFieldKey(const std::string& _fieldKey);

                    /**
                     * 判断参数 FieldKey 是否已赋值
                     * @return FieldKey 是否已赋值
                     * 
                     */
                    bool FieldKeyHasBeenSet() const;

                    /**
                     * 获取Field valueNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FieldValue Field valueNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFieldValue() const;

                    /**
                     * 设置Field valueNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _fieldValue Field valueNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFieldValue(const std::string& _fieldValue);

                    /**
                     * 判断参数 FieldValue 是否已赋值
                     * @return FieldValue 是否已赋值
                     * 
                     */
                    bool FieldValueHasBeenSet() const;

                    /**
                     * 获取Field Value Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FieldDataType Field Value Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFieldDataType() const;

                    /**
                     * 设置Field Value Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fieldDataType Field Value Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFieldDataType(const std::string& _fieldDataType);

                    /**
                     * 判断参数 FieldDataType 是否已赋值
                     * @return FieldDataType 是否已赋值
                     * 
                     */
                    bool FieldDataTypeHasBeenSet() const;

                private:

                    /**
                     * Field key
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fieldKey;
                    bool m_fieldKeyHasBeenSet;

                    /**
                     * Field valueNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fieldValue;
                    bool m_fieldValueHasBeenSet;

                    /**
                     * Field Value Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fieldDataType;
                    bool m_fieldDataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FIELDCONFIG_H_
