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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/KeyValueArrayInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Key-value index configuration
                */
                class KeyValueInfo : public AbstractModel
                {
                public:
                    KeyValueInfo();
                    ~KeyValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether case-sensitive
                     * @return CaseSensitive Whether case-sensitive
                     * 
                     */
                    bool GetCaseSensitive() const;

                    /**
                     * 设置Whether case-sensitive
                     * @param _caseSensitive Whether case-sensitive
                     * 
                     */
                    void SetCaseSensitive(const bool& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取Information about the key-value pair to be indexed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyValues Information about the key-value pair to be indexed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyValueArrayInfo> GetKeyValues() const;

                    /**
                     * 设置Information about the key-value pair to be indexed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyValues Information about the key-value pair to be indexed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyValues(const std::vector<KeyValueArrayInfo>& _keyValues);

                    /**
                     * 判断参数 KeyValues 是否已赋值
                     * @return KeyValues 是否已赋值
                     * 
                     */
                    bool KeyValuesHasBeenSet() const;

                private:

                    /**
                     * Whether case-sensitive
                     */
                    bool m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * Information about the key-value pair to be indexed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyValueArrayInfo> m_keyValues;
                    bool m_keyValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_KEYVALUEINFO_H_
