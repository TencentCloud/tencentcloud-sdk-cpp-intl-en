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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECOMPANIESRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECOMPANIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CompanyInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCompanies response structure.
                */
                class DescribeCompaniesResponse : public AbstractModel
                {
                public:
                    DescribeCompaniesResponse();
                    ~DescribeCompaniesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Company List
                     * @return Companies Company List
                     * 
                     */
                    std::vector<CompanyInfo> GetCompanies() const;

                    /**
                     * 判断参数 Companies 是否已赋值
                     * @return Companies 是否已赋值
                     * 
                     */
                    bool CompaniesHasBeenSet() const;

                    /**
                     * 获取Total number of companies
                     * @return TotalCount Total number of companies
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Company List
                     */
                    std::vector<CompanyInfo> m_companies;
                    bool m_companiesHasBeenSet;

                    /**
                     * Total number of companies
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECOMPANIESRESPONSE_H_
