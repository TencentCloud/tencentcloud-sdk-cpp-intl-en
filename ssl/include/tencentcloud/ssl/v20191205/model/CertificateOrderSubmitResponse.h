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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITRESPONSE_H_

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
                * CertificateOrderSubmit response structure.
                */
                class CertificateOrderSubmitResponse : public AbstractModel
                {
                public:
                    CertificateOrderSubmitResponse();
                    ~CertificateOrderSubmitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Order number from the certificate authority.
                     * @return OrderId Order number from the certificate authority.
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Certificate status. 0=Under review, 1=Approved, 2=Review failed, 3=Expired, 4=DNS record added, 5=Enterprise certificate, pending submission, 6=Order cancellation in progress, 7=Canceled, 8=Documents submitted, pending upload of confirmation letter, 9=Certificate revocation in progress, 10=Revoked, 11=Reissue in progress, 12=Pending upload of revocation confirmation letter, 13=Free certificate pending document submission.
                     * @return Status Certificate status. 0=Under review, 1=Approved, 2=Review failed, 3=Expired, 4=DNS record added, 5=Enterprise certificate, pending submission, 6=Order cancellation in progress, 7=Canceled, 8=Documents submitted, pending upload of confirmation letter, 9=Certificate revocation in progress, 10=Revoked, 11=Reissue in progress, 12=Pending upload of revocation confirmation letter, 13=Free certificate pending document submission.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether prereview is required or not
                     * @return IsAudited Whether prereview is required or not
                     * 
                     */
                    bool GetIsAudited() const;

                    /**
                     * 判断参数 IsAudited 是否已赋值
                     * @return IsAudited 是否已赋值
                     * 
                     */
                    bool IsAuditedHasBeenSet() const;

                private:

                    /**
                     * Order number from the certificate authority.
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Certificate status. 0=Under review, 1=Approved, 2=Review failed, 3=Expired, 4=DNS record added, 5=Enterprise certificate, pending submission, 6=Order cancellation in progress, 7=Canceled, 8=Documents submitted, pending upload of confirmation letter, 9=Certificate revocation in progress, 10=Revoked, 11=Reissue in progress, 12=Pending upload of revocation confirmation letter, 13=Free certificate pending document submission.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether prereview is required or not
                     */
                    bool m_isAudited;
                    bool m_isAuditedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITRESPONSE_H_
