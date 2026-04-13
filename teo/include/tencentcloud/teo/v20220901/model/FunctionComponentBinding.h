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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONCOMPONENTBINDING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONCOMPONENTBINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/KVNamespaceParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Edge function component binding configuration is used to create a relationship between edge functions and components (such as KV namespace). Through bind configuration, function code can access bound resources at runtime via the specified variable name.
                */
                class FunctionComponentBinding : public AbstractModel
                {
                public:
                    FunctionComponentBinding();
                    ~FunctionComponentBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bound component type. Valid values:
<li>kv_namespace: KV namespace.</li>

                     * @return Type Bound component type. Valid values:
<li>kv_namespace: KV namespace.</li>

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Bound component type. Valid values:
<li>kv_namespace: KV namespace.</li>

                     * @param _type Bound component type. Valid values:
<li>kv_namespace: KV namespace.</li>

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
                     * 获取Variable name for binding. Limited to 1-50 characters. Allowed characters are letters, digits, and underscores. Digits cannot be at the beginning. Access the bound component via this variable name in the edge function code. Based on the Type value, the usage is as follows:
<li>When Type is kv_namespace: In code, you can access the KV namespace through the variable name, for example, when setting it to "MY_KV", you can perform read-write operations via MY_KV.get("key").</li>

                     * @return VariableName Variable name for binding. Limited to 1-50 characters. Allowed characters are letters, digits, and underscores. Digits cannot be at the beginning. Access the bound component via this variable name in the edge function code. Based on the Type value, the usage is as follows:
<li>When Type is kv_namespace: In code, you can access the KV namespace through the variable name, for example, when setting it to "MY_KV", you can perform read-write operations via MY_KV.get("key").</li>

                     * 
                     */
                    std::string GetVariableName() const;

                    /**
                     * 设置Variable name for binding. Limited to 1-50 characters. Allowed characters are letters, digits, and underscores. Digits cannot be at the beginning. Access the bound component via this variable name in the edge function code. Based on the Type value, the usage is as follows:
<li>When Type is kv_namespace: In code, you can access the KV namespace through the variable name, for example, when setting it to "MY_KV", you can perform read-write operations via MY_KV.get("key").</li>

                     * @param _variableName Variable name for binding. Limited to 1-50 characters. Allowed characters are letters, digits, and underscores. Digits cannot be at the beginning. Access the bound component via this variable name in the edge function code. Based on the Type value, the usage is as follows:
<li>When Type is kv_namespace: In code, you can access the KV namespace through the variable name, for example, when setting it to "MY_KV", you can perform read-write operations via MY_KV.get("key").</li>

                     * 
                     */
                    void SetVariableName(const std::string& _variableName);

                    /**
                     * 判断参数 VariableName 是否已赋值
                     * @return VariableName 是否已赋值
                     * 
                     */
                    bool VariableNameHasBeenSet() const;

                    /**
                     * 获取KV namespace configuration parameter. Used for designated binding namespace details. Required when Type is kv_namespace.


Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return KVNamespaceParameters KV namespace configuration parameter. Used for designated binding namespace details. Required when Type is kv_namespace.


Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    KVNamespaceParameters GetKVNamespaceParameters() const;

                    /**
                     * 设置KV namespace configuration parameter. Used for designated binding namespace details. Required when Type is kv_namespace.


Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _kVNamespaceParameters KV namespace configuration parameter. Used for designated binding namespace details. Required when Type is kv_namespace.


Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetKVNamespaceParameters(const KVNamespaceParameters& _kVNamespaceParameters);

                    /**
                     * 判断参数 KVNamespaceParameters 是否已赋值
                     * @return KVNamespaceParameters 是否已赋值
                     * 
                     */
                    bool KVNamespaceParametersHasBeenSet() const;

                private:

                    /**
                     * Bound component type. Valid values:
<li>kv_namespace: KV namespace.</li>

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Variable name for binding. Limited to 1-50 characters. Allowed characters are letters, digits, and underscores. Digits cannot be at the beginning. Access the bound component via this variable name in the edge function code. Based on the Type value, the usage is as follows:
<li>When Type is kv_namespace: In code, you can access the KV namespace through the variable name, for example, when setting it to "MY_KV", you can perform read-write operations via MY_KV.get("key").</li>

                     */
                    std::string m_variableName;
                    bool m_variableNameHasBeenSet;

                    /**
                     * KV namespace configuration parameter. Used for designated binding namespace details. Required when Type is kv_namespace.


Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    KVNamespaceParameters m_kVNamespaceParameters;
                    bool m_kVNamespaceParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONCOMPONENTBINDING_H_
