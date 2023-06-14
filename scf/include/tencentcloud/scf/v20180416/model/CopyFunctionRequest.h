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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_COPYFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_COPYFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CopyFunction request structure.
                */
                class CopyFunctionRequest : public AbstractModel
                {
                public:
                    CopyFunctionRequest();
                    ~CopyFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the function to be replicated
                     * @return FunctionName Name of the function to be replicated
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the function to be replicated
                     * @param _functionName Name of the function to be replicated
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Name of the new function
                     * @return NewFunctionName Name of the new function
                     * 
                     */
                    std::string GetNewFunctionName() const;

                    /**
                     * 设置Name of the new function
                     * @param _newFunctionName Name of the new function
                     * 
                     */
                    void SetNewFunctionName(const std::string& _newFunctionName);

                    /**
                     * 判断参数 NewFunctionName 是否已赋值
                     * @return NewFunctionName 是否已赋值
                     * 
                     */
                    bool NewFunctionNameHasBeenSet() const;

                    /**
                     * 获取Namespace of the function to be replicated. The default value is `default`.
                     * @return Namespace Namespace of the function to be replicated. The default value is `default`.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace of the function to be replicated. The default value is `default`.
                     * @param _namespace Namespace of the function to be replicated. The default value is `default`.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Namespace of the replicated function. The default value is default.
                     * @return TargetNamespace Namespace of the replicated function. The default value is default.
                     * 
                     */
                    std::string GetTargetNamespace() const;

                    /**
                     * 设置Namespace of the replicated function. The default value is default.
                     * @param _targetNamespace Namespace of the replicated function. The default value is default.
                     * 
                     */
                    void SetTargetNamespace(const std::string& _targetNamespace);

                    /**
                     * 判断参数 TargetNamespace 是否已赋值
                     * @return TargetNamespace 是否已赋值
                     * 
                     */
                    bool TargetNamespaceHasBeenSet() const;

                    /**
                     * 获取Description of the new function
                     * @return Description Description of the new function
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the new function
                     * @param _description Description of the new function
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Region of the target of the function replication. If the value is not set, the current region is used by default.
                     * @return TargetRegion Region of the target of the function replication. If the value is not set, the current region is used by default.
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置Region of the target of the function replication. If the value is not set, the current region is used by default.
                     * @param _targetRegion Region of the target of the function replication. If the value is not set, the current region is used by default.
                     * 
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     * 
                     */
                    bool TargetRegionHasBeenSet() const;

                    /**
                     * 获取It specifies whether to replace the function with the same name in the target namespace. The default option is `FALSE`.
(Note: The `TRUE` option results in deletion of the function in the target namespace. Please operate with caution.)
TRUE: Replaces the function.
FALSE: Does not replace the function.
                     * @return Override It specifies whether to replace the function with the same name in the target namespace. The default option is `FALSE`.
(Note: The `TRUE` option results in deletion of the function in the target namespace. Please operate with caution.)
TRUE: Replaces the function.
FALSE: Does not replace the function.
                     * 
                     */
                    bool GetOverride() const;

                    /**
                     * 设置It specifies whether to replace the function with the same name in the target namespace. The default option is `FALSE`.
(Note: The `TRUE` option results in deletion of the function in the target namespace. Please operate with caution.)
TRUE: Replaces the function.
FALSE: Does not replace the function.
                     * @param _override It specifies whether to replace the function with the same name in the target namespace. The default option is `FALSE`.
(Note: The `TRUE` option results in deletion of the function in the target namespace. Please operate with caution.)
TRUE: Replaces the function.
FALSE: Does not replace the function.
                     * 
                     */
                    void SetOverride(const bool& _override);

                    /**
                     * 判断参数 Override 是否已赋值
                     * @return Override 是否已赋值
                     * 
                     */
                    bool OverrideHasBeenSet() const;

                    /**
                     * 获取It specifies whether to replicate the function attributes, including environment variables, memory, timeout, function description, labels, and VPC. The default value is `TRUE`.
TRUE: Replicates the function configuration.
FALSE: Does not replicate the function configuration.
                     * @return CopyConfiguration It specifies whether to replicate the function attributes, including environment variables, memory, timeout, function description, labels, and VPC. The default value is `TRUE`.
TRUE: Replicates the function configuration.
FALSE: Does not replicate the function configuration.
                     * 
                     */
                    bool GetCopyConfiguration() const;

                    /**
                     * 设置It specifies whether to replicate the function attributes, including environment variables, memory, timeout, function description, labels, and VPC. The default value is `TRUE`.
TRUE: Replicates the function configuration.
FALSE: Does not replicate the function configuration.
                     * @param _copyConfiguration It specifies whether to replicate the function attributes, including environment variables, memory, timeout, function description, labels, and VPC. The default value is `TRUE`.
TRUE: Replicates the function configuration.
FALSE: Does not replicate the function configuration.
                     * 
                     */
                    void SetCopyConfiguration(const bool& _copyConfiguration);

                    /**
                     * 判断参数 CopyConfiguration 是否已赋值
                     * @return CopyConfiguration 是否已赋值
                     * 
                     */
                    bool CopyConfigurationHasBeenSet() const;

                private:

                    /**
                     * Name of the function to be replicated
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Name of the new function
                     */
                    std::string m_newFunctionName;
                    bool m_newFunctionNameHasBeenSet;

                    /**
                     * Namespace of the function to be replicated. The default value is `default`.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Namespace of the replicated function. The default value is default.
                     */
                    std::string m_targetNamespace;
                    bool m_targetNamespaceHasBeenSet;

                    /**
                     * Description of the new function
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Region of the target of the function replication. If the value is not set, the current region is used by default.
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * It specifies whether to replace the function with the same name in the target namespace. The default option is `FALSE`.
(Note: The `TRUE` option results in deletion of the function in the target namespace. Please operate with caution.)
TRUE: Replaces the function.
FALSE: Does not replace the function.
                     */
                    bool m_override;
                    bool m_overrideHasBeenSet;

                    /**
                     * It specifies whether to replicate the function attributes, including environment variables, memory, timeout, function description, labels, and VPC. The default value is `TRUE`.
TRUE: Replicates the function configuration.
FALSE: Does not replicate the function configuration.
                     */
                    bool m_copyConfiguration;
                    bool m_copyConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_COPYFUNCTIONREQUEST_H_
