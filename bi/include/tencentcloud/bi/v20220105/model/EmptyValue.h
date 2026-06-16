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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUE_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Empty value display style configuration value structure
                */
                class EmptyValue : public AbstractModel
                {
                public:
                    EmptyValue();
                    ~EmptyValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Empty value display style type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Empty value display style type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Empty value display style type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Empty value display style type
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
                     * 获取Display style type for null values corresponds to specific display string
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Custom Display style type for null values corresponds to specific display string
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustom() const;

                    /**
                     * 设置Display style type for null values corresponds to specific display string
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _custom Display style type for null values corresponds to specific display string
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustom(const std::string& _custom);

                    /**
                     * 判断参数 Custom 是否已赋值
                     * @return Custom 是否已赋值
                     * 
                     */
                    bool CustomHasBeenSet() const;

                private:

                    /**
                     * Empty value display style type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Display style type for null values corresponds to specific display string
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_custom;
                    bool m_customHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUE_H_
