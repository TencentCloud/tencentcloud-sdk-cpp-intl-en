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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_

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
                * DescribeHostUpdateRecordDetail request structure.
                */
                class DescribeHostUpdateRecordDetailRequest : public AbstractModel
                {
                public:
                    DescribeHostUpdateRecordDetailRequest();
                    ~DescribeHostUpdateRecordDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Deployment record id, which is the record id returned by calling the UpdateCertificateInstance api, or the record id returned by calling the UpdateCertificateRecordRollback rollback api.
                     * @return DeployRecordId Deployment record id, which is the record id returned by calling the UpdateCertificateInstance api, or the record id returned by calling the UpdateCertificateRecordRollback rollback api.
                     * 
                     */
                    std::string GetDeployRecordId() const;

                    /**
                     * 设置Deployment record id, which is the record id returned by calling the UpdateCertificateInstance api, or the record id returned by calling the UpdateCertificateRecordRollback rollback api.
                     * @param _deployRecordId Deployment record id, which is the record id returned by calling the UpdateCertificateInstance api, or the record id returned by calling the UpdateCertificateRecordRollback rollback api.
                     * 
                     */
                    void SetDeployRecordId(const std::string& _deployRecordId);

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                    /**
                     * 获取Number of items per page. the default is 10. the maximum value is 200.
                     * @return Limit Number of items per page. the default is 10. the maximum value is 200.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置Number of items per page. the default is 10. the maximum value is 200.
                     * @param _limit Number of items per page. the default is 10. the maximum value is 200.
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset, starting from 0. default is 0.
                     * @return Offset Pagination offset, starting from 0. default is 0.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Pagination offset, starting from 0. default is 0.
                     * @param _offset Pagination offset, starting from 0. default is 0.
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Deployment record id, which is the record id returned by calling the UpdateCertificateInstance api, or the record id returned by calling the UpdateCertificateRecordRollback rollback api.
                     */
                    std::string m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * Number of items per page. the default is 10. the maximum value is 200.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, starting from 0. default is 0.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_
