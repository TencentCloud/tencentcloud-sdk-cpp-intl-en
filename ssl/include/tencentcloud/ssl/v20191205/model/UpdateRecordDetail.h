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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDDETAIL_H_

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
                * Update record details
                */
                class UpdateRecordDetail : public AbstractModel
                {
                public:
                    UpdateRecordDetail();
                    ~UpdateRecordDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Detail record ID
                     * @return Id Detail record ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Detail record ID
                     * @param _id Detail record ID
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
                     * 获取New certificate ID
                     * @return CertId New certificate ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置New certificate ID
                     * @param _certId New certificate ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Old certificate ID
                     * @return OldCertId Old certificate ID
                     * 
                     */
                    std::string GetOldCertId() const;

                    /**
                     * 设置Old certificate ID
                     * @param _oldCertId Old certificate ID
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
                     * 获取Deployment domain name list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Domains Deployment domain name list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Deployment domain name list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _domains Deployment domain name list
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Deployment resource type
                     * @return ResourceType Deployment resource type
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Deployment resource type
                     * @param _resourceType Deployment resource type
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Deployment region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Region Deployment region
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Deployment region
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _region Deployment region
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Deployment status
                     * @return Status Deployment status
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Deployment status
                     * @param _status Deployment status
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Deployment error message
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorMsg Deployment error message
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Deployment error message
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _errorMsg Deployment error message
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Deployment time
                     * @return CreateTime Deployment time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Deployment time
                     * @param _createTime Deployment time
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
                     * 获取Last update time
                     * @return UpdateTime Last update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time
                     * @param _updateTime Last update time
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
                     * 获取Deployment instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Deployment instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Deployment instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Deployment instance ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Deployment instance name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceName Deployment instance name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Deployment instance name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceName Deployment instance name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Deployment listener ID (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ListenerId Deployment listener ID (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Deployment listener ID (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _listenerId Deployment listener ID (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Deployment listener name (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ListenerName Deployment listener name (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Deployment listener name (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _listenerName Deployment listener name (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Protocol
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Protocol Protocol
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _protocol Protocol
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Whether SNI is enabled (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SniSwitch Whether SNI is enabled (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSniSwitch() const;

                    /**
                     * 设置Whether SNI is enabled (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sniSwitch Whether SNI is enabled (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSniSwitch(const uint64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     * 
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取Bucket name (only for COS)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Bucket Bucket name (only for COS)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket name (only for COS)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bucket Bucket name (only for COS)
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Port
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Port Port
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _port Port
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Namespace (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Namespace Namespace (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _namespace Namespace (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Secret name (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SecretName Secret name (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Secret name (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _secretName Secret name (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Environment ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EnvId Environment ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Environment ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _envId Environment ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取TCB deployment type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TCBType TCB deployment type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTCBType() const;

                    /**
                     * 设置TCB deployment type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tCBType TCB deployment type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTCBType(const std::string& _tCBType);

                    /**
                     * 判断参数 TCBType 是否已赋值
                     * @return TCBType 是否已赋值
                     * 
                     */
                    bool TCBTypeHasBeenSet() const;

                private:

                    /**
                     * Detail record ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * New certificate ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Old certificate ID
                     */
                    std::string m_oldCertId;
                    bool m_oldCertIdHasBeenSet;

                    /**
                     * Deployment domain name list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Deployment resource type
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Deployment region
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Deployment status
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Deployment error message
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Deployment time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Deployment instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Deployment instance name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Deployment listener ID (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Deployment listener name (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Protocol
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Whether SNI is enabled (only for CLB)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * Bucket name (only for COS)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Port
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Namespace (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Secret name (only for TKE)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Environment ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * TCB deployment type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tCBType;
                    bool m_tCBTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATERECORDDETAIL_H_
