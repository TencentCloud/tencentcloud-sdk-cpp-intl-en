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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CERTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Certificate information.
                */
                class CertInfo : public AbstractModel
                {
                public:
                    CertInfo();
                    ~CertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate ID.
                     * @return CertId Certificate ID.
                     * 
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置Certificate ID.
                     * @param _certId Certificate ID.
                     * 
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Certificate name.
                     * @return CertName Certificate name.
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Certificate name.
                     * @param _certName Certificate name.
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Description Description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param _description Description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The creation time in UTC format.
Note: Beijing time (UTC+8) is used.
                     * @return CreateTime The creation time in UTC format.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time in UTC format.
Note: Beijing time (UTC+8) is used.
                     * @param _createTime The creation time in UTC format.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Certificate content.
                     * @return HttpsCrt Certificate content.
                     * 
                     */
                    std::string GetHttpsCrt() const;

                    /**
                     * 设置Certificate content.
                     * @param _httpsCrt Certificate content.
                     * 
                     */
                    void SetHttpsCrt(const std::string& _httpsCrt);

                    /**
                     * 判断参数 HttpsCrt 是否已赋值
                     * @return HttpsCrt 是否已赋值
                     * 
                     */
                    bool HttpsCrtHasBeenSet() const;

                    /**
                     * 获取Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate
                     * @return CertType Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate
                     * @param _certType Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取The certificate expiration time in UTC format.
Note: Beijing time (UTC+8) is used.
                     * @return CertExpireTime The certificate expiration time in UTC format.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置The certificate expiration time in UTC format.
Note: Beijing time (UTC+8) is used.
                     * @param _certExpireTime The certificate expiration time in UTC format.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    void SetCertExpireTime(const std::string& _certExpireTime);

                    /**
                     * 判断参数 CertExpireTime 是否已赋值
                     * @return CertExpireTime 是否已赋值
                     * 
                     */
                    bool CertExpireTimeHasBeenSet() const;

                    /**
                     * 获取List of domain names that use this certificate.
                     * @return DomainList List of domain names that use this certificate.
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置List of domain names that use this certificate.
                     * @param _domainList List of domain names that use this certificate.
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * Certificate ID.
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate name.
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The creation time in UTC format.
Note: Beijing time (UTC+8) is used.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Certificate content.
                     */
                    std::string m_httpsCrt;
                    bool m_httpsCrtHasBeenSet;

                    /**
                     * Certificate type.
0: user-added certificate
1: Tencent Cloud-hosted certificate
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * The certificate expiration time in UTC format.
Note: Beijing time (UTC+8) is used.
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * List of domain names that use this certificate.
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CERTINFO_H_
