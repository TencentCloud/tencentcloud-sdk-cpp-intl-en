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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CREATEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CREATEFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Code.h>
#include <tencentcloud/scf/v20180416/model/Environment.h>
#include <tencentcloud/scf/v20180416/model/VpcConfig.h>
#include <tencentcloud/scf/v20180416/model/LayerVersionSimple.h>
#include <tencentcloud/scf/v20180416/model/DeadLetterConfig.h>
#include <tencentcloud/scf/v20180416/model/PublicNetConfigIn.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateFunction request structure.
                */
                class CreateFunctionRequest : public AbstractModel
                {
                public:
                    CreateFunctionRequest();
                    ~CreateFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the new function. The name can contain 2 to 60 characters, including English letters, digits, hyphens (-), and underscores (_). The name must start with a letter and cannot end with a hyphen or underscore.
                     * @return FunctionName Name of the new function. The name can contain 2 to 60 characters, including English letters, digits, hyphens (-), and underscores (_). The name must start with a letter and cannot end with a hyphen or underscore.
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the new function. The name can contain 2 to 60 characters, including English letters, digits, hyphens (-), and underscores (_). The name must start with a letter and cannot end with a hyphen or underscore.
                     * @param FunctionName Name of the new function. The name can contain 2 to 60 characters, including English letters, digits, hyphens (-), and underscores (_). The name must start with a letter and cannot end with a hyphen or underscore.
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function code. Note: You cannot specify `Cos` and `ZipFile` at the same time.
                     * @return Code Function code. Note: You cannot specify `Cos` and `ZipFile` at the same time.
                     */
                    Code GetCode() const;

                    /**
                     * 设置Function code. Note: You cannot specify `Cos` and `ZipFile` at the same time.
                     * @param Code Function code. Note: You cannot specify `Cos` and `ZipFile` at the same time.
                     */
                    void SetCode(const Code& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Name of the handler, which is in the “file name.handler name” form. Use periods (.) to separate a file name and function name. The file name and function name must start and end with a letter and can contain 2 to 60 characters, including letters, digits, hyphens (-), and underscores (_).
                     * @return Handler Name of the handler, which is in the “file name.handler name” form. Use periods (.) to separate a file name and function name. The file name and function name must start and end with a letter and can contain 2 to 60 characters, including letters, digits, hyphens (-), and underscores (_).
                     */
                    std::string GetHandler() const;

                    /**
                     * 设置Name of the handler, which is in the “file name.handler name” form. Use periods (.) to separate a file name and function name. The file name and function name must start and end with a letter and can contain 2 to 60 characters, including letters, digits, hyphens (-), and underscores (_).
                     * @param Handler Name of the handler, which is in the “file name.handler name” form. Use periods (.) to separate a file name and function name. The file name and function name must start and end with a letter and can contain 2 to 60 characters, including letters, digits, hyphens (-), and underscores (_).
                     */
                    void SetHandler(const std::string& _handler);

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取Function description. It can contain up to 1,000 characters including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     * @return Description Function description. It can contain up to 1,000 characters including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Function description. It can contain up to 1,000 characters including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     * @param Description Function description. It can contain up to 1,000 characters including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128–3,072 MB in increments of 128 MB
                     * @return MemorySize Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128–3,072 MB in increments of 128 MB
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128–3,072 MB in increments of 128 MB
                     * @param MemorySize Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128–3,072 MB in increments of 128 MB
                     */
                    void SetMemorySize(const int64_t& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取Maximum execution duration of function in seconds. Value range: 1–900 seconds. Default value: 3 seconds
                     * @return Timeout Maximum execution duration of function in seconds. Value range: 1–900 seconds. Default value: 3 seconds
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Maximum execution duration of function in seconds. Value range: 1–900 seconds. Default value: 3 seconds
                     * @param Timeout Maximum execution duration of function in seconds. Value range: 1–900 seconds. Default value: 3 seconds
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Function environment variable
                     * @return Environment Function environment variable
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 设置Function environment variable
                     * @param Environment Function environment variable
                     */
                    void SetEnvironment(const Environment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Golang1 and Java8. Default value: Python2.7
                     * @return Runtime Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Golang1 and Java8. Default value: Python2.7
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Golang1 and Java8. Default value: Python2.7
                     * @param Runtime Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Golang1 and Java8. Default value: Python2.7
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Function VPC configuration
                     * @return VpcConfig Function VPC configuration
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置Function VPC configuration
                     * @param VpcConfig Function VPC configuration
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace
                     * @param Namespace Function namespace
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Role bound to the function
                     * @return Role Role bound to the function
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Role bound to the function
                     * @param Role Role bound to the function
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取CLS Logset ID to which the function logs are shipped
                     * @return ClsLogsetId CLS Logset ID to which the function logs are shipped
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置CLS Logset ID to which the function logs are shipped
                     * @param ClsLogsetId CLS Logset ID to which the function logs are shipped
                     */
                    void SetClsLogsetId(const std::string& _clsLogsetId);

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取CLS Topic ID to which the function logs are shipped
                     * @return ClsTopicId CLS Topic ID to which the function logs are shipped
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置CLS Topic ID to which the function logs are shipped
                     * @param ClsTopicId CLS Topic ID to which the function logs are shipped
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取Function type. The default value is `Event`. Enter `Event` if you need to create a trigger function. Enter `HTTP` if you need to create an HTTP function service.
                     * @return Type Function type. The default value is `Event`. Enter `Event` if you need to create a trigger function. Enter `HTTP` if you need to create an HTTP function service.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Function type. The default value is `Event`. Enter `Event` if you need to create a trigger function. Enter `HTTP` if you need to create an HTTP function service.
                     * @param Type Function type. The default value is `Event`. Enter `Event` if you need to create a trigger function. Enter `HTTP` if you need to create an HTTP function service.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Code source, including ZipFile, Cos, Demo, TempCos, and Git. This field is required if the source is Git.
                     * @return CodeSource Code source, including ZipFile, Cos, Demo, TempCos, and Git. This field is required if the source is Git.
                     */
                    std::string GetCodeSource() const;

                    /**
                     * 设置Code source, including ZipFile, Cos, Demo, TempCos, and Git. This field is required if the source is Git.
                     * @param CodeSource Code source, including ZipFile, Cos, Demo, TempCos, and Git. This field is required if the source is Git.
                     */
                    void SetCodeSource(const std::string& _codeSource);

                    /**
                     * 判断参数 CodeSource 是否已赋值
                     * @return CodeSource 是否已赋值
                     */
                    bool CodeSourceHasBeenSet() const;

                    /**
                     * 获取List of layer versions to be associate with the function. Layers will be overwritten sequentially in the order in the list.
                     * @return Layers List of layer versions to be associate with the function. Layers will be overwritten sequentially in the order in the list.
                     */
                    std::vector<LayerVersionSimple> GetLayers() const;

                    /**
                     * 设置List of layer versions to be associate with the function. Layers will be overwritten sequentially in the order in the list.
                     * @param Layers List of layer versions to be associate with the function. Layers will be overwritten sequentially in the order in the list.
                     */
                    void SetLayers(const std::vector<LayerVersionSimple>& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     */
                    bool LayersHasBeenSet() const;

                    /**
                     * 获取Dead letter queue parameter
                     * @return DeadLetterConfig Dead letter queue parameter
                     */
                    DeadLetterConfig GetDeadLetterConfig() const;

                    /**
                     * 设置Dead letter queue parameter
                     * @param DeadLetterConfig Dead letter queue parameter
                     */
                    void SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig);

                    /**
                     * 判断参数 DeadLetterConfig 是否已赋值
                     * @return DeadLetterConfig 是否已赋值
                     */
                    bool DeadLetterConfigHasBeenSet() const;

                    /**
                     * 获取Public network access configuration
                     * @return PublicNetConfig Public network access configuration
                     */
                    PublicNetConfigIn GetPublicNetConfig() const;

                    /**
                     * 设置Public network access configuration
                     * @param PublicNetConfig Public network access configuration
                     */
                    void SetPublicNetConfig(const PublicNetConfigIn& _publicNetConfig);

                    /**
                     * 判断参数 PublicNetConfig 是否已赋值
                     * @return PublicNetConfig 是否已赋值
                     */
                    bool PublicNetConfigHasBeenSet() const;

                private:

                    /**
                     * Name of the new function. The name can contain 2 to 60 characters, including English letters, digits, hyphens (-), and underscores (_). The name must start with a letter and cannot end with a hyphen or underscore.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function code. Note: You cannot specify `Cos` and `ZipFile` at the same time.
                     */
                    Code m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Name of the handler, which is in the “file name.handler name” form. Use periods (.) to separate a file name and function name. The file name and function name must start and end with a letter and can contain 2 to 60 characters, including letters, digits, hyphens (-), and underscores (_).
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * Function description. It can contain up to 1,000 characters including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128–3,072 MB in increments of 128 MB
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * Maximum execution duration of function in seconds. Value range: 1–900 seconds. Default value: 3 seconds
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Function environment variable
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Golang1 and Java8. Default value: Python2.7
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Function VPC configuration
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Role bound to the function
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * CLS Logset ID to which the function logs are shipped
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * CLS Topic ID to which the function logs are shipped
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * Function type. The default value is `Event`. Enter `Event` if you need to create a trigger function. Enter `HTTP` if you need to create an HTTP function service.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Code source, including ZipFile, Cos, Demo, TempCos, and Git. This field is required if the source is Git.
                     */
                    std::string m_codeSource;
                    bool m_codeSourceHasBeenSet;

                    /**
                     * List of layer versions to be associate with the function. Layers will be overwritten sequentially in the order in the list.
                     */
                    std::vector<LayerVersionSimple> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * Dead letter queue parameter
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                    /**
                     * Public network access configuration
                     */
                    PublicNetConfigIn m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATEFUNCTIONREQUEST_H_
