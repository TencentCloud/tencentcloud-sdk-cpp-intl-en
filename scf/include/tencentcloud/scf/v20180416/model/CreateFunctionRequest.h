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
#include <tencentcloud/scf/v20180416/model/CfsConfig.h>
#include <tencentcloud/scf/v20180416/model/Tag.h>
#include <tencentcloud/scf/v20180416/model/ProtocolParams.h>


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
                     * 获取Function code. Note: `COS`, `ZipFile`, and `DemoId` cannot be specified at the same time.
                     * @return Code Function code. Note: `COS`, `ZipFile`, and `DemoId` cannot be specified at the same time.
                     */
                    Code GetCode() const;

                    /**
                     * 设置Function code. Note: `COS`, `ZipFile`, and `DemoId` cannot be specified at the same time.
                     * @param Code Function code. Note: `COS`, `ZipFile`, and `DemoId` cannot be specified at the same time.
                     */
                    void SetCode(const Code& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Function handler name. It supports the format of "file name.handler name" where the file name and handler name are separated with a "." (for Java, it is in the format of "package name.class name::handler name"). File and handler names can contain 2–60 letters, digits, underscores, and dashes and must start and end with letters
                     * @return Handler Function handler name. It supports the format of "file name.handler name" where the file name and handler name are separated with a "." (for Java, it is in the format of "package name.class name::handler name"). File and handler names can contain 2–60 letters, digits, underscores, and dashes and must start and end with letters
                     */
                    std::string GetHandler() const;

                    /**
                     * 设置Function handler name. It supports the format of "file name.handler name" where the file name and handler name are separated with a "." (for Java, it is in the format of "package name.class name::handler name"). File and handler names can contain 2–60 letters, digits, underscores, and dashes and must start and end with letters
                     * @param Handler Function handler name. It supports the format of "file name.handler name" where the file name and handler name are separated with a "." (for Java, it is in the format of "package name.class name::handler name"). File and handler names can contain 2–60 letters, digits, underscores, and dashes and must start and end with letters
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
                     * 获取Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3072 MB in increments of 128 MB
                     * @return MemorySize Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3072 MB in increments of 128 MB
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3072 MB in increments of 128 MB
                     * @param MemorySize Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3072 MB in increments of 128 MB
                     */
                    void SetMemorySize(const int64_t& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取Maximum execution duration of function in seconds. Value range: 1-900 seconds. Default value: 3 seconds
                     * @return Timeout Maximum execution duration of function in seconds. Value range: 1-900 seconds. Default value: 3 seconds
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Maximum execution duration of function in seconds. Value range: 1-900 seconds. Default value: 3 seconds
                     * @param Timeout Maximum execution duration of function in seconds. Value range: 1-900 seconds. Default value: 3 seconds
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
                     * 获取Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, Php5, Php7, Go1, Java8, CustomRuntime. Default value: Python2.7
                     * @return Runtime Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, Php5, Php7, Go1, Java8, CustomRuntime. Default value: Python2.7
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, Php5, Php7, Go1, Java8, CustomRuntime. Default value: Python2.7
                     * @param Runtime Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, Php5, Php7, Go1, Java8, CustomRuntime. Default value: Python2.7
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
                     * 获取Specifies whether to [install dependency online](https://intl.cloud.tencent.com/document/product/583/37920?from_cn_redirect=1). `TRUE`: yes. Default to `FALSE`. It is only available for Node.js functions.
                     * @return InstallDependency Specifies whether to [install dependency online](https://intl.cloud.tencent.com/document/product/583/37920?from_cn_redirect=1). `TRUE`: yes. Default to `FALSE`. It is only available for Node.js functions.
                     */
                    std::string GetInstallDependency() const;

                    /**
                     * 设置Specifies whether to [install dependency online](https://intl.cloud.tencent.com/document/product/583/37920?from_cn_redirect=1). `TRUE`: yes. Default to `FALSE`. It is only available for Node.js functions.
                     * @param InstallDependency Specifies whether to [install dependency online](https://intl.cloud.tencent.com/document/product/583/37920?from_cn_redirect=1). `TRUE`: yes. Default to `FALSE`. It is only available for Node.js functions.
                     */
                    void SetInstallDependency(const std::string& _installDependency);

                    /**
                     * 判断参数 InstallDependency 是否已赋值
                     * @return InstallDependency 是否已赋值
                     */
                    bool InstallDependencyHasBeenSet() const;

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
                     * 获取Code source. Valid values: ZipFile, Cos, Demo
                     * @return CodeSource Code source. Valid values: ZipFile, Cos, Demo
                     */
                    std::string GetCodeSource() const;

                    /**
                     * 设置Code source. Valid values: ZipFile, Cos, Demo
                     * @param CodeSource Code source. Valid values: ZipFile, Cos, Demo
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

                    /**
                     * 获取File system configuration parameter, which is used for the function to mount the file system
                     * @return CfsConfig File system configuration parameter, which is used for the function to mount the file system
                     */
                    CfsConfig GetCfsConfig() const;

                    /**
                     * 设置File system configuration parameter, which is used for the function to mount the file system
                     * @param CfsConfig File system configuration parameter, which is used for the function to mount the file system
                     */
                    void SetCfsConfig(const CfsConfig& _cfsConfig);

                    /**
                     * 判断参数 CfsConfig 是否已赋值
                     * @return CfsConfig 是否已赋值
                     */
                    bool CfsConfigHasBeenSet() const;

                    /**
                     * 获取The function initialization timeout period. It defaults to 65s for general cases and 90s for image deployment functions.
                     * @return InitTimeout The function initialization timeout period. It defaults to 65s for general cases and 90s for image deployment functions.
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 设置The function initialization timeout period. It defaults to 65s for general cases and 90s for image deployment functions.
                     * @param InitTimeout The function initialization timeout period. It defaults to 65s for general cases and 90s for image deployment functions.
                     */
                    void SetInitTimeout(const int64_t& _initTimeout);

                    /**
                     * 判断参数 InitTimeout 是否已赋值
                     * @return InitTimeout 是否已赋值
                     */
                    bool InitTimeoutHasBeenSet() const;

                    /**
                     * 获取Tag parameter of the function. It is an array of key-value pairs.
                     * @return Tags Tag parameter of the function. It is an array of key-value pairs.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag parameter of the function. It is an array of key-value pairs.
                     * @param Tags Tag parameter of the function. It is an array of key-value pairs.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether to enable the async attribute. TRUE: yes; FALSE: no
                     * @return AsyncRunEnable Whether to enable the async attribute. TRUE: yes; FALSE: no
                     */
                    std::string GetAsyncRunEnable() const;

                    /**
                     * 设置Whether to enable the async attribute. TRUE: yes; FALSE: no
                     * @param AsyncRunEnable Whether to enable the async attribute. TRUE: yes; FALSE: no
                     */
                    void SetAsyncRunEnable(const std::string& _asyncRunEnable);

                    /**
                     * 判断参数 AsyncRunEnable 是否已赋值
                     * @return AsyncRunEnable 是否已赋值
                     */
                    bool AsyncRunEnableHasBeenSet() const;

                    /**
                     * 获取Whether to enable event tracking. TRUE: yes; FALSE: no
                     * @return TraceEnable Whether to enable event tracking. TRUE: yes; FALSE: no
                     */
                    std::string GetTraceEnable() const;

                    /**
                     * 设置Whether to enable event tracking. TRUE: yes; FALSE: no
                     * @param TraceEnable Whether to enable event tracking. TRUE: yes; FALSE: no
                     */
                    void SetTraceEnable(const std::string& _traceEnable);

                    /**
                     * 判断参数 TraceEnable 是否已赋值
                     * @return TraceEnable 是否已赋值
                     */
                    bool TraceEnableHasBeenSet() const;

                    /**
                     * 获取Protocols supported by HTTP-triggered functions. Valid value: `WS` (WebSockets)
                     * @return ProtocolType Protocols supported by HTTP-triggered functions. Valid value: `WS` (WebSockets)
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置Protocols supported by HTTP-triggered functions. Valid value: `WS` (WebSockets)
                     * @param ProtocolType Protocols supported by HTTP-triggered functions. Valid value: `WS` (WebSockets)
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取Parameters of the specified protocol
                     * @return ProtocolParams Parameters of the specified protocol
                     */
                    ProtocolParams GetProtocolParams() const;

                    /**
                     * 设置Parameters of the specified protocol
                     * @param ProtocolParams Parameters of the specified protocol
                     */
                    void SetProtocolParams(const ProtocolParams& _protocolParams);

                    /**
                     * 判断参数 ProtocolParams 是否已赋值
                     * @return ProtocolParams 是否已赋值
                     */
                    bool ProtocolParamsHasBeenSet() const;

                private:

                    /**
                     * Name of the new function. The name can contain 2 to 60 characters, including English letters, digits, hyphens (-), and underscores (_). The name must start with a letter and cannot end with a hyphen or underscore.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function code. Note: `COS`, `ZipFile`, and `DemoId` cannot be specified at the same time.
                     */
                    Code m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Function handler name. It supports the format of "file name.handler name" where the file name and handler name are separated with a "." (for Java, it is in the format of "package name.class name::handler name"). File and handler names can contain 2–60 letters, digits, underscores, and dashes and must start and end with letters
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * Function description. It can contain up to 1,000 characters including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3072 MB in increments of 128 MB
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * Maximum execution duration of function in seconds. Value range: 1-900 seconds. Default value: 3 seconds
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Function environment variable
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, Php5, Php7, Go1, Java8, CustomRuntime. Default value: Python2.7
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
                     * Specifies whether to [install dependency online](https://intl.cloud.tencent.com/document/product/583/37920?from_cn_redirect=1). `TRUE`: yes. Default to `FALSE`. It is only available for Node.js functions.
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

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
                     * Code source. Valid values: ZipFile, Cos, Demo
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

                    /**
                     * File system configuration parameter, which is used for the function to mount the file system
                     */
                    CfsConfig m_cfsConfig;
                    bool m_cfsConfigHasBeenSet;

                    /**
                     * The function initialization timeout period. It defaults to 65s for general cases and 90s for image deployment functions.
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

                    /**
                     * Tag parameter of the function. It is an array of key-value pairs.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to enable the async attribute. TRUE: yes; FALSE: no
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * Whether to enable event tracking. TRUE: yes; FALSE: no
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                    /**
                     * Protocols supported by HTTP-triggered functions. Valid value: `WS` (WebSockets)
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * Parameters of the specified protocol
                     */
                    ProtocolParams m_protocolParams;
                    bool m_protocolParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CREATEFUNCTIONREQUEST_H_
