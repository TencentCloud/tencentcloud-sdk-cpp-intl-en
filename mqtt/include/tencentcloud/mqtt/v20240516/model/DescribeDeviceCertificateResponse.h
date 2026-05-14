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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATERESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATERESPONSE_H_

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
                * DescribeDeviceCertificate response structure.
                */
                class DescribeDeviceCertificateResponse : public AbstractModel
                {
                public:
                    DescribeDeviceCertificateResponse();
                    ~DescribeDeviceCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Create time, millisecond-level timestamp.
                     * @return CreatedTime Create time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last update time, millisecond-level timestamp.
                     * @return UpdateTime Last update time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Certificate expiration date, millisecond-level timestamp.
                     * @return NotAfterTime Certificate expiration date, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetNotAfterTime() const;

                    /**
                     * 判断参数 NotAfterTime 是否已赋值
                     * @return NotAfterTime 是否已赋值
                     * 
                     */
                    bool NotAfterTimeHasBeenSet() const;

                    /**
                     * 获取Last activation time, millisecond-level timestamp.
                     * @return LastActivationTime Last activation time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetLastActivationTime() const;

                    /**
                     * 判断参数 LastActivationTime 是否已赋值
                     * @return LastActivationTime 是否已赋值
                     * 
                     */
                    bool LastActivationTimeHasBeenSet() const;

                    /**
                     * 获取Last deactivation time, millisecond-level timestamp.
                     * @return LastInactivationTime Last deactivation time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetLastInactivationTime() const;

                    /**
                     * 判断参数 LastInactivationTime 是否已赋值
                     * @return LastInactivationTime 是否已赋值
                     * 
                     */
                    bool LastInactivationTimeHasBeenSet() const;

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
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Certificate serial number
                     * @return CaSn Certificate serial number
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 判断参数 CaSn 是否已赋值
                     * @return CaSn 是否已赋值
                     * 
                     */
                    bool CaSnHasBeenSet() const;

                    /**
                     * 获取Certificate serial number of the device
                     * @return DeviceCertificateSn Certificate serial number of the device
                     * 
                     */
                    std::string GetDeviceCertificateSn() const;

                    /**
                     * 判断参数 DeviceCertificateSn 是否已赋值
                     * @return DeviceCertificateSn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateSnHasBeenSet() const;

                    /**
                     * 获取Device certificate content
                     * @return DeviceCertificate Device certificate content
                     * 
                     */
                    std::string GetDeviceCertificate() const;

                    /**
                     * 判断参数 DeviceCertificate 是否已赋值
                     * @return DeviceCertificate 是否已赋值
                     * 
                     */
                    bool DeviceCertificateHasBeenSet() const;

                    /**
                     * 获取Device certificate common name
                     * @return DeviceCertificateCn Device certificate common name
                     * 
                     */
                    std::string GetDeviceCertificateCn() const;

                    /**
                     * 判断参数 DeviceCertificateCn 是否已赋值
                     * @return DeviceCertificateCn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateCnHasBeenSet() const;

                    /**
                     * 获取Certificate format, currently only support PEM format
                     * @return Format Certificate format, currently only support PEM format
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Client ID.
                     * @return ClientId Client ID.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Certificate source    
API: Manually register   
JITP: Automatic registration
                     * @return CertificateSource Certificate source    
API: Manually register   
JITP: Automatic registration
                     * 
                     */
                    std::string GetCertificateSource() const;

                    /**
                     * 判断参数 CertificateSource 是否已赋值
                     * @return CertificateSource 是否已赋值
                     * 
                     */
                    bool CertificateSourceHasBeenSet() const;

                    /**
                     * 获取Start of certificate effective time, millisecond-level timestamp.
                     * @return NotBeforeTime Start of certificate effective time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetNotBeforeTime() const;

                    /**
                     * 判断参数 NotBeforeTime 是否已赋值
                     * @return NotBeforeTime 是否已赋值
                     * 
                     */
                    bool NotBeforeTimeHasBeenSet() const;

                    /**
                     * 获取Organization unit
                     * @return OrganizationalUnit Organization unit
                     * 
                     */
                    std::string GetOrganizationalUnit() const;

                    /**
                     * 判断参数 OrganizationalUnit 是否已赋值
                     * @return OrganizationalUnit 是否已赋值
                     * 
                     */
                    bool OrganizationalUnitHasBeenSet() const;

                private:

                    /**
                     * Create time, millisecond-level timestamp.
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last update time, millisecond-level timestamp.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Certificate expiration date, millisecond-level timestamp.
                     */
                    int64_t m_notAfterTime;
                    bool m_notAfterTimeHasBeenSet;

                    /**
                     * Last activation time, millisecond-level timestamp.
                     */
                    int64_t m_lastActivationTime;
                    bool m_lastActivationTimeHasBeenSet;

                    /**
                     * Last deactivation time, millisecond-level timestamp.
                     */
                    int64_t m_lastInactivationTime;
                    bool m_lastInactivationTimeHasBeenSet;

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
                     * Certificate serial number
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * Certificate serial number of the device
                     */
                    std::string m_deviceCertificateSn;
                    bool m_deviceCertificateSnHasBeenSet;

                    /**
                     * Device certificate content
                     */
                    std::string m_deviceCertificate;
                    bool m_deviceCertificateHasBeenSet;

                    /**
                     * Device certificate common name
                     */
                    std::string m_deviceCertificateCn;
                    bool m_deviceCertificateCnHasBeenSet;

                    /**
                     * Certificate format, currently only support PEM format
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Client ID.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Certificate source    
API: Manually register   
JITP: Automatic registration
                     */
                    std::string m_certificateSource;
                    bool m_certificateSourceHasBeenSet;

                    /**
                     * Start of certificate effective time, millisecond-level timestamp.
                     */
                    int64_t m_notBeforeTime;
                    bool m_notBeforeTimeHasBeenSet;

                    /**
                     * Organization unit
                     */
                    std::string m_organizationalUnit;
                    bool m_organizationalUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATERESPONSE_H_
