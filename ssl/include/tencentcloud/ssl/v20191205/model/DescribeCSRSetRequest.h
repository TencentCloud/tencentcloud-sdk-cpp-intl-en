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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETREQUEST_H_

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
                * DescribeCSRSet request structure.
                */
                class DescribeCSRSetRequest : public AbstractModel
                {
                public:
                    DescribeCSRSetRequest();
                    ~DescribeCSRSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of CSRs on each page. The default value is 10, and the maximum value is 100.
                     * @return Limit The number of CSRs on each page. The default value is 10, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of CSRs on each page. The default value is 10, and the maximum value is 100.
                     * @param _limit The number of CSRs on each page. The default value is 10, and the maximum value is 100.
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
                     * 获取The pagination offset, starting from 0.	
                     * @return Offset The pagination offset, starting from 0.	
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The pagination offset, starting from 0.	
                     * @param _offset The pagination offset, starting from 0.	
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
                     * 获取The domain for CSR filtering
                     * @return Domain The domain for CSR filtering
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain for CSR filtering
                     * @param _domain The domain for CSR filtering
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The encryption algorithm for CSR filtering
                     * @return EncryptAlgo The encryption algorithm for CSR filtering
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 设置The encryption algorithm for CSR filtering
                     * @param _encryptAlgo The encryption algorithm for CSR filtering
                     * 
                     */
                    void SetEncryptAlgo(const std::string& _encryptAlgo);

                    /**
                     * 判断参数 EncryptAlgo 是否已赋值
                     * @return EncryptAlgo 是否已赋值
                     * 
                     */
                    bool EncryptAlgoHasBeenSet() const;

                private:

                    /**
                     * The number of CSRs on each page. The default value is 10, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The pagination offset, starting from 0.	
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The domain for CSR filtering
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The encryption algorithm for CSR filtering
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRSETREQUEST_H_
