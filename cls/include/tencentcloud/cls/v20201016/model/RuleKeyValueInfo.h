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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RULEKEYVALUEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RULEKEYVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KeyValueInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Key-Value index configuration
                */
                class RuleKeyValueInfo : public AbstractModel
                {
                public:
                    RuleKeyValueInfo();
                    ~RuleKeyValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Case sensitivity
                     * @return CaseSensitive Case sensitivity
                     */
                    bool GetCaseSensitive() const;

                    /**
                     * 设置Case sensitivity
                     * @param CaseSensitive Case sensitivity
                     */
                    void SetCaseSensitive(const bool& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取Key-value pair information of the index to be created
                     * @return KeyValues Key-value pair information of the index to be created
                     */
                    std::vector<KeyValueInfo> GetKeyValues() const;

                    /**
                     * 设置Key-value pair information of the index to be created
                     * @param KeyValues Key-value pair information of the index to be created
                     */
                    void SetKeyValues(const std::vector<KeyValueInfo>& _keyValues);

                    /**
                     * 判断参数 KeyValues 是否已赋值
                     * @return KeyValues 是否已赋值
                     */
                    bool KeyValuesHasBeenSet() const;

                private:

                    /**
                     * Case sensitivity
                     */
                    bool m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * Key-value pair information of the index to be created
                     */
                    std::vector<KeyValueInfo> m_keyValues;
                    bool m_keyValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RULEKEYVALUEINFO_H_
