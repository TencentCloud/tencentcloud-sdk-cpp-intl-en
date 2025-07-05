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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDREQUEST_H_

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
                * DescribeHostUploadUpdateRecord request structure.
                */
                class DescribeHostUploadUpdateRecordRequest : public AbstractModel
                {
                public:
                    DescribeHostUploadUpdateRecordRequest();
                    ~DescribeHostUploadUpdateRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset, starting from 0.
                     * @return Offset Pagination offset, starting from 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, starting from 0.
                     * @param _offset Pagination offset, starting from 0.
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
                     * 获取Number of items per page. default is 10.
                     * @return Limit Number of items per page. default is 10.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. default is 10.
                     * @param _limit Number of items per page. default is 10.
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
                     * 获取Original certificate ID
                     * @return OldCertificateId Original certificate ID
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置Original certificate ID
                     * @param _oldCertificateId Original certificate ID
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
                     * Pagination offset, starting from 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page. default is 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Original certificate ID
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDREQUEST_H_
