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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDEFAULTCERTIFICATESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDEFAULTCERTIFICATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DefaultServerCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDefaultCertificates response structure.
                */
                class DescribeDefaultCertificatesResponse : public AbstractModel
                {
                public:
                    DescribeDefaultCertificatesResponse();
                    ~DescribeDefaultCertificatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of certificates
                     * @return TotalCount Total number of certificates
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of default certificates
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CertInfo List of default certificates
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DefaultServerCertInfo> GetCertInfo() const;

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     * 
                     */
                    bool CertInfoHasBeenSet() const;

                private:

                    /**
                     * Total number of certificates
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of default certificates
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<DefaultServerCertInfo> m_certInfo;
                    bool m_certInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDEFAULTCERTIFICATESRESPONSE_H_
