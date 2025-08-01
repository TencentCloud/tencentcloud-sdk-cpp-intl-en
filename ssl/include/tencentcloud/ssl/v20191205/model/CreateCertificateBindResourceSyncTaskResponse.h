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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBINDRESOURCESYNCTASKRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBINDRESOURCESYNCTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertTaskId.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CreateCertificateBindResourceSyncTask response structure.
                */
                class CreateCertificateBindResourceSyncTaskResponse : public AbstractModel
                {
                public:
                    CreateCertificateBindResourceSyncTaskResponse();
                    ~CreateCertificateBindResourceSyncTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The IDs of async tasks for querying cloud resources associated with a certificate.
                     * @return CertTaskIds The IDs of async tasks for querying cloud resources associated with a certificate.
                     * 
                     */
                    std::vector<CertTaskId> GetCertTaskIds() const;

                    /**
                     * 判断参数 CertTaskIds 是否已赋值
                     * @return CertTaskIds 是否已赋值
                     * 
                     */
                    bool CertTaskIdsHasBeenSet() const;

                private:

                    /**
                     * The IDs of async tasks for querying cloud resources associated with a certificate.
                     */
                    std::vector<CertTaskId> m_certTaskIds;
                    bool m_certTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBINDRESOURCESYNCTASKRESPONSE_H_
