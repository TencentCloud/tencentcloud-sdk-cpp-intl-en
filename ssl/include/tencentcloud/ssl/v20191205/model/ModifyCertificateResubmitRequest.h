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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATERESUBMITREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATERESUBMITREQUEST_H_

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
                * ModifyCertificateResubmit request structure.
                */
                class ModifyCertificateResubmitRequest : public AbstractModel
                {
                public:
                    ModifyCertificateResubmitRequest();
                    ~ModifyCertificateResubmitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The certificate ID.
                     * @return CertificateId The certificate ID.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置The certificate ID.
                     * @param _certificateId The certificate ID.
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                private:

                    /**
                     * The certificate ID.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATERESUBMITREQUEST_H_
