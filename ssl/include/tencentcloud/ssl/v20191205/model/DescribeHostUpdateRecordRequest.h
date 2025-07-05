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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDREQUEST_H_

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
                * DescribeHostUpdateRecord request structure.
                */
                class DescribeHostUpdateRecordRequest : public AbstractModel
                {
                public:
                    DescribeHostUpdateRecordRequest();
                    ~DescribeHostUpdateRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Paging offset, starting from 0
                     * @return Offset Paging offset, starting from 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paging offset, starting from 0
                     * @param _offset Paging offset, starting from 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number per page, 10 by default.
                     * @return Limit Number per page, 10 by default.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number per page, 10 by default.
                     * @param _limit Number per page, 10 by default.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取New certificate ID
                     * @return CertificateId New certificate ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置New certificate ID
                     * @param _certificateId New certificate ID
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Old certificate ID
                     * @return OldCertificateId Old certificate ID
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置Old certificate ID
                     * @param _oldCertificateId Old certificate ID
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                private:

                    /**
                     * Paging offset, starting from 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number per page, 10 by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * New certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Old certificate ID
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDREQUEST_H_
