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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/FullTextInfo.h>
#include <tencentcloud/cls/v20201016/model/RuleKeyValueInfo.h>
#include <tencentcloud/cls/v20201016/model/RuleTagInfo.h>
#include <tencentcloud/cls/v20201016/model/DynamicIndex.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Index rule. At least one of the `FullText`, `KeyValue`, and `Tag` parameters must be valid.
                */
                class RuleInfo : public AbstractModel
                {
                public:
                    RuleInfo();
                    ~RuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Full-text index configuration. If empty, full-text indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullText Full-text index configuration. If empty, full-text indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FullTextInfo GetFullText() const;

                    /**
                     * 设置Full-text index configuration. If empty, full-text indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullText Full-text index configuration. If empty, full-text indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullText(const FullTextInfo& _fullText);

                    /**
                     * 判断参数 FullText 是否已赋值
                     * @return FullText 是否已赋值
                     * 
                     */
                    bool FullTextHasBeenSet() const;

                    /**
                     * 获取Key-value index configuration. If empty, key-value indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyValue Key-value index configuration. If empty, key-value indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RuleKeyValueInfo GetKeyValue() const;

                    /**
                     * 设置Key-value index configuration. If empty, key-value indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyValue Key-value index configuration. If empty, key-value indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyValue(const RuleKeyValueInfo& _keyValue);

                    /**
                     * 判断参数 KeyValue 是否已赋值
                     * @return KeyValue 是否已赋值
                     * 
                     */
                    bool KeyValueHasBeenSet() const;

                    /**
                     * 获取Metadata field index configuration. If empty, metadata field indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tag Metadata field index configuration. If empty, metadata field indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RuleTagInfo GetTag() const;

                    /**
                     * 设置Metadata field index configuration. If empty, metadata field indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tag Metadata field index configuration. If empty, metadata field indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const RuleTagInfo& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Key-value index automatic configuration. If empty, the feature is not enabled.Once enabled, fields within logs are automatically added to the key-value index, including fields added to logs subsequently.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DynamicIndex Key-value index automatic configuration. If empty, the feature is not enabled.Once enabled, fields within logs are automatically added to the key-value index, including fields added to logs subsequently.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DynamicIndex GetDynamicIndex() const;

                    /**
                     * 设置Key-value index automatic configuration. If empty, the feature is not enabled.Once enabled, fields within logs are automatically added to the key-value index, including fields added to logs subsequently.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dynamicIndex Key-value index automatic configuration. If empty, the feature is not enabled.Once enabled, fields within logs are automatically added to the key-value index, including fields added to logs subsequently.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDynamicIndex(const DynamicIndex& _dynamicIndex);

                    /**
                     * 判断参数 DynamicIndex 是否已赋值
                     * @return DynamicIndex 是否已赋值
                     * 
                     */
                    bool DynamicIndexHasBeenSet() const;

                private:

                    /**
                     * Full-text index configuration. If empty, full-text indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FullTextInfo m_fullText;
                    bool m_fullTextHasBeenSet;

                    /**
                     * Key-value index configuration. If empty, key-value indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RuleKeyValueInfo m_keyValue;
                    bool m_keyValueHasBeenSet;

                    /**
                     * Metadata field index configuration. If empty, metadata field indexing is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RuleTagInfo m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Key-value index automatic configuration. If empty, the feature is not enabled.Once enabled, fields within logs are automatically added to the key-value index, including fields added to logs subsequently.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DynamicIndex m_dynamicIndex;
                    bool m_dynamicIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_
