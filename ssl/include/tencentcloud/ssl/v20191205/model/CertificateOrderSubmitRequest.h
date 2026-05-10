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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITREQUEST_H_

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
                * CertificateOrderSubmit request structure.
                */
                class CertificateOrderSubmitRequest : public AbstractModel
                {
                public:
                    CertificateOrderSubmitRequest();
                    ~CertificateOrderSubmitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Paid SSL certificate ID of materials to be submitted.	
                     * @return CertId Paid SSL certificate ID of materials to be submitted.	
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Paid SSL certificate ID of materials to be submitted.	
                     * @param _certId Paid SSL certificate ID of materials to be submitted.	
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
                     * 获取Whether to delete automatic DNS validation: 0, do not delete; 1, delete; default is do not delete.
                     * @return DeleteDnsAutoRecord Whether to delete automatic DNS validation: 0, do not delete; 1, delete; default is do not delete.
                     * 
                     */
                    uint64_t GetDeleteDnsAutoRecord() const;

                    /**
                     * 设置Whether to delete automatic DNS validation: 0, do not delete; 1, delete; default is do not delete.
                     * @param _deleteDnsAutoRecord Whether to delete automatic DNS validation: 0, do not delete; 1, delete; default is do not delete.
                     * 
                     */
                    void SetDeleteDnsAutoRecord(const uint64_t& _deleteDnsAutoRecord);

                    /**
                     * 判断参数 DeleteDnsAutoRecord 是否已赋值
                     * @return DeleteDnsAutoRecord 是否已赋值
                     * 
                     */
                    bool DeleteDnsAutoRecordHasBeenSet() const;

                    /**
                     * 获取Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual domain addition via FILE verification. Users are advised to manually add the specified path FILE to the root directory of the domain site for FILE verification. Either http or https access is sufficient. The domain site must be accessible by overseas certificate authorities. For the specific access allowlist, refer to the console page.
                     * @return VerifyType Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual domain addition via FILE verification. Users are advised to manually add the specified path FILE to the root directory of the domain site for FILE verification. Either http or https access is sufficient. The domain site must be accessible by overseas certificate authorities. For the specific access allowlist, refer to the console page.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual domain addition via FILE verification. Users are advised to manually add the specified path FILE to the root directory of the domain site for FILE verification. Either http or https access is sufficient. The domain site must be accessible by overseas certificate authorities. For the specific access allowlist, refer to the console page.
                     * @param _verifyType Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual domain addition via FILE verification. Users are advised to manually add the specified path FILE to the root directory of the domain site for FILE verification. Either http or https access is sufficient. The domain site must be accessible by overseas certificate authorities. For the specific access allowlist, refer to the console page.
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
                     * Paid SSL certificate ID of materials to be submitted.	
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Whether to delete automatic DNS validation: 0, do not delete; 1, delete; default is do not delete.
                     */
                    uint64_t m_deleteDnsAutoRecord;
                    bool m_deleteDnsAutoRecordHasBeenSet;

                    /**
                     * Domain validation method of the certificate
DNS: Manually add domain DNS validation. The user needs to manually add the verification value at the DNS service provider.
FILE: Manual domain addition via FILE verification. Users are advised to manually add the specified path FILE to the root directory of the domain site for FILE verification. Either http or https access is sufficient. The domain site must be accessible by overseas certificate authorities. For the specific access allowlist, refer to the console page.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITREQUEST_H_
