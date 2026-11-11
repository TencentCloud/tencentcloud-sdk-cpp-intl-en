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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_OPENSSLREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_OPENSSLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * OpenSSL request structure.
                */
                class OpenSSLRequest : public AbstractModel
                {
                public:
                    OpenSSLRequest();
                    ~OpenSSLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * @return InstanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * @param _instanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
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
                     * 获取<p>SSL address type.</p><p>Enumeration values:</p><ul><li>0: Unlimited.</li><li>1: Private IPv4 address.</li><li>2: Private IPv6 address.</li><li>3: Public network.</li><li>-1: Unspecified.</li></ul><p>Default value: 0</p>
                     * @return AddressType <p>SSL address type.</p><p>Enumeration values:</p><ul><li>0: Unlimited.</li><li>1: Private IPv4 address.</li><li>2: Private IPv6 address.</li><li>3: Public network.</li><li>-1: Unspecified.</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetAddressType() const;

                    /**
                     * 设置<p>SSL address type.</p><p>Enumeration values:</p><ul><li>0: Unlimited.</li><li>1: Private IPv4 address.</li><li>2: Private IPv6 address.</li><li>3: Public network.</li><li>-1: Unspecified.</li></ul><p>Default value: 0</p>
                     * @param _addressType <p>SSL address type.</p><p>Enumeration values:</p><ul><li>0: Unlimited.</li><li>1: Private IPv4 address.</li><li>2: Private IPv6 address.</li><li>3: Public network.</li><li>-1: Unspecified.</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetAddressType(const int64_t& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>Key type.</p><p>Enumeration values:</p><ul><li>0: Tencent Cloud provides</li><li>1: User-defined certificate</li></ul><p>Default value: 0</p>
                     * @return CertSource <p>Key type.</p><p>Enumeration values:</p><ul><li>0: Tencent Cloud provides</li><li>1: User-defined certificate</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetCertSource() const;

                    /**
                     * 设置<p>Key type.</p><p>Enumeration values:</p><ul><li>0: Tencent Cloud provides</li><li>1: User-defined certificate</li></ul><p>Default value: 0</p>
                     * @param _certSource <p>Key type.</p><p>Enumeration values:</p><ul><li>0: Tencent Cloud provides</li><li>1: User-defined certificate</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetCertSource(const int64_t& _certSource);

                    /**
                     * 判断参数 CertSource 是否已赋值
                     * @return CertSource 是否已赋值
                     * 
                     */
                    bool CertSourceHasBeenSet() const;

                    /**
                     * 获取<p>Switch time. (This parameter is deprecated and no longer effective.)</p><p>Enumeration values:</p><ul><li>1: Operate within the maintenance window: SSL encryption will be enabled and executed within the set maintenance window. Use the DescribeMaintenanceWindow interface to query the set maintenance time period.</li><li>2: Immediate operation: The operation will be executed immediately with no waiting for the maintenance window. The system default setting is immediate operation.</li></ul>
                     * @return SwitchOption <p>Switch time. (This parameter is deprecated and no longer effective.)</p><p>Enumeration values:</p><ul><li>1: Operate within the maintenance window: SSL encryption will be enabled and executed within the set maintenance window. Use the DescribeMaintenanceWindow interface to query the set maintenance time period.</li><li>2: Immediate operation: The operation will be executed immediately with no waiting for the maintenance window. The system default setting is immediate operation.</li></ul>
                     * @deprecated
                     */
                    int64_t GetSwitchOption() const;

                    /**
                     * 设置<p>Switch time. (This parameter is deprecated and no longer effective.)</p><p>Enumeration values:</p><ul><li>1: Operate within the maintenance window: SSL encryption will be enabled and executed within the set maintenance window. Use the DescribeMaintenanceWindow interface to query the set maintenance time period.</li><li>2: Immediate operation: The operation will be executed immediately with no waiting for the maintenance window. The system default setting is immediate operation.</li></ul>
                     * @param _switchOption <p>Switch time. (This parameter is deprecated and no longer effective.)</p><p>Enumeration values:</p><ul><li>1: Operate within the maintenance window: SSL encryption will be enabled and executed within the set maintenance window. Use the DescribeMaintenanceWindow interface to query the set maintenance time period.</li><li>2: Immediate operation: The operation will be executed immediately with no waiting for the maintenance window. The system default setting is immediate operation.</li></ul>
                     * @deprecated
                     */
                    void SetSwitchOption(const int64_t& _switchOption);

                    /**
                     * 判断参数 SwitchOption 是否已赋值
                     * @return SwitchOption 是否已赋值
                     * @deprecated
                     */
                    bool SwitchOptionHasBeenSet() const;

                    /**
                     * 获取<p>Certificate ID of the SSL certificate service. Required when CertSource=1</p>
                     * @return CertId <p>Certificate ID of the SSL certificate service. Required when CertSource=1</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>Certificate ID of the SSL certificate service. Required when CertSource=1</p>
                     * @param _certId <p>Certificate ID of the SSL certificate service. Required when CertSource=1</p>
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
                     * 获取<p>Min TLS version</p><p>Enumeration values:</p><ul><li>TLSv1.0: TLSv1.0</li><li>TLSv1.1: TLSv1.1</li><li>TLSv1.2: TLSv1.2</li></ul>
                     * @return SSLMinVersion <p>Min TLS version</p><p>Enumeration values:</p><ul><li>TLSv1.0: TLSv1.0</li><li>TLSv1.1: TLSv1.1</li><li>TLSv1.2: TLSv1.2</li></ul>
                     * 
                     */
                    std::string GetSSLMinVersion() const;

                    /**
                     * 设置<p>Min TLS version</p><p>Enumeration values:</p><ul><li>TLSv1.0: TLSv1.0</li><li>TLSv1.1: TLSv1.1</li><li>TLSv1.2: TLSv1.2</li></ul>
                     * @param _sSLMinVersion <p>Min TLS version</p><p>Enumeration values:</p><ul><li>TLSv1.0: TLSv1.0</li><li>TLSv1.1: TLSv1.1</li><li>TLSv1.2: TLSv1.2</li></ul>
                     * 
                     */
                    void SetSSLMinVersion(const std::string& _sSLMinVersion);

                    /**
                     * 判断参数 SSLMinVersion 是否已赋值
                     * @return SSLMinVersion 是否已赋值
                     * 
                     */
                    bool SSLMinVersionHasBeenSet() const;

                    /**
                     * 获取<p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul><p>Default value: flexible</p>
                     * @return EncryptionMode <p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul><p>Default value: flexible</p>
                     * 
                     */
                    std::string GetEncryptionMode() const;

                    /**
                     * 设置<p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul><p>Default value: flexible</p>
                     * @param _encryptionMode <p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul><p>Default value: flexible</p>
                     * 
                     */
                    void SetEncryptionMode(const std::string& _encryptionMode);

                    /**
                     * 判断参数 EncryptionMode 是否已赋值
                     * @return EncryptionMode 是否已赋值
                     * 
                     */
                    bool EncryptionModeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>SSL address type.</p><p>Enumeration values:</p><ul><li>0: Unlimited.</li><li>1: Private IPv4 address.</li><li>2: Private IPv6 address.</li><li>3: Public network.</li><li>-1: Unspecified.</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>Key type.</p><p>Enumeration values:</p><ul><li>0: Tencent Cloud provides</li><li>1: User-defined certificate</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * <p>Switch time. (This parameter is deprecated and no longer effective.)</p><p>Enumeration values:</p><ul><li>1: Operate within the maintenance window: SSL encryption will be enabled and executed within the set maintenance window. Use the DescribeMaintenanceWindow interface to query the set maintenance time period.</li><li>2: Immediate operation: The operation will be executed immediately with no waiting for the maintenance window. The system default setting is immediate operation.</li></ul>
                     */
                    int64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                    /**
                     * <p>Certificate ID of the SSL certificate service. Required when CertSource=1</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>Min TLS version</p><p>Enumeration values:</p><ul><li>TLSv1.0: TLSv1.0</li><li>TLSv1.1: TLSv1.1</li><li>TLSv1.2: TLSv1.2</li></ul>
                     */
                    std::string m_sSLMinVersion;
                    bool m_sSLMinVersionHasBeenSet;

                    /**
                     * <p>Target encryption mode</p><p>Enumeration values:</p><ul><li>required: Enforced encryption</li><li>flexible: Compatible mode</li></ul><p>Default value: flexible</p>
                     */
                    std::string m_encryptionMode;
                    bool m_encryptionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_OPENSSLREQUEST_H_
