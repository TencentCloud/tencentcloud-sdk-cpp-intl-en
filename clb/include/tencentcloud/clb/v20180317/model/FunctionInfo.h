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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * SCF related information
                */
                class FunctionInfo : public AbstractModel
                {
                public:
                    FunctionInfo();
                    ~FunctionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function namespace
                     * @return FunctionNamespace Function namespace
                     */
                    std::string GetFunctionNamespace() const;

                    /**
                     * 设置Function namespace
                     * @param FunctionNamespace Function namespace
                     */
                    void SetFunctionNamespace(const std::string& _functionNamespace);

                    /**
                     * 判断参数 FunctionNamespace 是否已赋值
                     * @return FunctionNamespace 是否已赋值
                     */
                    bool FunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param FunctionName Function name
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function version name or alias
                     * @return FunctionQualifier Function version name or alias
                     */
                    std::string GetFunctionQualifier() const;

                    /**
                     * 设置Function version name or alias
                     * @param FunctionQualifier Function version name or alias
                     */
                    void SetFunctionQualifier(const std::string& _functionQualifier);

                    /**
                     * 判断参数 FunctionQualifier 是否已赋值
                     * @return FunctionQualifier 是否已赋值
                     */
                    bool FunctionQualifierHasBeenSet() const;

                    /**
                     * 获取Function qualifier type. Values: `VERSION`, `ALIAS`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return FunctionQualifierType Function qualifier type. Values: `VERSION`, `ALIAS`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetFunctionQualifierType() const;

                    /**
                     * 设置Function qualifier type. Values: `VERSION`, `ALIAS`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param FunctionQualifierType Function qualifier type. Values: `VERSION`, `ALIAS`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFunctionQualifierType(const std::string& _functionQualifierType);

                    /**
                     * 判断参数 FunctionQualifierType 是否已赋值
                     * @return FunctionQualifierType 是否已赋值
                     */
                    bool FunctionQualifierTypeHasBeenSet() const;

                private:

                    /**
                     * Function namespace
                     */
                    std::string m_functionNamespace;
                    bool m_functionNamespaceHasBeenSet;

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function version name or alias
                     */
                    std::string m_functionQualifier;
                    bool m_functionQualifierHasBeenSet;

                    /**
                     * Function qualifier type. Values: `VERSION`, `ALIAS`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_functionQualifierType;
                    bool m_functionQualifierTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONINFO_H_
