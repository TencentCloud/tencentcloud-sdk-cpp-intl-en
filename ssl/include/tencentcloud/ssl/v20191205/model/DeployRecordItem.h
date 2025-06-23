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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDITEM_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Deployment record details.
                */
                class DeployRecordItem : public AbstractModel
                {
                public:
                    DeployRecordItem();
                    ~DeployRecordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deployment record detail ID.
                     * @return Id Deployment record detail ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Deployment record detail ID.
                     * @param _id Deployment record detail ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Bound certificate ID.
                     * @return OldCertId Bound certificate ID.
                     * 
                     */
                    std::string GetOldCertId() const;

                    /**
                     * 设置Bound certificate ID.
                     * @param _oldCertId Bound certificate ID.
                     * 
                     */
                    void SetOldCertId(const std::string& _oldCertId);

                    /**
                     * 判断参数 OldCertId 是否已赋值
                     * @return OldCertId 是否已赋值
                     * 
                     */
                    bool OldCertIdHasBeenSet() const;

                    /**
                     * 获取Deployment instance ID.
                     * @return InstanceId Deployment instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Deployment instance ID.
                     * @param _instanceId Deployment instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the deployment instance name.
                     * @return InstanceName Specifies the deployment instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Specifies the deployment instance name.
                     * @param _instanceName Specifies the deployment instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Deploy the listener ID.
                     * @return ListenerId Deploy the listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Deploy the listener ID.
                     * @param _listenerId Deploy the listener ID.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Deployment domain name list.
                     * @return Domains Deployment domain name list.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Deployment domain name list.
                     * @param _domains Deployment domain name list.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Deploy listener protocol.
                     * @return Protocol Deploy listener protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Deploy listener protocol.
                     * @param _protocol Deploy listener protocol.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Deployment state.
                     * @return Status Deployment state.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Deployment state.
                     * @param _status Deployment state.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Deployment error information.
                     * @return ErrorMsg Deployment error information.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Deployment error information.
                     * @param _errorMsg Deployment error information.
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取Describes the creation time of the deployment record detail.
                     * @return CreateTime Describes the creation time of the deployment record detail.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Describes the creation time of the deployment record detail.
                     * @param _createTime Describes the creation time of the deployment record detail.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the last update time of the deployment record detail.
                     * @return UpdateTime Specifies the last update time of the deployment record detail.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Specifies the last update time of the deployment record detail.
                     * @param _updateTime Specifies the last update time of the deployment record detail.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Deploy listener name.
                     * @return ListenerName Deploy listener name.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Deploy listener name.
                     * @param _listenerName Deploy listener name.
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Whether SNI is enabled.
                     * @return SniSwitch Whether SNI is enabled.
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置Whether SNI is enabled.
                     * @param _sniSwitch Whether SNI is enabled.
                     * 
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     * 
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取COS bucket name.
                     * @return Bucket COS bucket name.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket name.
                     * @param _bucket COS bucket name.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Namespace name.
                     * @return Namespace Namespace name.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name.
                     * @param _namespace Namespace name.
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
                     * 获取The secret name.
                     * @return SecretName The secret name.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置The secret name.
                     * @param _secretName The secret name.
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Port
                     * @return Port Port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port
                     * @param _port Port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Deployed TCB region.
                     * @return Region Deployed TCB region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Deployed TCB region.
                     * @param _region Deployed TCB region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取CLB type. valid values: 0 (classic clb); 1 (application clb).
                     * @return Forward CLB type. valid values: 0 (classic clb); 1 (application clb).
                     * 
                     */
                    int64_t GetForward() const;

                    /**
                     * 设置CLB type. valid values: 0 (classic clb); 1 (application clb).
                     * @param _forward CLB type. valid values: 0 (classic clb); 1 (application clb).
                     * 
                     */
                    void SetForward(const int64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     * 
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取Certificate authentication mode: UNIDIRECTIONAL for one-way authentication, MUTUAL for MUTUAL authentication.
                     * @return SSLMode Certificate authentication mode: UNIDIRECTIONAL for one-way authentication, MUTUAL for MUTUAL authentication.
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置Certificate authentication mode: UNIDIRECTIONAL for one-way authentication, MUTUAL for MUTUAL authentication.
                     * @param _sSLMode Certificate authentication mode: UNIDIRECTIONAL for one-way authentication, MUTUAL for MUTUAL authentication.
                     * 
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     * 
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取Deployment resource type.
                     * @return ResourceType Deployment resource type.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Deployment resource type.
                     * @param _resourceType Deployment resource type.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * Deployment record detail ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Bound certificate ID.
                     */
                    std::string m_oldCertId;
                    bool m_oldCertIdHasBeenSet;

                    /**
                     * Deployment instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the deployment instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Deploy the listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Deployment domain name list.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Deploy listener protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Deployment state.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Deployment error information.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Describes the creation time of the deployment record detail.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Specifies the last update time of the deployment record detail.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Deploy listener name.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Whether SNI is enabled.
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * COS bucket name.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Namespace name.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * The secret name.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Deployed TCB region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * CLB type. valid values: 0 (classic clb); 1 (application clb).
                     */
                    int64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * Certificate authentication mode: UNIDIRECTIONAL for one-way authentication, MUTUAL for MUTUAL authentication.
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * Deployment resource type.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDITEM_H_
