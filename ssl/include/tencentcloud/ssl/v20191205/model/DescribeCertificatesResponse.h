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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Certificates.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
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
                     * 获取Total number
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Certificates List
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Certificates> GetCertificates() const;

                    /**
                     * 判断参数 Certificates 是否已赋值
                     * @return Certificates 是否已赋值
                     */
                    bool CertificatesHasBeenSet() const;

                private:

                    /**
                     * Total number
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Certificates> m_certificates;
                    bool m_certificatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESRESPONSE_H_
