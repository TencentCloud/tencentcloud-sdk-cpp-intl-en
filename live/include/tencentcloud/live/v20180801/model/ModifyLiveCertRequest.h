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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECERTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyLiveCert request structure.
                */
                class ModifyLiveCertRequest : public AbstractModel
                {
                public:
                    ModifyLiveCertRequest();
                    ~ModifyLiveCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate ID.
                     * @return CertId Certificate ID.
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Certificate ID.
                     * @param CertId Certificate ID.
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Certificate type. 0: user-added certificate, 1: Tencent Cloud-hosted certificate.
                     * @return CertType Certificate type. 0: user-added certificate, 1: Tencent Cloud-hosted certificate.
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置Certificate type. 0: user-added certificate, 1: Tencent Cloud-hosted certificate.
                     * @param CertType Certificate type. 0: user-added certificate, 1: Tencent Cloud-hosted certificate.
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取Certificate name.
                     * @return CertName Certificate name.
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Certificate name.
                     * @param CertName Certificate name.
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Certificate content, i.e., public key.
                     * @return HttpsCrt Certificate content, i.e., public key.
                     */
                    std::string GetHttpsCrt() const;

                    /**
                     * 设置Certificate content, i.e., public key.
                     * @param HttpsCrt Certificate content, i.e., public key.
                     */
                    void SetHttpsCrt(const std::string& _httpsCrt);

                    /**
                     * 判断参数 HttpsCrt 是否已赋值
                     * @return HttpsCrt 是否已赋值
                     */
                    bool HttpsCrtHasBeenSet() const;

                    /**
                     * 获取Private key.
                     * @return HttpsKey Private key.
                     */
                    std::string GetHttpsKey() const;

                    /**
                     * 设置Private key.
                     * @param HttpsKey Private key.
                     */
                    void SetHttpsKey(const std::string& _httpsKey);

                    /**
                     * 判断参数 HttpsKey 是否已赋值
                     * @return HttpsKey 是否已赋值
                     */
                    bool HttpsKeyHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Description Description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param Description Description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Certificate ID.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate type. 0: user-added certificate, 1: Tencent Cloud-hosted certificate.
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * Certificate name.
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Certificate content, i.e., public key.
                     */
                    std::string m_httpsCrt;
                    bool m_httpsCrtHasBeenSet;

                    /**
                     * Private key.
                     */
                    std::string m_httpsKey;
                    bool m_httpsKeyHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECERTREQUEST_H_
