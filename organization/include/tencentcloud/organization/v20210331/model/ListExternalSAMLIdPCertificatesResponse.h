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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTEXTERNALSAMLIDPCERTIFICATESRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTEXTERNALSAMLIDPCERTIFICATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/SAMLIdPCertificate.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListExternalSAMLIdPCertificates response structure.
                */
                class ListExternalSAMLIdPCertificatesResponse : public AbstractModel
                {
                public:
                    ListExternalSAMLIdPCertificatesResponse();
                    ~ListExternalSAMLIdPCertificatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of data entries that meet the request parameter conditions.
                     * @return TotalCounts Total number of data entries that meet the request parameter conditions.
                     * 
                     */
                    int64_t GetTotalCounts() const;

                    /**
                     * 判断参数 TotalCounts 是否已赋值
                     * @return TotalCounts 是否已赋值
                     * 
                     */
                    bool TotalCountsHasBeenSet() const;

                    /**
                     * 获取SAML signing certificate list.
                     * @return SAMLIdPCertificates SAML signing certificate list.
                     * 
                     */
                    std::vector<SAMLIdPCertificate> GetSAMLIdPCertificates() const;

                    /**
                     * 判断参数 SAMLIdPCertificates 是否已赋值
                     * @return SAMLIdPCertificates 是否已赋值
                     * 
                     */
                    bool SAMLIdPCertificatesHasBeenSet() const;

                private:

                    /**
                     * Total number of data entries that meet the request parameter conditions.
                     */
                    int64_t m_totalCounts;
                    bool m_totalCountsHasBeenSet;

                    /**
                     * SAML signing certificate list.
                     */
                    std::vector<SAMLIdPCertificate> m_sAMLIdPCertificates;
                    bool m_sAMLIdPCertificatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTEXTERNALSAMLIDPCERTIFICATESRESPONSE_H_
