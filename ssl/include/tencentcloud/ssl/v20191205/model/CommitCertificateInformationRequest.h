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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_COMMITCERTIFICATEINFORMATIONREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_COMMITCERTIFICATEINFORMATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CommitCertificateInformation request structure.
                */
                class CommitCertificateInformationRequest : public AbstractModel
                {
                public:
                    CommitCertificateInformationRequest();
                    ~CommitCertificateInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Paid certificate id of materials to be submitted.	
                     * @return CertificateId Paid certificate id of materials to be submitted.	
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Paid certificate id of materials to be submitted.	
                     * @param _certificateId Paid certificate id of materials to be submitted.	
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Certificate domain name verification method:.
DNS_AUTO: automatically adds domain dns verification, requiring user domain name resolution to be hosted on [cloud dns](https://console.cloud.tencent.com/cns) and under the same tencent cloud account as the certificate application.
DNS: manually add domain dns verification, which requires users to manually add verification values to the domain resolution service provider.
FILE: manual addition of domain name file verification. requires the user to manually add a specified path file in the root directory of the domain site for file verification, and either http or https passing is acceptable; the domain site needs to be accessible by overseas ca institutions, with the specific access allowlist being: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * @return VerifyType Certificate domain name verification method:.
DNS_AUTO: automatically adds domain dns verification, requiring user domain name resolution to be hosted on [cloud dns](https://console.cloud.tencent.com/cns) and under the same tencent cloud account as the certificate application.
DNS: manually add domain dns verification, which requires users to manually add verification values to the domain resolution service provider.
FILE: manual addition of domain name file verification. requires the user to manually add a specified path file in the root directory of the domain site for file verification, and either http or https passing is acceptable; the domain site needs to be accessible by overseas ca institutions, with the specific access allowlist being: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Certificate domain name verification method:.
DNS_AUTO: automatically adds domain dns verification, requiring user domain name resolution to be hosted on [cloud dns](https://console.cloud.tencent.com/cns) and under the same tencent cloud account as the certificate application.
DNS: manually add domain dns verification, which requires users to manually add verification values to the domain resolution service provider.
FILE: manual addition of domain name file verification. requires the user to manually add a specified path file in the root directory of the domain site for file verification, and either http or https passing is acceptable; the domain site needs to be accessible by overseas ca institutions, with the specific access allowlist being: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * @param _verifyType Certificate domain name verification method:.
DNS_AUTO: automatically adds domain dns verification, requiring user domain name resolution to be hosted on [cloud dns](https://console.cloud.tencent.com/cns) and under the same tencent cloud account as the certificate application.
DNS: manually add domain dns verification, which requires users to manually add verification values to the domain resolution service provider.
FILE: manual addition of domain name file verification. requires the user to manually add a specified path file in the root directory of the domain site for file verification, and either http or https passing is acceptable; the domain site needs to be accessible by overseas ca institutions, with the specific access allowlist being: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                private:

                    /**
                     * Paid certificate id of materials to be submitted.	
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Certificate domain name verification method:.
DNS_AUTO: automatically adds domain dns verification, requiring user domain name resolution to be hosted on [cloud dns](https://console.cloud.tencent.com/cns) and under the same tencent cloud account as the certificate application.
DNS: manually add domain dns verification, which requires users to manually add verification values to the domain resolution service provider.
FILE: manual addition of domain name file verification. requires the user to manually add a specified path file in the root directory of the domain site for file verification, and either http or https passing is acceptable; the domain site needs to be accessible by overseas ca institutions, with the specific access allowlist being: 64.78.193.238, 216.168.247.9, 216.168.249.9, 54.189.196.217.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_COMMITCERTIFICATEINFORMATIONREQUEST_H_
