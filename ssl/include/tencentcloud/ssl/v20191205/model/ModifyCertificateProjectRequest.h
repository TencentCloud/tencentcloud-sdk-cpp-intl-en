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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTREQUEST_H_

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
                * ModifyCertificateProject request structure.
                */
                class ModifyCertificateProjectRequest : public AbstractModel
                {
                public:
                    ModifyCertificateProjectRequest();
                    ~ModifyCertificateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID list of certificates whose projects need to be modified. A maximum of 100 certificate IDs are supported.
                     * @return CertificateIdList ID list of certificates whose projects need to be modified. A maximum of 100 certificate IDs are supported.
                     * 
                     */
                    std::vector<std::string> GetCertificateIdList() const;

                    /**
                     * 设置ID list of certificates whose projects need to be modified. A maximum of 100 certificate IDs are supported.
                     * @param _certificateIdList ID list of certificates whose projects need to be modified. A maximum of 100 certificate IDs are supported.
                     * 
                     */
                    void SetCertificateIdList(const std::vector<std::string>& _certificateIdList);

                    /**
                     * 判断参数 CertificateIdList 是否已赋值
                     * @return CertificateIdList 是否已赋值
                     * 
                     */
                    bool CertificateIdListHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * ID list of certificates whose projects need to be modified. A maximum of 100 certificate IDs are supported.
                     */
                    std::vector<std::string> m_certificateIdList;
                    bool m_certificateIdListHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MODIFYCERTIFICATEPROJECTREQUEST_H_
