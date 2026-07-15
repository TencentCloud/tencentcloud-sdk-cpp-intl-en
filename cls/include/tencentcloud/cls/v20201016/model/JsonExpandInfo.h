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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_JSONEXPANDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_JSONEXPANDINFO_H_

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
                * **JsonExpandInfo data structure description**:
```
JSON nest unfold configuration
```

**Field description**:

| Field | Description |
|------|------|
Switch | Whether JSON nested unfold is enabled
Fields | Field list of JSON to unfold, 1-3
DropOriginal | Whether to drop the raw field after unfolding, default true
| ConflictPolicy | Field conflict policy. keep_outer: Keep the outer layer (default). keep_inner: Keep the inner-layer. |

**LogRechargeRuleInfo add field**:

| Field | Description |
|------|------|
JsonExpand | JSON nest unfold configuration. This parameter is valid only when RechargeType is json_log.
                */
                class JsonExpandInfo : public AbstractModel
                {
                public:
                    JsonExpandInfo();
                    ~JsonExpandInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable the JSON nested unfold functionality. Once enabled, it will flatten and process the specified JSON field.</p><p>Default value: None (Required parameter)</p>
                     * @return Switch <p>Whether to enable the JSON nested unfold functionality. Once enabled, it will flatten and process the specified JSON field.</p><p>Default value: None (Required parameter)</p>
                     * 
                     */
                    bool GetSwitch() const;

                    /**
                     * 设置<p>Whether to enable the JSON nested unfold functionality. Once enabled, it will flatten and process the specified JSON field.</p><p>Default value: None (Required parameter)</p>
                     * @param _switch <p>Whether to enable the JSON nested unfold functionality. Once enabled, it will flatten and process the specified JSON field.</p><p>Default value: None (Required parameter)</p>
                     * 
                     */
                    void SetSwitch(const bool& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>List of JSON field names to be unfolded, supporting 1 to 3 fields. Field names cannot be empty strings and cannot be repeated.</p><p>Input parameter limits: 1. Number of fields: 1 to 3. 2. Length of each field name not exceeding 128 characters. 3. Field names cannot be empty strings. 4. Field names cannot be repeated.</p><p>Default value: None (required parameter)</p><p>Value for reference: Value: message; Description: Example field name</p><p>Example: ["message", "data", "content"]</p>
                     * @return Fields <p>List of JSON field names to be unfolded, supporting 1 to 3 fields. Field names cannot be empty strings and cannot be repeated.</p><p>Input parameter limits: 1. Number of fields: 1 to 3. 2. Length of each field name not exceeding 128 characters. 3. Field names cannot be empty strings. 4. Field names cannot be repeated.</p><p>Default value: None (required parameter)</p><p>Value for reference: Value: message; Description: Example field name</p><p>Example: ["message", "data", "content"]</p>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>List of JSON field names to be unfolded, supporting 1 to 3 fields. Field names cannot be empty strings and cannot be repeated.</p><p>Input parameter limits: 1. Number of fields: 1 to 3. 2. Length of each field name not exceeding 128 characters. 3. Field names cannot be empty strings. 4. Field names cannot be repeated.</p><p>Default value: None (required parameter)</p><p>Value for reference: Value: message; Description: Example field name</p><p>Example: ["message", "data", "content"]</p>
                     * @param _fields <p>List of JSON field names to be unfolded, supporting 1 to 3 fields. Field names cannot be empty strings and cannot be repeated.</p><p>Input parameter limits: 1. Number of fields: 1 to 3. 2. Length of each field name not exceeding 128 characters. 3. Field names cannot be empty strings. 4. Field names cannot be repeated.</p><p>Default value: None (required parameter)</p><p>Value for reference: Value: message; Description: Example field name</p><p>Example: ["message", "data", "content"]</p>
                     * 
                     */
                    void SetFields(const std::vector<std::string>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to discard the original nested field after unfolding. true: discard the original field and keep only the flattened field after unfolding; false: keep the original field and add the flattened field after unfolding.</p><p>Enumeration value:</p><ul><li>true / false: discard the original field / keep the original field</li></ul><p>Default value: true</p><p>Optional. Default is true if not provided.</p>
                     * @return DropOriginal <p>Whether to discard the original nested field after unfolding. true: discard the original field and keep only the flattened field after unfolding; false: keep the original field and add the flattened field after unfolding.</p><p>Enumeration value:</p><ul><li>true / false: discard the original field / keep the original field</li></ul><p>Default value: true</p><p>Optional. Default is true if not provided.</p>
                     * 
                     */
                    bool GetDropOriginal() const;

                    /**
                     * 设置<p>Whether to discard the original nested field after unfolding. true: discard the original field and keep only the flattened field after unfolding; false: keep the original field and add the flattened field after unfolding.</p><p>Enumeration value:</p><ul><li>true / false: discard the original field / keep the original field</li></ul><p>Default value: true</p><p>Optional. Default is true if not provided.</p>
                     * @param _dropOriginal <p>Whether to discard the original nested field after unfolding. true: discard the original field and keep only the flattened field after unfolding; false: keep the original field and add the flattened field after unfolding.</p><p>Enumeration value:</p><ul><li>true / false: discard the original field / keep the original field</li></ul><p>Default value: true</p><p>Optional. Default is true if not provided.</p>
                     * 
                     */
                    void SetDropOriginal(const bool& _dropOriginal);

                    /**
                     * 判断参数 DropOriginal 是否已赋值
                     * @return DropOriginal 是否已赋值
                     * 
                     */
                    bool DropOriginalHasBeenSet() const;

                    /**
                     * 获取<p>Processing policy when the unfolded field conflicts with an existing field</p><p>Enumeration value:</p><ul><li>keep_outer / keep_inner: Keep the outer (existing) field / Keep the inner (newly unfolded) field</li></ul><p>Default value: keep_outer</p><p>Optional. Defaults to keep_outer if not passed.</p>
                     * @return ConflictPolicy <p>Processing policy when the unfolded field conflicts with an existing field</p><p>Enumeration value:</p><ul><li>keep_outer / keep_inner: Keep the outer (existing) field / Keep the inner (newly unfolded) field</li></ul><p>Default value: keep_outer</p><p>Optional. Defaults to keep_outer if not passed.</p>
                     * 
                     */
                    std::string GetConflictPolicy() const;

                    /**
                     * 设置<p>Processing policy when the unfolded field conflicts with an existing field</p><p>Enumeration value:</p><ul><li>keep_outer / keep_inner: Keep the outer (existing) field / Keep the inner (newly unfolded) field</li></ul><p>Default value: keep_outer</p><p>Optional. Defaults to keep_outer if not passed.</p>
                     * @param _conflictPolicy <p>Processing policy when the unfolded field conflicts with an existing field</p><p>Enumeration value:</p><ul><li>keep_outer / keep_inner: Keep the outer (existing) field / Keep the inner (newly unfolded) field</li></ul><p>Default value: keep_outer</p><p>Optional. Defaults to keep_outer if not passed.</p>
                     * 
                     */
                    void SetConflictPolicy(const std::string& _conflictPolicy);

                    /**
                     * 判断参数 ConflictPolicy 是否已赋值
                     * @return ConflictPolicy 是否已赋值
                     * 
                     */
                    bool ConflictPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable the JSON nested unfold functionality. Once enabled, it will flatten and process the specified JSON field.</p><p>Default value: None (Required parameter)</p>
                     */
                    bool m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>List of JSON field names to be unfolded, supporting 1 to 3 fields. Field names cannot be empty strings and cannot be repeated.</p><p>Input parameter limits: 1. Number of fields: 1 to 3. 2. Length of each field name not exceeding 128 characters. 3. Field names cannot be empty strings. 4. Field names cannot be repeated.</p><p>Default value: None (required parameter)</p><p>Value for reference: Value: message; Description: Example field name</p><p>Example: ["message", "data", "content"]</p>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>Whether to discard the original nested field after unfolding. true: discard the original field and keep only the flattened field after unfolding; false: keep the original field and add the flattened field after unfolding.</p><p>Enumeration value:</p><ul><li>true / false: discard the original field / keep the original field</li></ul><p>Default value: true</p><p>Optional. Default is true if not provided.</p>
                     */
                    bool m_dropOriginal;
                    bool m_dropOriginalHasBeenSet;

                    /**
                     * <p>Processing policy when the unfolded field conflicts with an existing field</p><p>Enumeration value:</p><ul><li>keep_outer / keep_inner: Keep the outer (existing) field / Keep the inner (newly unfolded) field</li></ul><p>Default value: keep_outer</p><p>Optional. Defaults to keep_outer if not passed.</p>
                     */
                    std::string m_conflictPolicy;
                    bool m_conflictPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_JSONEXPANDINFO_H_
