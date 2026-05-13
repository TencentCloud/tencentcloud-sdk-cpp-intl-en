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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICECERTIFICATEITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICECERTIFICATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Device certificate information
                */
                class DeviceCertificateItem : public AbstractModel
                {
                public:
                    DeviceCertificateItem();
                    ~DeviceCertificateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client ID.
                     * @return ClientId Client ID.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID.
                     * @param _clientId Client ID.
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取device certificate
                     * @return DeviceCertificate device certificate
                     * 
                     */
                    std::string GetDeviceCertificate() const;

                    /**
                     * 设置device certificate
                     * @param _deviceCertificate device certificate
                     * 
                     */
                    void SetDeviceCertificate(const std::string& _deviceCertificate);

                    /**
                     * 判断参数 DeviceCertificate 是否已赋值
                     * @return DeviceCertificate 是否已赋值
                     * 
                     */
                    bool DeviceCertificateHasBeenSet() const;

                    /**
                     * 获取Device certificate SN serial number, used for unique identification of a device certificate
                     * @return DeviceCertificateSn Device certificate SN serial number, used for unique identification of a device certificate
                     * 
                     */
                    std::string GetDeviceCertificateSn() const;

                    /**
                     * 设置Device certificate SN serial number, used for unique identification of a device certificate
                     * @param _deviceCertificateSn Device certificate SN serial number, used for unique identification of a device certificate
                     * 
                     */
                    void SetDeviceCertificateSn(const std::string& _deviceCertificateSn);

                    /**
                     * 判断参数 DeviceCertificateSn 是否已赋值
                     * @return DeviceCertificateSn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateSnHasBeenSet() const;

                    /**
                     * 获取Device certificate Cn
                     * @return DeviceCertificateCn Device certificate Cn
                     * 
                     */
                    std::string GetDeviceCertificateCn() const;

                    /**
                     * 设置Device certificate Cn
                     * @param _deviceCertificateCn Device certificate Cn
                     * 
                     */
                    void SetDeviceCertificateCn(const std::string& _deviceCertificateCn);

                    /**
                     * 判断参数 DeviceCertificateCn 是否已赋值
                     * @return DeviceCertificateCn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateCnHasBeenSet() const;

                    /**
                     * 获取Serial number of the CA cert that issued the cert
                     * @return CaSn Serial number of the CA cert that issued the cert
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 设置Serial number of the CA cert that issued the cert
                     * @param _caSn Serial number of the CA cert that issued the cert
                     * 
                     */
                    void SetCaSn(const std::string& _caSn);

                    /**
                     * 判断参数 CaSn 是否已赋值
                     * @return CaSn 是否已赋值
                     * 
                     */
                    bool CaSnHasBeenSet() const;

                    /**
                     * 获取Certificate format, currently only support PEM
                     * @return Format Certificate format, currently only support PEM
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Certificate format, currently only support PEM
                     * @param _format Certificate format, currently only support PEM
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Device certificate status
ACTIVE: Activate
INACTIVE: Inactive
REVOKED: Revoked
PENDING_ACTIVATION: To be activated.
                     * @return Status Device certificate status
ACTIVE: Activate
INACTIVE: Inactive
REVOKED: Revoked
PENDING_ACTIVATION: To be activated.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Device certificate status
ACTIVE: Activate
INACTIVE: Inactive
REVOKED: Revoked
PENDING_ACTIVATION: To be activated.
                     * @param _status Device certificate status
ACTIVE: Activate
INACTIVE: Inactive
REVOKED: Revoked
PENDING_ACTIVATION: To be activated.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Organization unit
                     * @return OrganizationalUnit Organization unit
                     * 
                     */
                    std::string GetOrganizationalUnit() const;

                    /**
                     * 设置Organization unit
                     * @param _organizationalUnit Organization unit
                     * 
                     */
                    void SetOrganizationalUnit(const std::string& _organizationalUnit);

                    /**
                     * 判断参数 OrganizationalUnit 是否已赋值
                     * @return OrganizationalUnit 是否已赋值
                     * 
                     */
                    bool OrganizationalUnitHasBeenSet() const;

                    /**
                     * 获取Last activation time, millisecond-level timestamp.
                     * @return LastActivationTime Last activation time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetLastActivationTime() const;

                    /**
                     * 设置Last activation time, millisecond-level timestamp.
                     * @param _lastActivationTime Last activation time, millisecond-level timestamp.
                     * 
                     */
                    void SetLastActivationTime(const int64_t& _lastActivationTime);

                    /**
                     * 判断参数 LastActivationTime 是否已赋值
                     * @return LastActivationTime 是否已赋值
                     * 
                     */
                    bool LastActivationTimeHasBeenSet() const;

                    /**
                     * 获取Last cancellation activation time, millisecond-level timestamp.
                     * @return LastInactivationTime Last cancellation activation time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetLastInactivationTime() const;

                    /**
                     * 设置Last cancellation activation time, millisecond-level timestamp.
                     * @param _lastInactivationTime Last cancellation activation time, millisecond-level timestamp.
                     * 
                     */
                    void SetLastInactivationTime(const int64_t& _lastInactivationTime);

                    /**
                     * 判断参数 LastInactivationTime 是否已赋值
                     * @return LastInactivationTime 是否已赋值
                     * 
                     */
                    bool LastInactivationTimeHasBeenSet() const;

                    /**
                     * 获取createTime, millisecond-level timestamp.
                     * @return CreatedTime createTime, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 设置createTime, millisecond-level timestamp.
                     * @param _createdTime createTime, millisecond-level timestamp.
                     * 
                     */
                    void SetCreatedTime(const int64_t& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Update time, millisecond-level timestamp.
                     * @return UpdateTime Update time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time, millisecond-level timestamp.
                     * @param _updateTime Update time, millisecond-level timestamp.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Certificate source:
API, Manual Registration   
Automatic JITP registration
                     * @return CertificateSource Certificate source:
API, Manual Registration   
Automatic JITP registration
                     * 
                     */
                    std::string GetCertificateSource() const;

                    /**
                     * 设置Certificate source:
API, Manual Registration   
Automatic JITP registration
                     * @param _certificateSource Certificate source:
API, Manual Registration   
Automatic JITP registration
                     * 
                     */
                    void SetCertificateSource(const std::string& _certificateSource);

                    /**
                     * 判断参数 CertificateSource 是否已赋值
                     * @return CertificateSource 是否已赋值
                     * 
                     */
                    bool CertificateSourceHasBeenSet() const;

                    /**
                     * 获取Certificate expiration date, millisecond-level timestamp.
                     * @return NotAfterTime Certificate expiration date, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetNotAfterTime() const;

                    /**
                     * 设置Certificate expiration date, millisecond-level timestamp.
                     * @param _notAfterTime Certificate expiration date, millisecond-level timestamp.
                     * 
                     */
                    void SetNotAfterTime(const int64_t& _notAfterTime);

                    /**
                     * 判断参数 NotAfterTime 是否已赋值
                     * @return NotAfterTime 是否已赋值
                     * 
                     */
                    bool NotAfterTimeHasBeenSet() const;

                    /**
                     * 获取Start date when the certificate takes effect, millisecond-level timestamp.
                     * @return NotBeforeTime Start date when the certificate takes effect, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetNotBeforeTime() const;

                    /**
                     * 设置Start date when the certificate takes effect, millisecond-level timestamp.
                     * @param _notBeforeTime Start date when the certificate takes effect, millisecond-level timestamp.
                     * 
                     */
                    void SetNotBeforeTime(const int64_t& _notBeforeTime);

                    /**
                     * 判断参数 NotBeforeTime 是否已赋值
                     * @return NotBeforeTime 是否已赋值
                     * 
                     */
                    bool NotBeforeTimeHasBeenSet() const;

                private:

                    /**
                     * Client ID.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * device certificate
                     */
                    std::string m_deviceCertificate;
                    bool m_deviceCertificateHasBeenSet;

                    /**
                     * Device certificate SN serial number, used for unique identification of a device certificate
                     */
                    std::string m_deviceCertificateSn;
                    bool m_deviceCertificateSnHasBeenSet;

                    /**
                     * Device certificate Cn
                     */
                    std::string m_deviceCertificateCn;
                    bool m_deviceCertificateCnHasBeenSet;

                    /**
                     * Serial number of the CA cert that issued the cert
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * Certificate format, currently only support PEM
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Device certificate status
ACTIVE: Activate
INACTIVE: Inactive
REVOKED: Revoked
PENDING_ACTIVATION: To be activated.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Organization unit
                     */
                    std::string m_organizationalUnit;
                    bool m_organizationalUnitHasBeenSet;

                    /**
                     * Last activation time, millisecond-level timestamp.
                     */
                    int64_t m_lastActivationTime;
                    bool m_lastActivationTimeHasBeenSet;

                    /**
                     * Last cancellation activation time, millisecond-level timestamp.
                     */
                    int64_t m_lastInactivationTime;
                    bool m_lastInactivationTimeHasBeenSet;

                    /**
                     * createTime, millisecond-level timestamp.
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Update time, millisecond-level timestamp.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Certificate source:
API, Manual Registration   
Automatic JITP registration
                     */
                    std::string m_certificateSource;
                    bool m_certificateSourceHasBeenSet;

                    /**
                     * Certificate expiration date, millisecond-level timestamp.
                     */
                    int64_t m_notAfterTime;
                    bool m_notAfterTimeHasBeenSet;

                    /**
                     * Start date when the certificate takes effect, millisecond-level timestamp.
                     */
                    int64_t m_notBeforeTime;
                    bool m_notBeforeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICECERTIFICATEITEM_H_
