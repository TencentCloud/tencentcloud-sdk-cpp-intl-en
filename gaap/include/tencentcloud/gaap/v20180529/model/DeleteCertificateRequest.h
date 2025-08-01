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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETECERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteCertificate request structure.
                */
                class DeleteCertificateRequest : public AbstractModel
                {
                public:
                    DeleteCertificateRequest();
                    ~DeleteCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the certificate to be deleted.
                     * @return CertificateId ID of the certificate to be deleted.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置ID of the certificate to be deleted.
                     * @param _certificateId ID of the certificate to be deleted.
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
                     * ID of the certificate to be deleted.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETECERTIFICATEREQUEST_H_
