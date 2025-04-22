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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_VALUERANGE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_VALUERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/Range.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ValueRange
                */
                class ValueRange : public AbstractModel
                {
                public:
                    ValueRange();
                    ~ValueRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter types. Valid values: enum, string, and section. Enum indicates enumeration, namely utf8, latin1, gbk. String indicates that the returned parameter value is a string. Section indicates that the returned parameter value is a value range, for example, 4-8.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Parameter types. Valid values: enum, string, and section. Enum indicates enumeration, namely utf8, latin1, gbk. String indicates that the returned parameter value is a string. Section indicates that the returned parameter value is a value range, for example, 4-8.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter types. Valid values: enum, string, and section. Enum indicates enumeration, namely utf8, latin1, gbk. String indicates that the returned parameter value is a string. Section indicates that the returned parameter value is a value range, for example, 4-8.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Parameter types. Valid values: enum, string, and section. Enum indicates enumeration, namely utf8, latin1, gbk. String indicates that the returned parameter value is a string. Section indicates that the returned parameter value is a value range, for example, 4-8.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Response parameter when the type is a section.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Range Response parameter when the type is a section.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Range GetRange() const;

                    /**
                     * 设置Response parameter when the type is a section.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _range Response parameter when the type is a section.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRange(const Range& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取Response parameter when the type is an enum.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enum Response parameter when the type is an enum.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetEnum() const;

                    /**
                     * 设置Response parameter when the type is an enum.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enum Response parameter when the type is an enum.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnum(const std::vector<std::string>& _enum);

                    /**
                     * 判断参数 Enum 是否已赋值
                     * @return Enum 是否已赋值
                     * 
                     */
                    bool EnumHasBeenSet() const;

                    /**
                     * 获取Response parameter when the type is a string.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return String Response parameter when the type is a string.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetString() const;

                    /**
                     * 设置Response parameter when the type is a string.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _string Response parameter when the type is a string.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetString(const std::string& _string);

                    /**
                     * 判断参数 String 是否已赋值
                     * @return String 是否已赋值
                     * 
                     */
                    bool StringHasBeenSet() const;

                private:

                    /**
                     * Parameter types. Valid values: enum, string, and section. Enum indicates enumeration, namely utf8, latin1, gbk. String indicates that the returned parameter value is a string. Section indicates that the returned parameter value is a value range, for example, 4-8.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Response parameter when the type is a section.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Range m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * Response parameter when the type is an enum.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_enum;
                    bool m_enumHasBeenSet;

                    /**
                     * Response parameter when the type is a string.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_string;
                    bool m_stringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_VALUERANGE_H_
