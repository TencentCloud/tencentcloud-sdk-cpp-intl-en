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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REPLACECERTFORLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REPLACECERTFORLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ReplaceCertForLoadBalancers request structure.
                */
                class ReplaceCertForLoadBalancersRequest : public AbstractModel
                {
                public:
                    ReplaceCertForLoadBalancersRequest();
                    ~ReplaceCertForLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the certificate to be replaced, which can be a server certificate or a client certificate.
                     * @return OldCertificateId ID of the certificate to be replaced, which can be a server certificate or a client certificate.
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置ID of the certificate to be replaced, which can be a server certificate or a client certificate.
                     * @param OldCertificateId ID of the certificate to be replaced, which can be a server certificate or a client certificate.
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取Information such as the content of the new certificate
                     * @return Certificate Information such as the content of the new certificate
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置Information such as the content of the new certificate
                     * @param Certificate Information such as the content of the new certificate
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                private:

                    /**
                     * ID of the certificate to be replaced, which can be a server certificate or a client certificate.
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * Information such as the content of the new certificate
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REPLACECERTFORLOADBALANCERSREQUEST_H_
