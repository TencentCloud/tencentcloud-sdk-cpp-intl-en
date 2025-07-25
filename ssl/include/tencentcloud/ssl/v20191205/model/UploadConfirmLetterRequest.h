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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCONFIRMLETTERREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCONFIRMLETTERREQUEST_H_

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
                * UploadConfirmLetter request structure.
                */
                class UploadConfirmLetterRequest : public AbstractModel
                {
                public:
                    UploadConfirmLetterRequest();
                    ~UploadConfirmLetterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate ID
                     * @return CertificateId Certificate ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID
                     * @param _certificateId Certificate ID
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
                     * 获取Base64-encoded confirmation letter file, which must be a JPG, JPEG, PNG, or PDF file of 1 KB to 1.4 MB
                     * @return ConfirmLetter Base64-encoded confirmation letter file, which must be a JPG, JPEG, PNG, or PDF file of 1 KB to 1.4 MB
                     * 
                     */
                    std::string GetConfirmLetter() const;

                    /**
                     * 设置Base64-encoded confirmation letter file, which must be a JPG, JPEG, PNG, or PDF file of 1 KB to 1.4 MB
                     * @param _confirmLetter Base64-encoded confirmation letter file, which must be a JPG, JPEG, PNG, or PDF file of 1 KB to 1.4 MB
                     * 
                     */
                    void SetConfirmLetter(const std::string& _confirmLetter);

                    /**
                     * 判断参数 ConfirmLetter 是否已赋值
                     * @return ConfirmLetter 是否已赋值
                     * 
                     */
                    bool ConfirmLetterHasBeenSet() const;

                private:

                    /**
                     * Certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Base64-encoded confirmation letter file, which must be a JPG, JPEG, PNG, or PDF file of 1 KB to 1.4 MB
                     */
                    std::string m_confirmLetter;
                    bool m_confirmLetterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADCONFIRMLETTERREQUEST_H_
