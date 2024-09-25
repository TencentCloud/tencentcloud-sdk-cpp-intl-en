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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeCertificateVerifyResult response structure.
                */
                class DescribeCertificateVerifyResultResponse : public AbstractModel
                {
                public:
                    DescribeCertificateVerifyResultResponse();
                    ~DescribeCertificateVerifyResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Status code
0: normal certificate
310: abnormal certificate
311: certificate expired
312: certificate about to expire
                     * @return Status Status code
0: normal certificate
310: abnormal certificate
311: certificate expired
312: certificate about to expire
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error details
                     * @return Detail Error details
                     * 
                     */
                    std::vector<std::string> GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return NotAfter Expiration time
                     * 
                     */
                    std::string GetNotAfter() const;

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is changed
0: not changed
1: changed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Changed Whether the certificate is changed
0: not changed
1: changed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetChanged() const;

                    /**
                     * 判断参数 Changed 是否已赋值
                     * @return Changed 是否已赋值
                     * 
                     */
                    bool ChangedHasBeenSet() const;

                private:

                    /**
                     * Status code
0: normal certificate
310: abnormal certificate
311: certificate expired
312: certificate about to expire
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error details
                     */
                    std::vector<std::string> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * Whether the certificate is changed
0: not changed
1: changed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_changed;
                    bool m_changedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTRESPONSE_H_
