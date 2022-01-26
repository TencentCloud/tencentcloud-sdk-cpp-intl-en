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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Environment.h>
#include <tencentcloud/scf/v20180416/model/VpcConfig.h>
#include <tencentcloud/scf/v20180416/model/LayerVersionSimple.h>
#include <tencentcloud/scf/v20180416/model/DeadLetterConfig.h>
#include <tencentcloud/scf/v20180416/model/PublicNetConfigIn.h>
#include <tencentcloud/scf/v20180416/model/CfsConfig.h>
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
                * UpdateFunctionConfiguration request structure.
                */
                class UpdateFunctionConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateFunctionConfigurationRequest();
                    ~UpdateFunctionConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the function to be modified
                     * @return FunctionName Name of the function to be modified
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Name of the function to be modified
                     * @param FunctionName Name of the function to be modified
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function description. It can contain up to 1,000 characters, including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     * @return Description Function description. It can contain up to 1,000 characters, including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Function description. It can contain up to 1,000 characters, including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     * @param Description Function description. It can contain up to 1,000 characters, including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3,072 MB in increments of 128 MB.
                     * @return MemorySize Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3,072 MB in increments of 128 MB.
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3,072 MB in increments of 128 MB.
                     * @param MemorySize Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3,072 MB in increments of 128 MB.
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
                     * 获取Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Go1, Java8, CustomRuntime
                     * @return Runtime Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Go1, Java8, CustomRuntime
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Go1, Java8, CustomRuntime
                     * @param Runtime Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Go1, Java8, CustomRuntime
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

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
                     * 获取CLS logset ID to which logs are shipped
                     * @return ClsLogsetId CLS logset ID to which logs are shipped
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置CLS logset ID to which logs are shipped
                     * @param ClsLogsetId CLS logset ID to which logs are shipped
                     */
                    void SetClsLogsetId(const std::string& _clsLogsetId);

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取CLS Topic ID to which logs are shipped
                     * @return ClsTopicId CLS Topic ID to which logs are shipped
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置CLS Topic ID to which logs are shipped
                     * @param ClsTopicId CLS Topic ID to which logs are shipped
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取It specifies whether to synchronously publish a new version during the update. The default value is `FALSE`, indicating not to publish a new version
                     * @return Publish It specifies whether to synchronously publish a new version during the update. The default value is `FALSE`, indicating not to publish a new version
                     */
                    std::string GetPublish() const;

                    /**
                     * 设置It specifies whether to synchronously publish a new version during the update. The default value is `FALSE`, indicating not to publish a new version
                     * @param Publish It specifies whether to synchronously publish a new version during the update. The default value is `FALSE`, indicating not to publish a new version
                     */
                    void SetPublish(const std::string& _publish);

                    /**
                     * 判断参数 Publish 是否已赋值
                     * @return Publish 是否已赋值
                     */
                    bool PublishHasBeenSet() const;

                    /**
                     * 获取Whether to enable L5 access. TRUE: enable; FALSE: not enable
                     * @return L5Enable Whether to enable L5 access. TRUE: enable; FALSE: not enable
                     */
                    std::string GetL5Enable() const;

                    /**
                     * 设置Whether to enable L5 access. TRUE: enable; FALSE: not enable
                     * @param L5Enable Whether to enable L5 access. TRUE: enable; FALSE: not enable
                     */
                    void SetL5Enable(const std::string& _l5Enable);

                    /**
                     * 判断参数 L5Enable 是否已赋值
                     * @return L5Enable 是否已赋值
                     */
                    bool L5EnableHasBeenSet() const;

                    /**
                     * 获取List of layer versions that bound with the function. Files with the same name will be overridden by the bound layer versions according to the ascending order in the list. 
                     * @return Layers List of layer versions that bound with the function. Files with the same name will be overridden by the bound layer versions according to the ascending order in the list. 
                     */
                    std::vector<LayerVersionSimple> GetLayers() const;

                    /**
                     * 设置List of layer versions that bound with the function. Files with the same name will be overridden by the bound layer versions according to the ascending order in the list. 
                     * @param Layers List of layer versions that bound with the function. Files with the same name will be overridden by the bound layer versions according to the ascending order in the list. 
                     */
                    void SetLayers(const std::vector<LayerVersionSimple>& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     */
                    bool LayersHasBeenSet() const;

                    /**
                     * 获取Information of a dead letter queue associated with a function
                     * @return DeadLetterConfig Information of a dead letter queue associated with a function
                     */
                    DeadLetterConfig GetDeadLetterConfig() const;

                    /**
                     * 设置Information of a dead letter queue associated with a function
                     * @param DeadLetterConfig Information of a dead letter queue associated with a function
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
                     * 获取File system configuration input parameter, which is used for the function to bind the CFS file system
                     * @return CfsConfig File system configuration input parameter, which is used for the function to bind the CFS file system
                     */
                    CfsConfig GetCfsConfig() const;

                    /**
                     * 设置File system configuration input parameter, which is used for the function to bind the CFS file system
                     * @param CfsConfig File system configuration input parameter, which is used for the function to bind the CFS file system
                     */
                    void SetCfsConfig(const CfsConfig& _cfsConfig);

                    /**
                     * 判断参数 CfsConfig 是否已赋值
                     * @return CfsConfig 是否已赋值
                     */
                    bool CfsConfigHasBeenSet() const;

                    /**
                     * 获取The function initialization timeout period
                     * @return InitTimeout The function initialization timeout period
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 设置The function initialization timeout period
                     * @param InitTimeout The function initialization timeout period
                     */
                    void SetInitTimeout(const int64_t& _initTimeout);

                    /**
                     * 判断参数 InitTimeout 是否已赋值
                     * @return InitTimeout 是否已赋值
                     */
                    bool InitTimeoutHasBeenSet() const;

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
                     * Name of the function to be modified
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function description. It can contain up to 1,000 characters, including letters, digits, spaces, commas (,), periods (.), and Chinese characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Memory size available for function during execution. Default value: 128 MB. Value range: 64 or 128-3,072 MB in increments of 128 MB.
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * Maximum execution duration of function in seconds. Value range: 1-900 seconds. Default value: 3 seconds
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Function runtime environment. Valid values: Python2.7, Python3.6, Nodejs6.10, Nodejs8.9, Nodejs10.15, Nodejs12.16, PHP5, PHP7, Go1, Java8, CustomRuntime
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Function environment variable
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function VPC configuration
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

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
                     * CLS logset ID to which logs are shipped
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * CLS Topic ID to which logs are shipped
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * It specifies whether to synchronously publish a new version during the update. The default value is `FALSE`, indicating not to publish a new version
                     */
                    std::string m_publish;
                    bool m_publishHasBeenSet;

                    /**
                     * Whether to enable L5 access. TRUE: enable; FALSE: not enable
                     */
                    std::string m_l5Enable;
                    bool m_l5EnableHasBeenSet;

                    /**
                     * List of layer versions that bound with the function. Files with the same name will be overridden by the bound layer versions according to the ascending order in the list. 
                     */
                    std::vector<LayerVersionSimple> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * Information of a dead letter queue associated with a function
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                    /**
                     * Public network access configuration
                     */
                    PublicNetConfigIn m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                    /**
                     * File system configuration input parameter, which is used for the function to bind the CFS file system
                     */
                    CfsConfig m_cfsConfig;
                    bool m_cfsConfigHasBeenSet;

                    /**
                     * The function initialization timeout period
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

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

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
