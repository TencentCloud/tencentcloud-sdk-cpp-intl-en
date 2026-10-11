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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/OutterResource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * EMR product configuration.
                */
                class EmrProductConfigOutter : public AbstractModel
                {
                public:
                    EmrProductConfigOutter();
                    ~EmrProductConfigOutter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Software information.
                     * @return SoftInfo Software information.
                     * 
                     */
                    std::vector<std::string> GetSoftInfo() const;

                    /**
                     * 设置Software information.
                     * @param _softInfo Software information.
                     * 
                     */
                    void SetSoftInfo(const std::vector<std::string>& _softInfo);

                    /**
                     * 判断参数 SoftInfo 是否已赋值
                     * @return SoftInfo 是否已赋值
                     * 
                     */
                    bool SoftInfoHasBeenSet() const;

                    /**
                     * 获取Number of Master nodes.
                     * @return MasterNodeSize Number of Master nodes.
                     * 
                     */
                    int64_t GetMasterNodeSize() const;

                    /**
                     * 设置Number of Master nodes.
                     * @param _masterNodeSize Number of Master nodes.
                     * 
                     */
                    void SetMasterNodeSize(const int64_t& _masterNodeSize);

                    /**
                     * 判断参数 MasterNodeSize 是否已赋值
                     * @return MasterNodeSize 是否已赋值
                     * 
                     */
                    bool MasterNodeSizeHasBeenSet() const;

                    /**
                     * 获取Number of Core nodes.
                     * @return CoreNodeSize Number of Core nodes.
                     * 
                     */
                    int64_t GetCoreNodeSize() const;

                    /**
                     * 设置Number of Core nodes.
                     * @param _coreNodeSize Number of Core nodes.
                     * 
                     */
                    void SetCoreNodeSize(const int64_t& _coreNodeSize);

                    /**
                     * 判断参数 CoreNodeSize 是否已赋值
                     * @return CoreNodeSize 是否已赋值
                     * 
                     */
                    bool CoreNodeSizeHasBeenSet() const;

                    /**
                     * 获取Number of Task nodes.
                     * @return TaskNodeSize Number of Task nodes.
                     * 
                     */
                    int64_t GetTaskNodeSize() const;

                    /**
                     * 设置Number of Task nodes.
                     * @param _taskNodeSize Number of Task nodes.
                     * 
                     */
                    void SetTaskNodeSize(const int64_t& _taskNodeSize);

                    /**
                     * 判断参数 TaskNodeSize 是否已赋值
                     * @return TaskNodeSize 是否已赋值
                     * 
                     */
                    bool TaskNodeSizeHasBeenSet() const;

                    /**
                     * 获取Number of Common nodes.
                     * @return ComNodeSize Number of Common nodes.
                     * 
                     */
                    int64_t GetComNodeSize() const;

                    /**
                     * 设置Number of Common nodes.
                     * @param _comNodeSize Number of Common nodes.
                     * 
                     */
                    void SetComNodeSize(const int64_t& _comNodeSize);

                    /**
                     * 判断参数 ComNodeSize 是否已赋值
                     * @return ComNodeSize 是否已赋值
                     * 
                     */
                    bool ComNodeSizeHasBeenSet() const;

                    /**
                     * 获取Master node resources.
                     * @return MasterResource Master node resources.
                     * 
                     */
                    OutterResource GetMasterResource() const;

                    /**
                     * 设置Master node resources.
                     * @param _masterResource Master node resources.
                     * 
                     */
                    void SetMasterResource(const OutterResource& _masterResource);

                    /**
                     * 判断参数 MasterResource 是否已赋值
                     * @return MasterResource 是否已赋值
                     * 
                     */
                    bool MasterResourceHasBeenSet() const;

                    /**
                     * 获取Core node resources.
                     * @return CoreResource Core node resources.
                     * 
                     */
                    OutterResource GetCoreResource() const;

                    /**
                     * 设置Core node resources.
                     * @param _coreResource Core node resources.
                     * 
                     */
                    void SetCoreResource(const OutterResource& _coreResource);

                    /**
                     * 判断参数 CoreResource 是否已赋值
                     * @return CoreResource 是否已赋值
                     * 
                     */
                    bool CoreResourceHasBeenSet() const;

                    /**
                     * 获取Task node resources.
                     * @return TaskResource Task node resources.
                     * 
                     */
                    OutterResource GetTaskResource() const;

                    /**
                     * 设置Task node resources.
                     * @param _taskResource Task node resources.
                     * 
                     */
                    void SetTaskResource(const OutterResource& _taskResource);

                    /**
                     * 判断参数 TaskResource 是否已赋值
                     * @return TaskResource 是否已赋值
                     * 
                     */
                    bool TaskResourceHasBeenSet() const;

                    /**
                     * 获取Common node resources.
                     * @return ComResource Common node resources.
                     * 
                     */
                    OutterResource GetComResource() const;

                    /**
                     * 设置Common node resources.
                     * @param _comResource Common node resources.
                     * 
                     */
                    void SetComResource(const OutterResource& _comResource);

                    /**
                     * 判断参数 ComResource 是否已赋值
                     * @return ComResource 是否已赋值
                     * 
                     */
                    bool ComResourceHasBeenSet() const;

                    /**
                     * 获取Whether COS is used.
                     * @return OnCos Whether COS is used.
                     * 
                     */
                    bool GetOnCos() const;

                    /**
                     * 设置Whether COS is used.
                     * @param _onCos Whether COS is used.
                     * 
                     */
                    void SetOnCos(const bool& _onCos);

                    /**
                     * 判断参数 OnCos 是否已赋值
                     * @return OnCos 是否已赋值
                     * 
                     */
                    bool OnCosHasBeenSet() const;

                    /**
                     * 获取Charge type.
                     * @return ChargeType Charge type.
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Charge type.
                     * @param _chargeType Charge type.
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Number of Router nodes.
                     * @return RouterNodeSize Number of Router nodes.
                     * 
                     */
                    int64_t GetRouterNodeSize() const;

                    /**
                     * 设置Number of Router nodes.
                     * @param _routerNodeSize Number of Router nodes.
                     * 
                     */
                    void SetRouterNodeSize(const int64_t& _routerNodeSize);

                    /**
                     * 判断参数 RouterNodeSize 是否已赋值
                     * @return RouterNodeSize 是否已赋值
                     * 
                     */
                    bool RouterNodeSizeHasBeenSet() const;

                    /**
                     * 获取Whether HA is supported.
                     * @return SupportHA Whether HA is supported.
                     * 
                     */
                    bool GetSupportHA() const;

                    /**
                     * 设置Whether HA is supported.
                     * @param _supportHA Whether HA is supported.
                     * 
                     */
                    void SetSupportHA(const bool& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     * 
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取Whether security mode is supported.
                     * @return SecurityOn Whether security mode is supported.
                     * 
                     */
                    bool GetSecurityOn() const;

                    /**
                     * 设置Whether security mode is supported.
                     * @param _securityOn Whether security mode is supported.
                     * 
                     */
                    void SetSecurityOn(const bool& _securityOn);

                    /**
                     * 判断参数 SecurityOn 是否已赋值
                     * @return SecurityOn 是否已赋值
                     * 
                     */
                    bool SecurityOnHasBeenSet() const;

                    /**
                     * 获取Initial security group ID of the cluster.
                     * @return SecurityGroup Initial security group ID of the cluster.
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置Initial security group ID of the cluster.
                     * @param _securityGroup Initial security group ID of the cluster.
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取Whether CBS encryption is enabled.
                     * @return CbsEncrypt Whether CBS encryption is enabled.
                     * 
                     */
                    int64_t GetCbsEncrypt() const;

                    /**
                     * 设置Whether CBS encryption is enabled.
                     * @param _cbsEncrypt Whether CBS encryption is enabled.
                     * 
                     */
                    void SetCbsEncrypt(const int64_t& _cbsEncrypt);

                    /**
                     * 判断参数 CbsEncrypt 是否已赋值
                     * @return CbsEncrypt 是否已赋值
                     * 
                     */
                    bool CbsEncryptHasBeenSet() const;

                    /**
                     * 获取Custom application role.
                     * @return ApplicationRole Custom application role.
                     * 
                     */
                    std::string GetApplicationRole() const;

                    /**
                     * 设置Custom application role.
                     * @param _applicationRole Custom application role.
                     * 
                     */
                    void SetApplicationRole(const std::string& _applicationRole);

                    /**
                     * 判断参数 ApplicationRole 是否已赋值
                     * @return ApplicationRole 是否已赋值
                     * 
                     */
                    bool ApplicationRoleHasBeenSet() const;

                    /**
                     * 获取Security group ID.
                     * @return SecurityGroups Security group ID.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置Security group ID.
                     * @param _securityGroups Security group ID.
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取SSH key ID.
                     * @return PublicKeyId SSH key ID.
                     * 
                     */
                    std::string GetPublicKeyId() const;

                    /**
                     * 设置SSH key ID.
                     * @param _publicKeyId SSH key ID.
                     * 
                     */
                    void SetPublicKeyId(const std::string& _publicKeyId);

                    /**
                     * 判断参数 PublicKeyId 是否已赋值
                     * @return PublicKeyId 是否已赋值
                     * 
                     */
                    bool PublicKeyIdHasBeenSet() const;

                private:

                    /**
                     * Software information.
                     */
                    std::vector<std::string> m_softInfo;
                    bool m_softInfoHasBeenSet;

                    /**
                     * Number of Master nodes.
                     */
                    int64_t m_masterNodeSize;
                    bool m_masterNodeSizeHasBeenSet;

                    /**
                     * Number of Core nodes.
                     */
                    int64_t m_coreNodeSize;
                    bool m_coreNodeSizeHasBeenSet;

                    /**
                     * Number of Task nodes.
                     */
                    int64_t m_taskNodeSize;
                    bool m_taskNodeSizeHasBeenSet;

                    /**
                     * Number of Common nodes.
                     */
                    int64_t m_comNodeSize;
                    bool m_comNodeSizeHasBeenSet;

                    /**
                     * Master node resources.
                     */
                    OutterResource m_masterResource;
                    bool m_masterResourceHasBeenSet;

                    /**
                     * Core node resources.
                     */
                    OutterResource m_coreResource;
                    bool m_coreResourceHasBeenSet;

                    /**
                     * Task node resources.
                     */
                    OutterResource m_taskResource;
                    bool m_taskResourceHasBeenSet;

                    /**
                     * Common node resources.
                     */
                    OutterResource m_comResource;
                    bool m_comResourceHasBeenSet;

                    /**
                     * Whether COS is used.
                     */
                    bool m_onCos;
                    bool m_onCosHasBeenSet;

                    /**
                     * Charge type.
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Number of Router nodes.
                     */
                    int64_t m_routerNodeSize;
                    bool m_routerNodeSizeHasBeenSet;

                    /**
                     * Whether HA is supported.
                     */
                    bool m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * Whether security mode is supported.
                     */
                    bool m_securityOn;
                    bool m_securityOnHasBeenSet;

                    /**
                     * Initial security group ID of the cluster.
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * Whether CBS encryption is enabled.
                     */
                    int64_t m_cbsEncrypt;
                    bool m_cbsEncryptHasBeenSet;

                    /**
                     * Custom application role.
                     */
                    std::string m_applicationRole;
                    bool m_applicationRoleHasBeenSet;

                    /**
                     * Security group ID.
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * SSH key ID.
                     */
                    std::string m_publicKeyId;
                    bool m_publicKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGOUTTER_H_
