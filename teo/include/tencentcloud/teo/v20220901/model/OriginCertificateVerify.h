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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINCERTIFICATEVERIFY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINCERTIFICATEVERIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Specifies the mode of HTTPS origin certificate verification.
                */
                class OriginCertificateVerify : public AbstractModel
                {
                public:
                    OriginCertificateVerify();
                    ~OriginCertificateVerify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin certificate verification mode. valid values: <li>disable: disable origin certificate verification.</li> <li>custom_ca: use designated trusted ca certificate for verification.</li>.
                     * @return VerificationMode Origin certificate verification mode. valid values: <li>disable: disable origin certificate verification.</li> <li>custom_ca: use designated trusted ca certificate for verification.</li>.
                     * 
                     */
                    std::string GetVerificationMode() const;

                    /**
                     * 设置Origin certificate verification mode. valid values: <li>disable: disable origin certificate verification.</li> <li>custom_ca: use designated trusted ca certificate for verification.</li>.
                     * @param _verificationMode Origin certificate verification mode. valid values: <li>disable: disable origin certificate verification.</li> <li>custom_ca: use designated trusted ca certificate for verification.</li>.
                     * 
                     */
                    void SetVerificationMode(const std::string& _verificationMode);

                    /**
                     * 判断参数 VerificationMode 是否已赋值
                     * @return VerificationMode 是否已赋值
                     * 
                     */
                    bool VerificationModeHasBeenSet() const;

                    /**
                     * 获取Specifies the trusted CA certificate list. the origin certificate must be issued by this CA to pass verification. note: this parameter is required only when VerificationMode is custom_CA. input this parameter to specify the trusted CA certificate information.
OriginCertificateVerify specifies CertId of the corresponding certificate as an input parameter in ModifyHostsCertificate. only need to go to the SSL certificate service list (https://console.cloud.tencent.com/SSL) to check CertId.	

                     * @return CustomCACerts Specifies the trusted CA certificate list. the origin certificate must be issued by this CA to pass verification. note: this parameter is required only when VerificationMode is custom_CA. input this parameter to specify the trusted CA certificate information.
OriginCertificateVerify specifies CertId of the corresponding certificate as an input parameter in ModifyHostsCertificate. only need to go to the SSL certificate service list (https://console.cloud.tencent.com/SSL) to check CertId.	

                     * 
                     */
                    std::vector<CertificateInfo> GetCustomCACerts() const;

                    /**
                     * 设置Specifies the trusted CA certificate list. the origin certificate must be issued by this CA to pass verification. note: this parameter is required only when VerificationMode is custom_CA. input this parameter to specify the trusted CA certificate information.
OriginCertificateVerify specifies CertId of the corresponding certificate as an input parameter in ModifyHostsCertificate. only need to go to the SSL certificate service list (https://console.cloud.tencent.com/SSL) to check CertId.	

                     * @param _customCACerts Specifies the trusted CA certificate list. the origin certificate must be issued by this CA to pass verification. note: this parameter is required only when VerificationMode is custom_CA. input this parameter to specify the trusted CA certificate information.
OriginCertificateVerify specifies CertId of the corresponding certificate as an input parameter in ModifyHostsCertificate. only need to go to the SSL certificate service list (https://console.cloud.tencent.com/SSL) to check CertId.	

                     * 
                     */
                    void SetCustomCACerts(const std::vector<CertificateInfo>& _customCACerts);

                    /**
                     * 判断参数 CustomCACerts 是否已赋值
                     * @return CustomCACerts 是否已赋值
                     * 
                     */
                    bool CustomCACertsHasBeenSet() const;

                private:

                    /**
                     * Origin certificate verification mode. valid values: <li>disable: disable origin certificate verification.</li> <li>custom_ca: use designated trusted ca certificate for verification.</li>.
                     */
                    std::string m_verificationMode;
                    bool m_verificationModeHasBeenSet;

                    /**
                     * Specifies the trusted CA certificate list. the origin certificate must be issued by this CA to pass verification. note: this parameter is required only when VerificationMode is custom_CA. input this parameter to specify the trusted CA certificate information.
OriginCertificateVerify specifies CertId of the corresponding certificate as an input parameter in ModifyHostsCertificate. only need to go to the SSL certificate service list (https://console.cloud.tencent.com/SSL) to check CertId.	

                     */
                    std::vector<CertificateInfo> m_customCACerts;
                    bool m_customCACertsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINCERTIFICATEVERIFY_H_
