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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETKEYVAL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETKEYVAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Generic data structure of Key-val type
                */
                class AssetKeyVal : public AbstractModel
                {
                public:
                    AssetKeyVal();
                    ~AssetKeyVal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag
                     * @return Key Tag
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Tag
                     * @param _key Tag
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Quantity
                     * @return Value Quantity
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Quantity
                     * @param _value Quantity
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Desc Description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _desc Description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Number of additions today
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NewCount Number of additions today
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNewCount() const;

                    /**
                     * 设置Number of additions today
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _newCount Number of additions today
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNewCount(const int64_t& _newCount);

                    /**
                     * 判断参数 NewCount 是否已赋值
                     * @return NewCount 是否已赋值
                     * 
                     */
                    bool NewCountHasBeenSet() const;

                private:

                    /**
                     * Tag
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Quantity
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Number of additions today
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_newCount;
                    bool m_newCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETKEYVAL_H_
