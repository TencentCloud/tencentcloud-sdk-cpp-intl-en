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
#include <tencentcloud/scf/v20180416/model/InstanceConcurrencyConfig.h>
#include <tencentcloud/scf/v20180416/model/IntranetConfigIn.h>


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
                     * 获取The function name to be modified
                     * @return FunctionName The function name to be modified
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置The function name to be modified
                     * @param _functionName The function name to be modified
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
                     * 获取Function description. Supports up to 1,000 English letters, digits, spaces, commas, and periods. Chinese is supported.
                     * @return Description Function description. Supports up to 1,000 English letters, digits, spaces, commas, and periods. Chinese is supported.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Function description. Supports up to 1,000 English letters, digits, spaces, commas, and periods. Chinese is supported.
                     * @param _description Function description. Supports up to 1,000 English letters, digits, spaces, commas, and periods. Chinese is supported.
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
                     * 获取Memory size of the function runtime. Default value: 128 MB. Selectable range: 64 MB, or 128 MB to 3072 MB in 128 MB increments.
                     * @return MemorySize Memory size of the function runtime. Default value: 128 MB. Selectable range: 64 MB, or 128 MB to 3072 MB in 128 MB increments.
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 设置Memory size of the function runtime. Default value: 128 MB. Selectable range: 64 MB, or 128 MB to 3072 MB in 128 MB increments.
                     * @param _memorySize Memory size of the function runtime. Default value: 128 MB. Selectable range: 64 MB, or 128 MB to 3072 MB in 128 MB increments.
                     * 
                     */
                    void SetMemorySize(const int64_t& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取Maximum execution time of the function, in seconds. Value range: 1-900 seconds. Default value: 3 seconds.
                     * @return Timeout Maximum execution time of the function, in seconds. Value range: 1-900 seconds. Default value: 3 seconds.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Maximum execution time of the function, in seconds. Value range: 1-900 seconds. Default value: 3 seconds.
                     * @param _timeout Maximum execution time of the function, in seconds. Value range: 1-900 seconds. Default value: 3 seconds.
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Runtime environment. It is specified upon creation and currently does not support modification.
                     * @return Runtime Runtime environment. It is specified upon creation and currently does not support modification.
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置Runtime environment. It is specified upon creation and currently does not support modification.
                     * @param _runtime Runtime environment. It is specified upon creation and currently does not support modification.
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Environment variable of the function
                     * @return Environment Environment variable of the function
                     * 
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 设置Environment variable of the function
                     * @param _environment Environment variable of the function
                     * 
                     */
                    void SetEnvironment(const Environment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Namespace of the function
Default value: default
                     * @return Namespace Namespace of the function
Default value: default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace of the function
Default value: default
                     * @param _namespace Namespace of the function
Default value: default
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
                     * 获取VPC configuration of the function
                     * @return VpcConfig VPC configuration of the function
                     * 
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置VPC configuration of the function
                     * @param _vpcConfig VPC configuration of the function
                     * 
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取Role bound to a function
                     * @return Role Role bound to a function
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Role bound to a function
                     * @param _role Role bound to a function
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取[Install dependency online](https://www.tencentcloud.com/document/product/583/37920?from_cn_redirect=1). TRUE indicates installation. Default value: FALSE. Only supported for Node.js functions.
                     * @return InstallDependency [Install dependency online](https://www.tencentcloud.com/document/product/583/37920?from_cn_redirect=1). TRUE indicates installation. Default value: FALSE. Only supported for Node.js functions.
                     * 
                     */
                    std::string GetInstallDependency() const;

                    /**
                     * 设置[Install dependency online](https://www.tencentcloud.com/document/product/583/37920?from_cn_redirect=1). TRUE indicates installation. Default value: FALSE. Only supported for Node.js functions.
                     * @param _installDependency [Install dependency online](https://www.tencentcloud.com/document/product/583/37920?from_cn_redirect=1). TRUE indicates installation. Default value: FALSE. Only supported for Node.js functions.
                     * 
                     */
                    void SetInstallDependency(const std::string& _installDependency);

                    /**
                     * 判断参数 InstallDependency 是否已赋值
                     * @return InstallDependency 是否已赋值
                     * 
                     */
                    bool InstallDependencyHasBeenSet() const;

                    /**
                     * 获取ID of the cls Log Set for log delivery
                     * @return ClsLogsetId ID of the cls Log Set for log delivery
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置ID of the cls Log Set for log delivery
                     * @param _clsLogsetId ID of the cls Log Set for log delivery
                     * 
                     */
                    void SetClsLogsetId(const std::string& _clsLogsetId);

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     * 
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取cls Topic ID for log delivery
                     * @return ClsTopicId cls Topic ID for log delivery
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置cls Topic ID for log delivery
                     * @param _clsTopicId cls Topic ID for log delivery
                     * 
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取Whether to release a new version synchronously when updating. Default value: FALSE, which means no new version is released.
                     * @return Publish Whether to release a new version synchronously when updating. Default value: FALSE, which means no new version is released.
                     * 
                     */
                    std::string GetPublish() const;

                    /**
                     * 设置Whether to release a new version synchronously when updating. Default value: FALSE, which means no new version is released.
                     * @param _publish Whether to release a new version synchronously when updating. Default value: FALSE, which means no new version is released.
                     * 
                     */
                    void SetPublish(const std::string& _publish);

                    /**
                     * 判断参数 Publish 是否已赋值
                     * @return Publish 是否已赋值
                     * 
                     */
                    bool PublishHasBeenSet() const;

                    /**
                     * 获取Whether L5 access capability is enabled. TRUE to enable, FALSE to shutdown.
                     * @return L5Enable Whether L5 access capability is enabled. TRUE to enable, FALSE to shutdown.
                     * 
                     */
                    std::string GetL5Enable() const;

                    /**
                     * 设置Whether L5 access capability is enabled. TRUE to enable, FALSE to shutdown.
                     * @param _l5Enable Whether L5 access capability is enabled. TRUE to enable, FALSE to shutdown.
                     * 
                     */
                    void SetL5Enable(const std::string& _l5Enable);

                    /**
                     * 判断参数 L5Enable 是否已赋值
                     * @return L5Enable 是否已赋值
                     * 
                     */
                    bool L5EnableHasBeenSet() const;

                    /**
                     * 获取List of layer versions to associate with the function. The layer versions overwrite each other sequentially in the order in the list.
                     * @return Layers List of layer versions to associate with the function. The layer versions overwrite each other sequentially in the order in the list.
                     * 
                     */
                    std::vector<LayerVersionSimple> GetLayers() const;

                    /**
                     * 设置List of layer versions to associate with the function. The layer versions overwrite each other sequentially in the order in the list.
                     * @param _layers List of layer versions to associate with the function. The layer versions overwrite each other sequentially in the order in the list.
                     * 
                     */
                    void SetLayers(const std::vector<LayerVersionSimple>& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     * 
                     */
                    bool LayersHasBeenSet() const;

                    /**
                     * 获取Dead letter queue information associated with the function
                     * @return DeadLetterConfig Dead letter queue information associated with the function
                     * 
                     */
                    DeadLetterConfig GetDeadLetterConfig() const;

                    /**
                     * 设置Dead letter queue information associated with the function
                     * @param _deadLetterConfig Dead letter queue information associated with the function
                     * 
                     */
                    void SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig);

                    /**
                     * 判断参数 DeadLetterConfig 是否已赋值
                     * @return DeadLetterConfig 是否已赋值
                     * 
                     */
                    bool DeadLetterConfigHasBeenSet() const;

                    /**
                     * 获取Public network access configuration
                     * @return PublicNetConfig Public network access configuration
                     * 
                     */
                    PublicNetConfigIn GetPublicNetConfig() const;

                    /**
                     * 设置Public network access configuration
                     * @param _publicNetConfig Public network access configuration
                     * 
                     */
                    void SetPublicNetConfig(const PublicNetConfigIn& _publicNetConfig);

                    /**
                     * 判断参数 PublicNetConfig 是否已赋值
                     * @return PublicNetConfig 是否已赋值
                     * 
                     */
                    bool PublicNetConfigHasBeenSet() const;

                    /**
                     * 获取File system configuration parameters for binding a CFS file system in SCF
                     * @return CfsConfig File system configuration parameters for binding a CFS file system in SCF
                     * 
                     */
                    CfsConfig GetCfsConfig() const;

                    /**
                     * 设置File system configuration parameters for binding a CFS file system in SCF
                     * @param _cfsConfig File system configuration parameters for binding a CFS file system in SCF
                     * 
                     */
                    void SetCfsConfig(const CfsConfig& _cfsConfig);

                    /**
                     * 判断参数 CfsConfig 是否已赋值
                     * @return CfsConfig 是否已赋值
                     * 
                     */
                    bool CfsConfigHasBeenSet() const;

                    /**
                     * 获取Function initialization timeout period
                     * @return InitTimeout Function initialization timeout period
                     * 
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 设置Function initialization timeout period
                     * @param _initTimeout Function initialization timeout period
                     * 
                     */
                    void SetInitTimeout(const int64_t& _initTimeout);

                    /**
                     * 判断参数 InitTimeout 是否已赋值
                     * @return InitTimeout 是否已赋值
                     * 
                     */
                    bool InitTimeoutHasBeenSet() const;

                    /**
                     * 获取Configure ProtocolType access protocol for an HTTP function. Parameters configurable for the current protocol.
                     * @return ProtocolParams Configure ProtocolType access protocol for an HTTP function. Parameters configurable for the current protocol.
                     * 
                     */
                    ProtocolParams GetProtocolParams() const;

                    /**
                     * 设置Configure ProtocolType access protocol for an HTTP function. Parameters configurable for the current protocol.
                     * @param _protocolParams Configure ProtocolType access protocol for an HTTP function. Parameters configurable for the current protocol.
                     * 
                     */
                    void SetProtocolParams(const ProtocolParams& _protocolParams);

                    /**
                     * 判断参数 ProtocolParams 是否已赋值
                     * @return ProtocolParams 是否已赋值
                     * 
                     */
                    bool ProtocolParamsHasBeenSet() const;

                    /**
                     * 获取Single-instance multi-concurrency configuration. Supports only Web functions.
                     * @return InstanceConcurrencyConfig Single-instance multi-concurrency configuration. Supports only Web functions.
                     * 
                     */
                    InstanceConcurrencyConfig GetInstanceConcurrencyConfig() const;

                    /**
                     * 设置Single-instance multi-concurrency configuration. Supports only Web functions.
                     * @param _instanceConcurrencyConfig Single-instance multi-concurrency configuration. Supports only Web functions.
                     * 
                     */
                    void SetInstanceConcurrencyConfig(const InstanceConcurrencyConfig& _instanceConcurrencyConfig);

                    /**
                     * 判断参数 InstanceConcurrencyConfig 是否已赋值
                     * @return InstanceConcurrencyConfig 是否已赋值
                     * 
                     */
                    bool InstanceConcurrencyConfigHasBeenSet() const;

                    /**
                     * 获取Whether the Dns caching capability is enabled. Supports only the EVENT function. Defaults to FALSE. TRUE to enable, FALSE to shutdown.
                     * @return DnsCache Whether the Dns caching capability is enabled. Supports only the EVENT function. Defaults to FALSE. TRUE to enable, FALSE to shutdown.
                     * 
                     */
                    std::string GetDnsCache() const;

                    /**
                     * 设置Whether the Dns caching capability is enabled. Supports only the EVENT function. Defaults to FALSE. TRUE to enable, FALSE to shutdown.
                     * @param _dnsCache Whether the Dns caching capability is enabled. Supports only the EVENT function. Defaults to FALSE. TRUE to enable, FALSE to shutdown.
                     * 
                     */
                    void SetDnsCache(const std::string& _dnsCache);

                    /**
                     * 判断参数 DnsCache 是否已赋值
                     * @return DnsCache 是否已赋值
                     * 
                     */
                    bool DnsCacheHasBeenSet() const;

                    /**
                     * 获取Private network access configuration
                     * @return IntranetConfig Private network access configuration
                     * 
                     */
                    IntranetConfigIn GetIntranetConfig() const;

                    /**
                     * 设置Private network access configuration
                     * @param _intranetConfig Private network access configuration
                     * 
                     */
                    void SetIntranetConfig(const IntranetConfigIn& _intranetConfig);

                    /**
                     * 判断参数 IntranetConfig 是否已赋值
                     * @return IntranetConfig 是否已赋值
                     * 
                     */
                    bool IntranetConfigHasBeenSet() const;

                    /**
                     * 获取Ignorable system log reporting
                     * @return IgnoreSysLog Ignorable system log reporting
                     * 
                     */
                    bool GetIgnoreSysLog() const;

                    /**
                     * 设置Ignorable system log reporting
                     * @param _ignoreSysLog Ignorable system log reporting
                     * 
                     */
                    void SetIgnoreSysLog(const bool& _ignoreSysLog);

                    /**
                     * 判断参数 IgnoreSysLog 是否已赋值
                     * @return IgnoreSysLog 是否已赋值
                     * 
                     */
                    bool IgnoreSysLogHasBeenSet() const;

                private:

                    /**
                     * The function name to be modified
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function description. Supports up to 1,000 English letters, digits, spaces, commas, and periods. Chinese is supported.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Memory size of the function runtime. Default value: 128 MB. Selectable range: 64 MB, or 128 MB to 3072 MB in 128 MB increments.
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * Maximum execution time of the function, in seconds. Value range: 1-900 seconds. Default value: 3 seconds.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Runtime environment. It is specified upon creation and currently does not support modification.
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Environment variable of the function
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Namespace of the function
Default value: default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * VPC configuration of the function
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * Role bound to a function
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * [Install dependency online](https://www.tencentcloud.com/document/product/583/37920?from_cn_redirect=1). TRUE indicates installation. Default value: FALSE. Only supported for Node.js functions.
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * ID of the cls Log Set for log delivery
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * cls Topic ID for log delivery
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * Whether to release a new version synchronously when updating. Default value: FALSE, which means no new version is released.
                     */
                    std::string m_publish;
                    bool m_publishHasBeenSet;

                    /**
                     * Whether L5 access capability is enabled. TRUE to enable, FALSE to shutdown.
                     */
                    std::string m_l5Enable;
                    bool m_l5EnableHasBeenSet;

                    /**
                     * List of layer versions to associate with the function. The layer versions overwrite each other sequentially in the order in the list.
                     */
                    std::vector<LayerVersionSimple> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * Dead letter queue information associated with the function
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                    /**
                     * Public network access configuration
                     */
                    PublicNetConfigIn m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                    /**
                     * File system configuration parameters for binding a CFS file system in SCF
                     */
                    CfsConfig m_cfsConfig;
                    bool m_cfsConfigHasBeenSet;

                    /**
                     * Function initialization timeout period
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

                    /**
                     * Configure ProtocolType access protocol for an HTTP function. Parameters configurable for the current protocol.
                     */
                    ProtocolParams m_protocolParams;
                    bool m_protocolParamsHasBeenSet;

                    /**
                     * Single-instance multi-concurrency configuration. Supports only Web functions.
                     */
                    InstanceConcurrencyConfig m_instanceConcurrencyConfig;
                    bool m_instanceConcurrencyConfigHasBeenSet;

                    /**
                     * Whether the Dns caching capability is enabled. Supports only the EVENT function. Defaults to FALSE. TRUE to enable, FALSE to shutdown.
                     */
                    std::string m_dnsCache;
                    bool m_dnsCacheHasBeenSet;

                    /**
                     * Private network access configuration
                     */
                    IntranetConfigIn m_intranetConfig;
                    bool m_intranetConfigHasBeenSet;

                    /**
                     * Ignorable system log reporting
                     */
                    bool m_ignoreSysLog;
                    bool m_ignoreSysLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCONFIGURATIONREQUEST_H_
