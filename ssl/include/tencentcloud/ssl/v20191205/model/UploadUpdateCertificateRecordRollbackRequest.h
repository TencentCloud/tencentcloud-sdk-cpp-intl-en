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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATERECORDROLLBACKREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATERECORDROLLBACKREQUEST_H_

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
                * UploadUpdateCertificateRecordRollback request structure.
                */
                class UploadUpdateCertificateRecordRollbackRequest : public AbstractModel
                {
                public:
                    UploadUpdateCertificateRecordRollbackRequest();
                    ~UploadUpdateCertificateRecordRollbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Record ID of the certificate pending rollback, obtained through the UpdateCertificateInstance API.
                     * @return DeployRecordId Record ID of the certificate pending rollback, obtained through the UpdateCertificateInstance API.
                     * 
                     */
                    int64_t GetDeployRecordId() const;

                    /**
                     * 设置Record ID of the certificate pending rollback, obtained through the UpdateCertificateInstance API.
                     * @param _deployRecordId Record ID of the certificate pending rollback, obtained through the UpdateCertificateInstance API.
                     * 
                     */
                    void SetDeployRecordId(const int64_t& _deployRecordId);

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                private:

                    /**
                     * Record ID of the certificate pending rollback, obtained through the UpdateCertificateInstance API.
                     */
                    int64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATERECORDROLLBACKREQUEST_H_
