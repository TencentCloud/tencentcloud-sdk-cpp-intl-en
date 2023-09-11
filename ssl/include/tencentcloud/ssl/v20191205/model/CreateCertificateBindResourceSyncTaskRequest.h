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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBINDRESOURCESYNCTASKREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBINDRESOURCESYNCTASKREQUEST_H_

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
                * CreateCertificateBindResourceSyncTask request structure.
                */
                class CreateCertificateBindResourceSyncTaskRequest : public AbstractModel
                {
                public:
                    CreateCertificateBindResourceSyncTaskRequest();
                    ~CreateCertificateBindResourceSyncTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The list of certificate IDs, 100 IDs at most.
                     * @return CertificateIds The list of certificate IDs, 100 IDs at most.
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置The list of certificate IDs, 100 IDs at most.
                     * @param _certificateIds The list of certificate IDs, 100 IDs at most.
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取Whether to use the cached results. Valid values: `1` (default) for yes and `0` for no. If any task completed within last 30 minutes exists under the current certificate ID, and the cache is used, the query result of the last task completed within 30 minutes will be read.
                     * @return IsCache Whether to use the cached results. Valid values: `1` (default) for yes and `0` for no. If any task completed within last 30 minutes exists under the current certificate ID, and the cache is used, the query result of the last task completed within 30 minutes will be read.
                     * 
                     */
                    uint64_t GetIsCache() const;

                    /**
                     * 设置Whether to use the cached results. Valid values: `1` (default) for yes and `0` for no. If any task completed within last 30 minutes exists under the current certificate ID, and the cache is used, the query result of the last task completed within 30 minutes will be read.
                     * @param _isCache Whether to use the cached results. Valid values: `1` (default) for yes and `0` for no. If any task completed within last 30 minutes exists under the current certificate ID, and the cache is used, the query result of the last task completed within 30 minutes will be read.
                     * 
                     */
                    void SetIsCache(const uint64_t& _isCache);

                    /**
                     * 判断参数 IsCache 是否已赋值
                     * @return IsCache 是否已赋值
                     * 
                     */
                    bool IsCacheHasBeenSet() const;

                private:

                    /**
                     * The list of certificate IDs, 100 IDs at most.
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * Whether to use the cached results. Valid values: `1` (default) for yes and `0` for no. If any task completed within last 30 minutes exists under the current certificate ID, and the cache is used, the query result of the last task completed within 30 minutes will be read.
                     */
                    uint64_t m_isCache;
                    bool m_isCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBINDRESOURCESYNCTASKREQUEST_H_
