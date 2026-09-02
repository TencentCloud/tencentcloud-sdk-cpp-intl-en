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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ADDIMAGEREGISTRYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ADDIMAGEREGISTRYREQUEST_H_

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
                * AddImageRegistry request structure.
                */
                class AddImageRegistryRequest : public AbstractModel
                {
                public:
                    AddImageRegistryRequest();
                    ~AddImageRegistryRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>Image repository account</p>
                     * @return Username <p>Image repository account</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>Image repository account</p>
                     * @param _username <p>Image repository account</p>
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
                     * 获取<p>Image repository password</p>
                     * @return Password <p>Image repository password</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Image repository password</p>
                     * @param _password <p>Image repository password</p>
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
                     * 获取<p>Image repository type</p><p>Enumeration values:</p><ul><li>tcr: TCR repository</li><li>ccr: CCR repository</li><li>harbor: Harbor repository</li><li>jfrog: JFrog repository</li><li>quay: Quay repository</li><li>aws: AWS repository</li><li>azure: Azure repository</li></ul>
                     * @return RegistryType <p>Image repository type</p><p>Enumeration values:</p><ul><li>tcr: TCR repository</li><li>ccr: CCR repository</li><li>harbor: Harbor repository</li><li>jfrog: JFrog repository</li><li>quay: Quay repository</li><li>aws: AWS repository</li><li>azure: Azure repository</li></ul>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>Image repository type</p><p>Enumeration values:</p><ul><li>tcr: TCR repository</li><li>ccr: CCR repository</li><li>harbor: Harbor repository</li><li>jfrog: JFrog repository</li><li>quay: Quay repository</li><li>aws: AWS repository</li><li>azure: Azure repository</li></ul>
                     * @param _registryType <p>Image repository type</p><p>Enumeration values:</p><ul><li>tcr: TCR repository</li><li>ccr: CCR repository</li><li>harbor: Harbor repository</li><li>jfrog: JFrog repository</li><li>quay: Quay repository</li><li>aws: AWS repository</li><li>azure: Azure repository</li></ul>
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
                     * 获取<p>Network type</p><p>Enumeration values:</p><ul><li>public: public network</li><li>Empty: private network, default value</li></ul>
                     * @return NetType <p>Network type</p><p>Enumeration values:</p><ul><li>public: public network</li><li>Empty: private network, default value</li></ul>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>Network type</p><p>Enumeration values:</p><ul><li>public: public network</li><li>Empty: private network, default value</li></ul>
                     * @param _netType <p>Network type</p><p>Enumeration values:</p><ul><li>public: public network</li><li>Empty: private network, default value</li></ul>
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
                     * 获取<p>api version</p>
                     * @return RegistryVersion <p>api version</p>
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置<p>api version</p>
                     * @param _registryVersion <p>api version</p>
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
                     * 获取<p>region where the mirror repository is located</p>
                     * @return RegistryRegion <p>region where the mirror repository is located</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>region where the mirror repository is located</p>
                     * @param _registryRegion <p>region where the mirror repository is located</p>
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
                     * 获取<p>Access throttling value</p>
                     * @return SpeedLimit <p>Access throttling value</p>
                     * 
                     */
                    uint64_t GetSpeedLimit() const;

                    /**
                     * 设置<p>Access throttling value</p>
                     * @param _speedLimit <p>Access throttling value</p>
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
                     * 获取<p>Whether to ignore the cert</p><p>Enumeration values:</p><ul><li>0: Verify the certificate</li><li>1: Ignore the cert</li></ul>
                     * @return Insecure <p>Whether to ignore the cert</p><p>Enumeration values:</p><ul><li>0: Verify the certificate</li><li>1: Ignore the cert</li></ul>
                     * 
                     */
                    uint64_t GetInsecure() const;

                    /**
                     * 设置<p>Whether to ignore the cert</p><p>Enumeration values:</p><ul><li>0: Verify the certificate</li><li>1: Ignore the cert</li></ul>
                     * @param _insecure <p>Whether to ignore the cert</p><p>Enumeration values:</p><ul><li>0: Verify the certificate</li><li>1: Ignore the cert</li></ul>
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
                     * 获取<p>Sync now or not</p>
                     * @return NeedScan <p>Sync now or not</p>
                     * 
                     */
                    bool GetNeedScan() const;

                    /**
                     * 设置<p>Sync now or not</p>
                     * @param _needScan <p>Sync now or not</p>
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
                     * 获取<p>Synchronization mode. 0: full synchronization</p>
                     * @return SyncMode <p>Synchronization mode. 0: full synchronization</p>
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 设置<p>Synchronization mode. 0: full synchronization</p>
                     * @param _syncMode <p>Synchronization mode. 0: full synchronization</p>
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
                     * 获取<p>Scan link configuration used</p>
                     * @return ConnectivityDetectConfig <p>Scan link configuration used</p>
                     * 
                     */
                    std::vector<ConnectivityDetectConfig> GetConnectivityDetectConfig() const;

                    /**
                     * 设置<p>Scan link configuration used</p>
                     * @param _connectivityDetectConfig <p>Scan link configuration used</p>
                     * 
                     */
                    void SetConnectivityDetectConfig(const std::vector<ConnectivityDetectConfig>& _connectivityDetectConfig);

                    /**
                     * 判断参数 ConnectivityDetectConfig 是否已赋值
                     * @return ConnectivityDetectConfig 是否已赋值
                     * 
                     */
                    bool ConnectivityDetectConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Mirror repository name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Image repository account</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>Image repository password</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Mirror repository url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Image repository type</p><p>Enumeration values:</p><ul><li>tcr: TCR repository</li><li>ccr: CCR repository</li><li>harbor: Harbor repository</li><li>jfrog: JFrog repository</li><li>quay: Quay repository</li><li>aws: AWS repository</li><li>azure: Azure repository</li></ul>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>Network type</p><p>Enumeration values:</p><ul><li>public: public network</li><li>Empty: private network, default value</li></ul>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>api version</p>
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * <p>region where the mirror repository is located</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>Access throttling value</p>
                     */
                    uint64_t m_speedLimit;
                    bool m_speedLimitHasBeenSet;

                    /**
                     * <p>Whether to ignore the cert</p><p>Enumeration values:</p><ul><li>0: Verify the certificate</li><li>1: Ignore the cert</li></ul>
                     */
                    uint64_t m_insecure;
                    bool m_insecureHasBeenSet;

                    /**
                     * <p>Sync now or not</p>
                     */
                    bool m_needScan;
                    bool m_needScanHasBeenSet;

                    /**
                     * <p>Synchronization mode. 0: full synchronization</p>
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * <p>Mirror repository instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Scan link configuration used</p>
                     */
                    std::vector<ConnectivityDetectConfig> m_connectivityDetectConfig;
                    bool m_connectivityDetectConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ADDIMAGEREGISTRYREQUEST_H_
