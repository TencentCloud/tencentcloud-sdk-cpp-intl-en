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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Trigger.h>
#include <tencentcloud/scf/v20180416/model/VpcConfig.h>
#include <tencentcloud/scf/v20180416/model/Environment.h>
#include <tencentcloud/scf/v20180416/model/Tag.h>
#include <tencentcloud/scf/v20180416/model/EipOutConfig.h>
#include <tencentcloud/scf/v20180416/model/AccessInfo.h>
#include <tencentcloud/scf/v20180416/model/LayerVersionInfo.h>
#include <tencentcloud/scf/v20180416/model/DeadLetterConfig.h>
#include <tencentcloud/scf/v20180416/model/PublicNetConfigOut.h>
#include <tencentcloud/scf/v20180416/model/CfsConfig.h>
#include <tencentcloud/scf/v20180416/model/StatusReason.h>
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
                * GetFunction response structure.
                */
                class GetFunctionResponse : public AbstractModel
                {
                public:
                    GetFunctionResponse();
                    ~GetFunctionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Latest modification time of the function
                     * @return ModTime Latest modification time of the function
                     */
                    std::string GetModTime() const;

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Function code
                     * @return CodeInfo Function code
                     */
                    std::string GetCodeInfo() const;

                    /**
                     * 判断参数 CodeInfo 是否已赋值
                     * @return CodeInfo 是否已赋值
                     */
                    bool CodeInfoHasBeenSet() const;

                    /**
                     * 获取Function description
                     * @return Description Function description
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Function trigger list
                     * @return Triggers Function trigger list
                     */
                    std::vector<Trigger> GetTriggers() const;

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     */
                    bool TriggersHasBeenSet() const;

                    /**
                     * 获取Function entry
                     * @return Handler Function entry
                     */
                    std::string GetHandler() const;

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取Function code size
                     * @return CodeSize Function code size
                     */
                    int64_t GetCodeSize() const;

                    /**
                     * 判断参数 CodeSize 是否已赋值
                     * @return CodeSize 是否已赋值
                     */
                    bool CodeSizeHasBeenSet() const;

                    /**
                     * 获取Function timeout
                     * @return Timeout Function timeout
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Function version
                     * @return FunctionVersion Function version
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取Maximum available memory of the function
                     * @return MemorySize Maximum available memory of the function
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取Function running environment
                     * @return Runtime Function running environment
                     */
                    std::string GetRuntime() const;

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Function VPC
                     * @return VpcConfig Function VPC
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取Whether to use GPU
                     * @return UseGpu Whether to use GPU
                     */
                    std::string GetUseGpu() const;

                    /**
                     * 判断参数 UseGpu 是否已赋值
                     * @return UseGpu 是否已赋值
                     */
                    bool UseGpuHasBeenSet() const;

                    /**
                     * 获取Function environment variable
                     * @return Environment Function environment variable
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Whether the code is correct
                     * @return CodeResult Whether the code is correct
                     */
                    std::string GetCodeResult() const;

                    /**
                     * 判断参数 CodeResult 是否已赋值
                     * @return CodeResult 是否已赋值
                     */
                    bool CodeResultHasBeenSet() const;

                    /**
                     * 获取Code error information
                     * @return CodeError Code error information
                     */
                    std::string GetCodeError() const;

                    /**
                     * 判断参数 CodeError 是否已赋值
                     * @return CodeError 是否已赋值
                     */
                    bool CodeErrorHasBeenSet() const;

                    /**
                     * 获取Error code
                     * @return ErrNo Error code
                     */
                    int64_t GetErrNo() const;

                    /**
                     * 判断参数 ErrNo 是否已赋值
                     * @return ErrNo 是否已赋值
                     */
                    bool ErrNoHasBeenSet() const;

                    /**
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     */
                    std::string GetNamespace() const;

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
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Whether to install dependencies automatically
                     * @return InstallDependency Whether to install dependencies automatically
                     */
                    std::string GetInstallDependency() const;

                    /**
                     * 判断参数 InstallDependency 是否已赋值
                     * @return InstallDependency 是否已赋值
                     */
                    bool InstallDependencyHasBeenSet() const;

                    /**
                     * 获取Function status. For valid values and status change process, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1)
                     * @return Status Function status. For valid values and status change process, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1)
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status description
                     * @return StatusDesc Status description
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取CLS logset to which logs are shipped
                     * @return ClsLogsetId CLS logset to which logs are shipped
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取CLS Topic to which logs are shipped
                     * @return ClsTopicId CLS Topic to which logs are shipped
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取Function ID
                     * @return FunctionId Function ID
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Function tag list
                     * @return Tags Function tag list
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取EipConfig configuration
                     * @return EipConfig EipConfig configuration
                     */
                    EipOutConfig GetEipConfig() const;

                    /**
                     * 判断参数 EipConfig 是否已赋值
                     * @return EipConfig 是否已赋值
                     */
                    bool EipConfigHasBeenSet() const;

                    /**
                     * 获取Domain name information
                     * @return AccessInfo Domain name information
                     */
                    AccessInfo GetAccessInfo() const;

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取Function type. The value is `HTTP` or `Event`.
                     * @return Type Function type. The value is `HTTP` or `Event`.
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable L5
                     * @return L5Enable Whether to enable L5
                     */
                    std::string GetL5Enable() const;

                    /**
                     * 判断参数 L5Enable 是否已赋值
                     * @return L5Enable 是否已赋值
                     */
                    bool L5EnableHasBeenSet() const;

                    /**
                     * 获取Version information of a layer associated with a function
                     * @return Layers Version information of a layer associated with a function
                     */
                    std::vector<LayerVersionInfo> GetLayers() const;

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
                     * 判断参数 DeadLetterConfig 是否已赋值
                     * @return DeadLetterConfig 是否已赋值
                     */
                    bool DeadLetterConfigHasBeenSet() const;

                    /**
                     * 获取Function creation time
                     * @return AddTime Function creation time
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Public network access configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicNetConfig Public network access configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PublicNetConfigOut GetPublicNetConfig() const;

                    /**
                     * 判断参数 PublicNetConfig 是否已赋值
                     * @return PublicNetConfig 是否已赋值
                     */
                    bool PublicNetConfigHasBeenSet() const;

                    /**
                     * 获取Whether Ons is enabled
Note: This field may return null, indicating that no valid value was found.
                     * @return OnsEnable Whether Ons is enabled
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetOnsEnable() const;

                    /**
                     * 判断参数 OnsEnable 是否已赋值
                     * @return OnsEnable 是否已赋值
                     */
                    bool OnsEnableHasBeenSet() const;

                    /**
                     * 获取File system configuration parameter, which is used for the function to mount the file system
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CfsConfig File system configuration parameter, which is used for the function to mount the file system
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CfsConfig GetCfsConfig() const;

                    /**
                     * 判断参数 CfsConfig 是否已赋值
                     * @return CfsConfig 是否已赋值
                     */
                    bool CfsConfigHasBeenSet() const;

                    /**
                     * 获取Function billing status. For valid values, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E8.AE.A1.E8.B4.B9.E7.8A.B6.E6.80.81)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AvailableStatus Function billing status. For valid values, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E8.AE.A1.E8.B4.B9.E7.8A.B6.E6.80.81)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAvailableStatus() const;

                    /**
                     * 判断参数 AvailableStatus 是否已赋值
                     * @return AvailableStatus 是否已赋值
                     */
                    bool AvailableStatusHasBeenSet() const;

                    /**
                     * 获取Function version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Qualifier Function version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetQualifier() const;

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取Timeout period for function initialization
                     * @return InitTimeout Timeout period for function initialization
                     */
                    int64_t GetInitTimeout() const;

                    /**
                     * 判断参数 InitTimeout 是否已赋值
                     * @return InitTimeout 是否已赋值
                     */
                    bool InitTimeoutHasBeenSet() const;

                    /**
                     * 获取Cause of function failure
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusReasons Cause of function failure
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StatusReason> GetStatusReasons() const;

                    /**
                     * 判断参数 StatusReasons 是否已赋值
                     * @return StatusReasons 是否已赋值
                     */
                    bool StatusReasonsHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable asynchronization 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AsyncRunEnable Specifies whether to enable asynchronization 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAsyncRunEnable() const;

                    /**
                     * 判断参数 AsyncRunEnable 是否已赋值
                     * @return AsyncRunEnable 是否已赋值
                     */
                    bool AsyncRunEnableHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable event tracking
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TraceEnable Specifies whether to enable event tracking
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTraceEnable() const;

                    /**
                     * 判断参数 TraceEnable 是否已赋值
                     * @return TraceEnable 是否已赋值
                     */
                    bool TraceEnableHasBeenSet() const;

                    /**
                     * 获取Protocols supported by HTTP-triggered functions. It supports WebSockets for now.
Note: This field may return null, indicating that no valid value was found.
                     * @return ProtocolType Protocols supported by HTTP-triggered functions. It supports WebSockets for now.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取Parameters of the specified protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProtocolParams Parameters of the specified protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ProtocolParams GetProtocolParams() const;

                    /**
                     * 判断参数 ProtocolParams 是否已赋值
                     * @return ProtocolParams 是否已赋值
                     */
                    bool ProtocolParamsHasBeenSet() const;

                private:

                    /**
                     * Latest modification time of the function
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Function code
                     */
                    std::string m_codeInfo;
                    bool m_codeInfoHasBeenSet;

                    /**
                     * Function description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Function trigger list
                     */
                    std::vector<Trigger> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * Function entry
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * Function code size
                     */
                    int64_t m_codeSize;
                    bool m_codeSizeHasBeenSet;

                    /**
                     * Function timeout
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Function version
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * Maximum available memory of the function
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * Function running environment
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Function VPC
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * Whether to use GPU
                     */
                    std::string m_useGpu;
                    bool m_useGpuHasBeenSet;

                    /**
                     * Function environment variable
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Whether the code is correct
                     */
                    std::string m_codeResult;
                    bool m_codeResultHasBeenSet;

                    /**
                     * Code error information
                     */
                    std::string m_codeError;
                    bool m_codeErrorHasBeenSet;

                    /**
                     * Error code
                     */
                    int64_t m_errNo;
                    bool m_errNoHasBeenSet;

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
                     * Whether to install dependencies automatically
                     */
                    std::string m_installDependency;
                    bool m_installDependencyHasBeenSet;

                    /**
                     * Function status. For valid values and status change process, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * CLS logset to which logs are shipped
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * CLS Topic to which logs are shipped
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * Function ID
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Function tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * EipConfig configuration
                     */
                    EipOutConfig m_eipConfig;
                    bool m_eipConfigHasBeenSet;

                    /**
                     * Domain name information
                     */
                    AccessInfo m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * Function type. The value is `HTTP` or `Event`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to enable L5
                     */
                    std::string m_l5Enable;
                    bool m_l5EnableHasBeenSet;

                    /**
                     * Version information of a layer associated with a function
                     */
                    std::vector<LayerVersionInfo> m_layers;
                    bool m_layersHasBeenSet;

                    /**
                     * Information of a dead letter queue associated with a function
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                    /**
                     * Function creation time
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Public network access configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PublicNetConfigOut m_publicNetConfig;
                    bool m_publicNetConfigHasBeenSet;

                    /**
                     * Whether Ons is enabled
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_onsEnable;
                    bool m_onsEnableHasBeenSet;

                    /**
                     * File system configuration parameter, which is used for the function to mount the file system
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CfsConfig m_cfsConfig;
                    bool m_cfsConfigHasBeenSet;

                    /**
                     * Function billing status. For valid values, please see [here](https://intl.cloud.tencent.com/document/product/583/47175?from_cn_redirect=1#.E5.87.BD.E6.95.B0.E8.AE.A1.E8.B4.B9.E7.8A.B6.E6.80.81)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_availableStatus;
                    bool m_availableStatusHasBeenSet;

                    /**
                     * Function version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * Timeout period for function initialization
                     */
                    int64_t m_initTimeout;
                    bool m_initTimeoutHasBeenSet;

                    /**
                     * Cause of function failure
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StatusReason> m_statusReasons;
                    bool m_statusReasonsHasBeenSet;

                    /**
                     * Specifies whether to enable asynchronization 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * Specifies whether to enable event tracking
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                    /**
                     * Protocols supported by HTTP-triggered functions. It supports WebSockets for now.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * Parameters of the specified protocol
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ProtocolParams m_protocolParams;
                    bool m_protocolParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONRESPONSE_H_
