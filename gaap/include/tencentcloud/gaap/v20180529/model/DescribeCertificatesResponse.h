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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/Certificate.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeCertificates response structure.
                */
                class DescribeCertificatesResponse : public AbstractModel
                {
                public:
                    DescribeCertificatesResponse();
                    ~DescribeCertificatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Server certificate list, which includes certificate ID and certificate name.
                     * @return CertificateSet Server certificate list, which includes certificate ID and certificate name.
                     * 
                     */
                    std::vector<Certificate> GetCertificateSet() const;

                    /**
                     * 判断参数 CertificateSet 是否已赋值
                     * @return CertificateSet 是否已赋值
                     * 
                     */
                    bool CertificateSetHasBeenSet() const;

                    /**
                     * 获取Total quantity of server certificates that match the query conditions.
                     * @return TotalCount Total quantity of server certificates that match the query conditions.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Server certificate list, which includes certificate ID and certificate name.
                     */
                    std::vector<Certificate> m_certificateSet;
                    bool m_certificateSetHasBeenSet;

                    /**
                     * Total quantity of server certificates that match the query conditions.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECERTIFICATESRESPONSE_H_
