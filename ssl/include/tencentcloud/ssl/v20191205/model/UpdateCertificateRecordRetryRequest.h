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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATERECORDRETRYREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATERECORDRETRYREQUEST_H_

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
                * UpdateCertificateRecordRetry request structure.
                */
                class UpdateCertificateRecordRetryRequest : public AbstractModel
                {
                public:
                    UpdateCertificateRecordRetryRequest();
                    ~UpdateCertificateRecordRetryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Record ID for pending retry deployment, which can be obtained through UpdateCertificateInstance. if this parameter is not provided, DeployRecordDetailId must be provided.
                     * @return DeployRecordId Record ID for pending retry deployment, which can be obtained through UpdateCertificateInstance. if this parameter is not provided, DeployRecordDetailId must be provided.
                     * 
                     */
                    int64_t GetDeployRecordId() const;

                    /**
                     * 设置Record ID for pending retry deployment, which can be obtained through UpdateCertificateInstance. if this parameter is not provided, DeployRecordDetailId must be provided.
                     * @param _deployRecordId Record ID for pending retry deployment, which can be obtained through UpdateCertificateInstance. if this parameter is not provided, DeployRecordDetailId must be provided.
                     * 
                     */
                    void SetDeployRecordId(const int64_t& _deployRecordId);

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                    /**
                     * 获取Detail ID for pending retry deployment record, which can be obtained through the DescribeHostUpdateRecordDetail api. if this parameter is not provided, DeployRecordId must be provided.
                     * @return DeployRecordDetailId Detail ID for pending retry deployment record, which can be obtained through the DescribeHostUpdateRecordDetail api. if this parameter is not provided, DeployRecordId must be provided.
                     * 
                     */
                    int64_t GetDeployRecordDetailId() const;

                    /**
                     * 设置Detail ID for pending retry deployment record, which can be obtained through the DescribeHostUpdateRecordDetail api. if this parameter is not provided, DeployRecordId must be provided.
                     * @param _deployRecordDetailId Detail ID for pending retry deployment record, which can be obtained through the DescribeHostUpdateRecordDetail api. if this parameter is not provided, DeployRecordId must be provided.
                     * 
                     */
                    void SetDeployRecordDetailId(const int64_t& _deployRecordDetailId);

                    /**
                     * 判断参数 DeployRecordDetailId 是否已赋值
                     * @return DeployRecordDetailId 是否已赋值
                     * 
                     */
                    bool DeployRecordDetailIdHasBeenSet() const;

                private:

                    /**
                     * Record ID for pending retry deployment, which can be obtained through UpdateCertificateInstance. if this parameter is not provided, DeployRecordDetailId must be provided.
                     */
                    int64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * Detail ID for pending retry deployment record, which can be obtained through the DescribeHostUpdateRecordDetail api. if this parameter is not provided, DeployRecordId must be provided.
                     */
                    int64_t m_deployRecordDetailId;
                    bool m_deployRecordDetailIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATERECORDRETRYREQUEST_H_
