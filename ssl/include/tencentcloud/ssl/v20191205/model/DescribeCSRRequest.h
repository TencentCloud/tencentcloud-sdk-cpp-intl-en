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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRREQUEST_H_

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
                * DescribeCSR request structure.
                */
                class DescribeCSRRequest : public AbstractModel
                {
                public:
                    DescribeCSRRequest();
                    ~DescribeCSRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The CSR ID.
                     * @return CSRId The CSR ID.
                     * 
                     */
                    int64_t GetCSRId() const;

                    /**
                     * 设置The CSR ID.
                     * @param _cSRId The CSR ID.
                     * 
                     */
                    void SetCSRId(const int64_t& _cSRId);

                    /**
                     * 判断参数 CSRId 是否已赋值
                     * @return CSRId 是否已赋值
                     * 
                     */
                    bool CSRIdHasBeenSet() const;

                private:

                    /**
                     * The CSR ID.
                     */
                    int64_t m_cSRId;
                    bool m_cSRIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRREQUEST_H_
