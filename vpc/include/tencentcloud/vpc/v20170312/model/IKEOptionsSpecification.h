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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IKEOPTIONSSPECIFICATION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IKEOPTIONSSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Internet Key Exchange (IKE) configuration. IKE has a self-protection mechanism. The network security protocol is configured by the user.
                */
                class IKEOptionsSpecification : public AbstractModel
                {
                public:
                    IKEOptionsSpecification();
                    ~IKEOptionsSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encryption algorithm. Valid values: `3DES-CBC`, `AES-CBC-128`, `AES-CBS-192`, `AES-CBC-256`, `DES-CBC`, and `SM4`; default value: `3DES-CBC`.
                     * @return PropoEncryAlgorithm Encryption algorithm. Valid values: `3DES-CBC`, `AES-CBC-128`, `AES-CBS-192`, `AES-CBC-256`, `DES-CBC`, and `SM4`; default value: `3DES-CBC`.
                     */
                    std::string GetPropoEncryAlgorithm() const;

                    /**
                     * 设置Encryption algorithm. Valid values: `3DES-CBC`, `AES-CBC-128`, `AES-CBS-192`, `AES-CBC-256`, `DES-CBC`, and `SM4`; default value: `3DES-CBC`.
                     * @param PropoEncryAlgorithm Encryption algorithm. Valid values: `3DES-CBC`, `AES-CBC-128`, `AES-CBS-192`, `AES-CBC-256`, `DES-CBC`, and `SM4`; default value: `3DES-CBC`.
                     */
                    void SetPropoEncryAlgorithm(const std::string& _propoEncryAlgorithm);

                    /**
                     * 判断参数 PropoEncryAlgorithm 是否已赋值
                     * @return PropoEncryAlgorithm 是否已赋值
                     */
                    bool PropoEncryAlgorithmHasBeenSet() const;

                    /**
                     * 获取Authentication algorithm. Valid values: `MD5`, `SHA1` and `SHA-256`; default value: `MD5`.
                     * @return PropoAuthenAlgorithm Authentication algorithm. Valid values: `MD5`, `SHA1` and `SHA-256`; default value: `MD5`.
                     */
                    std::string GetPropoAuthenAlgorithm() const;

                    /**
                     * 设置Authentication algorithm. Valid values: `MD5`, `SHA1` and `SHA-256`; default value: `MD5`.
                     * @param PropoAuthenAlgorithm Authentication algorithm. Valid values: `MD5`, `SHA1` and `SHA-256`; default value: `MD5`.
                     */
                    void SetPropoAuthenAlgorithm(const std::string& _propoAuthenAlgorithm);

                    /**
                     * 判断参数 PropoAuthenAlgorithm 是否已赋值
                     * @return PropoAuthenAlgorithm 是否已赋值
                     */
                    bool PropoAuthenAlgorithmHasBeenSet() const;

                    /**
                     * 获取Negotiation mode. Available values: 'AGGRESSIVE' and 'MAIN'. Default is MAIN.
                     * @return ExchangeMode Negotiation mode. Available values: 'AGGRESSIVE' and 'MAIN'. Default is MAIN.
                     */
                    std::string GetExchangeMode() const;

                    /**
                     * 设置Negotiation mode. Available values: 'AGGRESSIVE' and 'MAIN'. Default is MAIN.
                     * @param ExchangeMode Negotiation mode. Available values: 'AGGRESSIVE' and 'MAIN'. Default is MAIN.
                     */
                    void SetExchangeMode(const std::string& _exchangeMode);

                    /**
                     * 判断参数 ExchangeMode 是否已赋值
                     * @return ExchangeMode 是否已赋值
                     */
                    bool ExchangeModeHasBeenSet() const;

                    /**
                     * 获取Type of local identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     * @return LocalIdentity Type of local identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     */
                    std::string GetLocalIdentity() const;

                    /**
                     * 设置Type of local identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     * @param LocalIdentity Type of local identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     */
                    void SetLocalIdentity(const std::string& _localIdentity);

                    /**
                     * 判断参数 LocalIdentity 是否已赋值
                     * @return LocalIdentity 是否已赋值
                     */
                    bool LocalIdentityHasBeenSet() const;

                    /**
                     * 获取Type of remote identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     * @return RemoteIdentity Type of remote identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     */
                    std::string GetRemoteIdentity() const;

                    /**
                     * 设置Type of remote identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     * @param RemoteIdentity Type of remote identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     */
                    void SetRemoteIdentity(const std::string& _remoteIdentity);

                    /**
                     * 判断参数 RemoteIdentity 是否已赋值
                     * @return RemoteIdentity 是否已赋值
                     */
                    bool RemoteIdentityHasBeenSet() const;

                    /**
                     * 获取Local identity. When ADDRESS is selected for LocalIdentity, LocalAddress is required. The default LocalAddress is the public IP of the VPN gateway.
                     * @return LocalAddress Local identity. When ADDRESS is selected for LocalIdentity, LocalAddress is required. The default LocalAddress is the public IP of the VPN gateway.
                     */
                    std::string GetLocalAddress() const;

                    /**
                     * 设置Local identity. When ADDRESS is selected for LocalIdentity, LocalAddress is required. The default LocalAddress is the public IP of the VPN gateway.
                     * @param LocalAddress Local identity. When ADDRESS is selected for LocalIdentity, LocalAddress is required. The default LocalAddress is the public IP of the VPN gateway.
                     */
                    void SetLocalAddress(const std::string& _localAddress);

                    /**
                     * 判断参数 LocalAddress 是否已赋值
                     * @return LocalAddress 是否已赋值
                     */
                    bool LocalAddressHasBeenSet() const;

                    /**
                     * 获取Remote identity. When ADDRESS is selected for RemoteIdentity, RemoteAddress is required.
                     * @return RemoteAddress Remote identity. When ADDRESS is selected for RemoteIdentity, RemoteAddress is required.
                     */
                    std::string GetRemoteAddress() const;

                    /**
                     * 设置Remote identity. When ADDRESS is selected for RemoteIdentity, RemoteAddress is required.
                     * @param RemoteAddress Remote identity. When ADDRESS is selected for RemoteIdentity, RemoteAddress is required.
                     */
                    void SetRemoteAddress(const std::string& _remoteAddress);

                    /**
                     * 判断参数 RemoteAddress 是否已赋值
                     * @return RemoteAddress 是否已赋值
                     */
                    bool RemoteAddressHasBeenSet() const;

                    /**
                     * 获取Local identity. When FQDN is selected for LocalIdentity, LocalFqdnName is required.
                     * @return LocalFqdnName Local identity. When FQDN is selected for LocalIdentity, LocalFqdnName is required.
                     */
                    std::string GetLocalFqdnName() const;

                    /**
                     * 设置Local identity. When FQDN is selected for LocalIdentity, LocalFqdnName is required.
                     * @param LocalFqdnName Local identity. When FQDN is selected for LocalIdentity, LocalFqdnName is required.
                     */
                    void SetLocalFqdnName(const std::string& _localFqdnName);

                    /**
                     * 判断参数 LocalFqdnName 是否已赋值
                     * @return LocalFqdnName 是否已赋值
                     */
                    bool LocalFqdnNameHasBeenSet() const;

                    /**
                     * 获取Remote identity. When FQDN is selected for RemoteIdentity, RemoteFqdnName is required.
                     * @return RemoteFqdnName Remote identity. When FQDN is selected for RemoteIdentity, RemoteFqdnName is required.
                     */
                    std::string GetRemoteFqdnName() const;

                    /**
                     * 设置Remote identity. When FQDN is selected for RemoteIdentity, RemoteFqdnName is required.
                     * @param RemoteFqdnName Remote identity. When FQDN is selected for RemoteIdentity, RemoteFqdnName is required.
                     */
                    void SetRemoteFqdnName(const std::string& _remoteFqdnName);

                    /**
                     * 判断参数 RemoteFqdnName 是否已赋值
                     * @return RemoteFqdnName 是否已赋值
                     */
                    bool RemoteFqdnNameHasBeenSet() const;

                    /**
                     * 获取DH group. Specify the DH group used for exchanging the key via IKE. Available values: 'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', and 'GROUP24'.
                     * @return DhGroupName DH group. Specify the DH group used for exchanging the key via IKE. Available values: 'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', and 'GROUP24'.
                     */
                    std::string GetDhGroupName() const;

                    /**
                     * 设置DH group. Specify the DH group used for exchanging the key via IKE. Available values: 'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', and 'GROUP24'.
                     * @param DhGroupName DH group. Specify the DH group used for exchanging the key via IKE. Available values: 'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', and 'GROUP24'.
                     */
                    void SetDhGroupName(const std::string& _dhGroupName);

                    /**
                     * 判断参数 DhGroupName 是否已赋值
                     * @return DhGroupName 是否已赋值
                     */
                    bool DhGroupNameHasBeenSet() const;

                    /**
                     * 获取IKE SA lifetime (in sec). Value range: 60-604800
                     * @return IKESaLifetimeSeconds IKE SA lifetime (in sec). Value range: 60-604800
                     */
                    uint64_t GetIKESaLifetimeSeconds() const;

                    /**
                     * 设置IKE SA lifetime (in sec). Value range: 60-604800
                     * @param IKESaLifetimeSeconds IKE SA lifetime (in sec). Value range: 60-604800
                     */
                    void SetIKESaLifetimeSeconds(const uint64_t& _iKESaLifetimeSeconds);

                    /**
                     * 判断参数 IKESaLifetimeSeconds 是否已赋值
                     * @return IKESaLifetimeSeconds 是否已赋值
                     */
                    bool IKESaLifetimeSecondsHasBeenSet() const;

                    /**
                     * 获取IKE version
                     * @return IKEVersion IKE version
                     */
                    std::string GetIKEVersion() const;

                    /**
                     * 设置IKE version
                     * @param IKEVersion IKE version
                     */
                    void SetIKEVersion(const std::string& _iKEVersion);

                    /**
                     * 判断参数 IKEVersion 是否已赋值
                     * @return IKEVersion 是否已赋值
                     */
                    bool IKEVersionHasBeenSet() const;

                private:

                    /**
                     * Encryption algorithm. Valid values: `3DES-CBC`, `AES-CBC-128`, `AES-CBS-192`, `AES-CBC-256`, `DES-CBC`, and `SM4`; default value: `3DES-CBC`.
                     */
                    std::string m_propoEncryAlgorithm;
                    bool m_propoEncryAlgorithmHasBeenSet;

                    /**
                     * Authentication algorithm. Valid values: `MD5`, `SHA1` and `SHA-256`; default value: `MD5`.
                     */
                    std::string m_propoAuthenAlgorithm;
                    bool m_propoAuthenAlgorithmHasBeenSet;

                    /**
                     * Negotiation mode. Available values: 'AGGRESSIVE' and 'MAIN'. Default is MAIN.
                     */
                    std::string m_exchangeMode;
                    bool m_exchangeModeHasBeenSet;

                    /**
                     * Type of local identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     */
                    std::string m_localIdentity;
                    bool m_localIdentityHasBeenSet;

                    /**
                     * Type of remote identity. Available values: 'ADDRESS' and 'FQDN'. Default is ADDRESS.
                     */
                    std::string m_remoteIdentity;
                    bool m_remoteIdentityHasBeenSet;

                    /**
                     * Local identity. When ADDRESS is selected for LocalIdentity, LocalAddress is required. The default LocalAddress is the public IP of the VPN gateway.
                     */
                    std::string m_localAddress;
                    bool m_localAddressHasBeenSet;

                    /**
                     * Remote identity. When ADDRESS is selected for RemoteIdentity, RemoteAddress is required.
                     */
                    std::string m_remoteAddress;
                    bool m_remoteAddressHasBeenSet;

                    /**
                     * Local identity. When FQDN is selected for LocalIdentity, LocalFqdnName is required.
                     */
                    std::string m_localFqdnName;
                    bool m_localFqdnNameHasBeenSet;

                    /**
                     * Remote identity. When FQDN is selected for RemoteIdentity, RemoteFqdnName is required.
                     */
                    std::string m_remoteFqdnName;
                    bool m_remoteFqdnNameHasBeenSet;

                    /**
                     * DH group. Specify the DH group used for exchanging the key via IKE. Available values: 'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', and 'GROUP24'.
                     */
                    std::string m_dhGroupName;
                    bool m_dhGroupNameHasBeenSet;

                    /**
                     * IKE SA lifetime (in sec). Value range: 60-604800
                     */
                    uint64_t m_iKESaLifetimeSeconds;
                    bool m_iKESaLifetimeSecondsHasBeenSet;

                    /**
                     * IKE version
                     */
                    std::string m_iKEVersion;
                    bool m_iKEVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IKEOPTIONSSPECIFICATION_H_
