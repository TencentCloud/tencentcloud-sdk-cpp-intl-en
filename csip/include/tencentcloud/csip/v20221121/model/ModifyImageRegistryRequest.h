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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEREGISTRYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEREGISTRYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ConnectivityDetectConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyImageRegistry request structure.
                */
                class ModifyImageRegistryRequest : public AbstractModel
                {
                public:
                    ModifyImageRegistryRequest();
                    ~ModifyImageRegistryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Mirror repository name</p>
                     * @return Name <p>Mirror repository name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Mirror repository name</p>
                     * @param _name <p>Mirror repository name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Account</p>
                     * @return Username <p>Account</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>Account</p>
                     * @param _username <p>Account</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>Password</p>
                     * @return Password <p>Password</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Password</p>
                     * @param _password <p>Password</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Mirror repository url</p>
                     * @return Url <p>Mirror repository url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Mirror repository url</p>
                     * @param _url <p>Mirror repository url</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Image repository type</p>
                     * @return RegistryType <p>Image repository type</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>Image repository type</p>
                     * @param _registryType <p>Image repository type</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>Network type</p>
                     * @return NetType <p>Network type</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>Network type</p>
                     * @param _netType <p>Network type</p>
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Mirror repository version</p>
                     * @return RegistryVersion <p>Mirror repository version</p>
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置<p>Mirror repository version</p>
                     * @param _registryVersion <p>Mirror repository version</p>
                     * 
                     */
                    void SetRegistryVersion(const std::string& _registryVersion);

                    /**
                     * 判断参数 RegistryVersion 是否已赋值
                     * @return RegistryVersion 是否已赋值
                     * 
                     */
                    bool RegistryVersionHasBeenSet() const;

                    /**
                     * 获取<p>region to which the mirror repository belongs</p>
                     * @return RegistryRegion <p>region to which the mirror repository belongs</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>region to which the mirror repository belongs</p>
                     * @param _registryRegion <p>region to which the mirror repository belongs</p>
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取<p>Speed limit value</p>
                     * @return SpeedLimit <p>Speed limit value</p>
                     * 
                     */
                    uint64_t GetSpeedLimit() const;

                    /**
                     * 设置<p>Speed limit value</p>
                     * @param _speedLimit <p>Speed limit value</p>
                     * 
                     */
                    void SetSpeedLimit(const uint64_t& _speedLimit);

                    /**
                     * 判断参数 SpeedLimit 是否已赋值
                     * @return SpeedLimit 是否已赋值
                     * 
                     */
                    bool SpeedLimitHasBeenSet() const;

                    /**
                     * 获取<p>Security mode (certificate verification)</p><p>Enumeration values:</p><ul><li>0: Security mode</li><li>1: Non-secure mode</li></ul>
                     * @return Insecure <p>Security mode (certificate verification)</p><p>Enumeration values:</p><ul><li>0: Security mode</li><li>1: Non-secure mode</li></ul>
                     * 
                     */
                    uint64_t GetInsecure() const;

                    /**
                     * 设置<p>Security mode (certificate verification)</p><p>Enumeration values:</p><ul><li>0: Security mode</li><li>1: Non-secure mode</li></ul>
                     * @param _insecure <p>Security mode (certificate verification)</p><p>Enumeration values:</p><ul><li>0: Security mode</li><li>1: Non-secure mode</li></ul>
                     * 
                     */
                    void SetInsecure(const uint64_t& _insecure);

                    /**
                     * 判断参数 Insecure 是否已赋值
                     * @return Insecure 是否已赋值
                     * 
                     */
                    bool InsecureHasBeenSet() const;

                    /**
                     * 获取<p>Whether to auto-scan</p>
                     * @return NeedScan <p>Whether to auto-scan</p>
                     * 
                     */
                    bool GetNeedScan() const;

                    /**
                     * 设置<p>Whether to auto-scan</p>
                     * @param _needScan <p>Whether to auto-scan</p>
                     * 
                     */
                    void SetNeedScan(const bool& _needScan);

                    /**
                     * 判断参数 NeedScan 是否已赋值
                     * @return NeedScan 是否已赋值
                     * 
                     */
                    bool NeedScanHasBeenSet() const;

                    /**
                     * 获取<p>Synchronization method</p><p>Enumeration values:</p><ul><li>0: full synchronization</li><li>1: incremental synchronization</li></ul>
                     * @return SyncMode <p>Synchronization method</p><p>Enumeration values:</p><ul><li>0: full synchronization</li><li>1: incremental synchronization</li></ul>
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 设置<p>Synchronization method</p><p>Enumeration values:</p><ul><li>0: full synchronization</li><li>1: incremental synchronization</li></ul>
                     * @param _syncMode <p>Synchronization method</p><p>Enumeration values:</p><ul><li>0: full synchronization</li><li>1: incremental synchronization</li></ul>
                     * 
                     */
                    void SetSyncMode(const uint64_t& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取<p>Mirror repository instance id</p>
                     * @return InstanceId <p>Mirror repository instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Mirror repository instance id</p>
                     * @param _instanceId <p>Mirror repository instance id</p>
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
                     * 获取<p>Connectivity detection configuration</p>
                     * @return ConnectivityDetectConfig <p>Connectivity detection configuration</p>
                     * 
                     */
                    std::vector<ConnectivityDetectConfig> GetConnectivityDetectConfig() const;

                    /**
                     * 设置<p>Connectivity detection configuration</p>
                     * @param _connectivityDetectConfig <p>Connectivity detection configuration</p>
                     * 
                     */
                    void SetConnectivityDetectConfig(const std::vector<ConnectivityDetectConfig>& _connectivityDetectConfig);

                    /**
                     * 判断参数 ConnectivityDetectConfig 是否已赋值
                     * @return ConnectivityDetectConfig 是否已赋值
                     * 
                     */
                    bool ConnectivityDetectConfigHasBeenSet() const;

                    /**
                     * 获取<p>Mirror repository id</p>
                     * @return Id <p>Mirror repository id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Mirror repository id</p>
                     * @param _id <p>Mirror repository id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Mirror repository name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Account</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>Password</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Mirror repository url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Image repository type</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>Network type</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>Mirror repository version</p>
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * <p>region to which the mirror repository belongs</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>Speed limit value</p>
                     */
                    uint64_t m_speedLimit;
                    bool m_speedLimitHasBeenSet;

                    /**
                     * <p>Security mode (certificate verification)</p><p>Enumeration values:</p><ul><li>0: Security mode</li><li>1: Non-secure mode</li></ul>
                     */
                    uint64_t m_insecure;
                    bool m_insecureHasBeenSet;

                    /**
                     * <p>Whether to auto-scan</p>
                     */
                    bool m_needScan;
                    bool m_needScanHasBeenSet;

                    /**
                     * <p>Synchronization method</p><p>Enumeration values:</p><ul><li>0: full synchronization</li><li>1: incremental synchronization</li></ul>
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * <p>Mirror repository instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Connectivity detection configuration</p>
                     */
                    std::vector<ConnectivityDetectConfig> m_connectivityDetectConfig;
                    bool m_connectivityDetectConfigHasBeenSet;

                    /**
                     * <p>Mirror repository id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEREGISTRYREQUEST_H_
