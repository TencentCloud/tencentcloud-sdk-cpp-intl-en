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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATERECORDROLLBACKREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATERECORDROLLBACKREQUEST_H_

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
                * UpdateCertificateRecordRollback request structure.
                */
                class UpdateCertificateRecordRollbackRequest : public AbstractModel
                {
                public:
                    UpdateCertificateRecordRollbackRequest();
                    ~UpdateCertificateRecordRollbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取To-be-redeployed record ID
                     * @return DeployRecordId To-be-redeployed record ID
                     * 
                     */
                    int64_t GetDeployRecordId() const;

                    /**
                     * 设置To-be-redeployed record ID
                     * @param _deployRecordId To-be-redeployed record ID
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
                     * To-be-redeployed record ID
                     */
                    int64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATERECORDROLLBACKREQUEST_H_
