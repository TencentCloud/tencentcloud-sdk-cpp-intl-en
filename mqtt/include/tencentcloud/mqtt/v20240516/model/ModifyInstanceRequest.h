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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * ModifyInstance request structure.
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @return InstanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @param _instanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
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
                     * 获取Specifies the instance name to be modified, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * @return Name Specifies the instance name to be modified, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the instance name to be modified, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * @param _name Specifies the instance name to be modified, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
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
                     * 获取Specifies the remark information to be modified, with a maximum of 128 characters.
                     * @return Remark Specifies the remark information to be modified, with a maximum of 128 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark information to be modified, with a maximum of 128 characters.
                     * @param _remark Specifies the remark information to be modified, with a maximum of 128 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Specifies the configuration specification to be changed.
Basic version and professional edition clusters cannot be upgraded to platinum version specifications. platinum edition clusters cannot be downgraded to basic version and enhanced specifications.
                     * @return SkuCode Specifies the configuration specification to be changed.
Basic version and professional edition clusters cannot be upgraded to platinum version specifications. platinum edition clusters cannot be downgraded to basic version and enhanced specifications.
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置Specifies the configuration specification to be changed.
Basic version and professional edition clusters cannot be upgraded to platinum version specifications. platinum edition clusters cannot be downgraded to basic version and enhanced specifications.
                     * @param _skuCode Specifies the configuration specification to be changed.
Basic version and professional edition clusters cannot be upgraded to platinum version specifications. platinum edition clusters cannot be downgraded to basic version and enhanced specifications.
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取Specifies the registration method for the client certificate.
JITP: automatically register.
API: register manually through api.
                     * @return DeviceCertificateProvisionType Specifies the registration method for the client certificate.
JITP: automatically register.
API: register manually through api.
                     * @deprecated
                     */
                    std::string GetDeviceCertificateProvisionType() const;

                    /**
                     * 设置Specifies the registration method for the client certificate.
JITP: automatically register.
API: register manually through api.
                     * @param _deviceCertificateProvisionType Specifies the registration method for the client certificate.
JITP: automatically register.
API: register manually through api.
                     * @deprecated
                     */
                    void SetDeviceCertificateProvisionType(const std::string& _deviceCertificateProvisionType);

                    /**
                     * 判断参数 DeviceCertificateProvisionType 是否已赋值
                     * @return DeviceCertificateProvisionType 是否已赋值
                     * @deprecated
                     */
                    bool DeviceCertificateProvisionTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to automatically activate the cert after automatic registration.
                     * @return AutomaticActivation Specifies whether to automatically activate the cert after automatic registration.
                     * @deprecated
                     */
                    bool GetAutomaticActivation() const;

                    /**
                     * 设置Specifies whether to automatically activate the cert after automatic registration.
                     * @param _automaticActivation Specifies whether to automatically activate the cert after automatic registration.
                     * @deprecated
                     */
                    void SetAutomaticActivation(const bool& _automaticActivation);

                    /**
                     * 判断参数 AutomaticActivation 是否已赋值
                     * @return AutomaticActivation 是否已赋值
                     * @deprecated
                     */
                    bool AutomaticActivationHasBeenSet() const;

                    /**
                     * 获取Authorization policy switch.
                     * @return AuthorizationPolicy Authorization policy switch.
                     * 
                     */
                    bool GetAuthorizationPolicy() const;

                    /**
                     * 设置Authorization policy switch.
                     * @param _authorizationPolicy Authorization policy switch.
                     * 
                     */
                    void SetAuthorizationPolicy(const bool& _authorizationPolicy);

                    /**
                     * 判断参数 AuthorizationPolicy 是否已赋值
                     * @return AuthorizationPolicy 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyHasBeenSet() const;

                    /**
                     * 获取Specifies whether to use the default server certificate.
                     * @return UseDefaultServerCert Specifies whether to use the default server certificate.
                     * 
                     */
                    bool GetUseDefaultServerCert() const;

                    /**
                     * 设置Specifies whether to use the default server certificate.
                     * @param _useDefaultServerCert Specifies whether to use the default server certificate.
                     * 
                     */
                    void SetUseDefaultServerCert(const bool& _useDefaultServerCert);

                    /**
                     * 判断参数 UseDefaultServerCert 是否已赋值
                     * @return UseDefaultServerCert 是否已赋值
                     * 
                     */
                    bool UseDefaultServerCertHasBeenSet() const;

                    /**
                     * 获取TLS: one-way authentication.
mTLS. specifies mutual authentication.
BYOC: one device, one certificate.
                     * @return X509Mode TLS: one-way authentication.
mTLS. specifies mutual authentication.
BYOC: one device, one certificate.
                     * 
                     */
                    std::string GetX509Mode() const;

                    /**
                     * 设置TLS: one-way authentication.
mTLS. specifies mutual authentication.
BYOC: one device, one certificate.
                     * @param _x509Mode TLS: one-way authentication.
mTLS. specifies mutual authentication.
BYOC: one device, one certificate.
                     * 
                     */
                    void SetX509Mode(const std::string& _x509Mode);

                    /**
                     * 判断参数 X509Mode 是否已赋值
                     * @return X509Mode 是否已赋值
                     * 
                     */
                    bool X509ModeHasBeenSet() const;

                    /**
                     * 获取Specifies the speed limit unit for client message send and receive in messages per second.
                     * @return MessageRate Specifies the speed limit unit for client message send and receive in messages per second.
                     * 
                     */
                    int64_t GetMessageRate() const;

                    /**
                     * 设置Specifies the speed limit unit for client message send and receive in messages per second.
                     * @param _messageRate Specifies the speed limit unit for client message send and receive in messages per second.
                     * 
                     */
                    void SetMessageRate(const int64_t& _messageRate);

                    /**
                     * 判断参数 MessageRate 是否已赋值
                     * @return MessageRate 是否已赋值
                     * 
                     */
                    bool MessageRateHasBeenSet() const;

                private:

                    /**
                     * tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the instance name to be modified, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the remark information to be modified, with a maximum of 128 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies the configuration specification to be changed.
Basic version and professional edition clusters cannot be upgraded to platinum version specifications. platinum edition clusters cannot be downgraded to basic version and enhanced specifications.
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * Specifies the registration method for the client certificate.
JITP: automatically register.
API: register manually through api.
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * Specifies whether to automatically activate the cert after automatic registration.
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                    /**
                     * Authorization policy switch.
                     */
                    bool m_authorizationPolicy;
                    bool m_authorizationPolicyHasBeenSet;

                    /**
                     * Specifies whether to use the default server certificate.
                     */
                    bool m_useDefaultServerCert;
                    bool m_useDefaultServerCertHasBeenSet;

                    /**
                     * TLS: one-way authentication.
mTLS. specifies mutual authentication.
BYOC: one device, one certificate.
                     */
                    std::string m_x509Mode;
                    bool m_x509ModeHasBeenSet;

                    /**
                     * Specifies the speed limit unit for client message send and receive in messages per second.
                     */
                    int64_t m_messageRate;
                    bool m_messageRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_
