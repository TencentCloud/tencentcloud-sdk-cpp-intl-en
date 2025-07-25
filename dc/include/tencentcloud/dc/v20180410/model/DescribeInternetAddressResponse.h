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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSRESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/InternetAddressDetail.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeInternetAddress response structure.
                */
                class DescribeInternetAddressResponse : public AbstractModel
                {
                public:
                    DescribeInternetAddressResponse();
                    ~DescribeInternetAddressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of public IP addresses for internet tunnels
                     * @return TotalCount Number of public IP addresses for internet tunnels
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of the public IP addresses for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Subnets List of the public IP addresses for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InternetAddressDetail> GetSubnets() const;

                    /**
                     * 判断参数 Subnets 是否已赋值
                     * @return Subnets 是否已赋值
                     * 
                     */
                    bool SubnetsHasBeenSet() const;

                private:

                    /**
                     * Number of public IP addresses for internet tunnels
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of the public IP addresses for internet tunnels
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<InternetAddressDetail> m_subnets;
                    bool m_subnetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSRESPONSE_H_
