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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_COMMITCERTIFICATEINFORMATIONRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_COMMITCERTIFICATEINFORMATIONRESPONSE_H_

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
                * CommitCertificateInformation response structure.
                */
                class CommitCertificateInformationResponse : public AbstractModel
                {
                public:
                    CommitCertificateInformationResponse();
                    ~CommitCertificateInformationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取TrustAsia order ID
                     * @return OrderId TrustAsia order ID
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Certificate status. 0: being reviewed; 1: approved; 2: not approved; 3: expired; 4: DNS record added; 5: OV certificate, to be submitted; 6: order being canceled; 7: cancelled; 8: information submitted, confirmation letter to be uploaded; 9: certificate being revoked; 10: revoked; 11: reissuing; 12: revocation confirmation letter to be uploaded.
                     * @return Status Certificate status. 0: being reviewed; 1: approved; 2: not approved; 3: expired; 4: DNS record added; 5: OV certificate, to be submitted; 6: order being canceled; 7: cancelled; 8: information submitted, confirmation letter to be uploaded; 9: certificate being revoked; 10: revoked; 11: reissuing; 12: revocation confirmation letter to be uploaded.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * TrustAsia order ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Certificate status. 0: being reviewed; 1: approved; 2: not approved; 3: expired; 4: DNS record added; 5: OV certificate, to be submitted; 6: order being canceled; 7: cancelled; 8: information submitted, confirmation letter to be uploaded; 9: certificate being revoked; 10: revoked; 11: reissuing; 12: revocation confirmation letter to be uploaded.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_COMMITCERTIFICATEINFORMATIONRESPONSE_H_
