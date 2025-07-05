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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIPREGIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIPREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeIPRegion request structure.
                */
                class DescribeIPRegionRequest : public AbstractModel
                {
                public:
                    DescribeIPRegionRequest();
                    ~DescribeIPRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IPs to be queried, supporting IPV4 and IPV6. Up to 100 can be queried.
                     * @return IPs List of IPs to be queried, supporting IPV4 and IPV6. Up to 100 can be queried.
                     * 
                     */
                    std::vector<std::string> GetIPs() const;

                    /**
                     * 设置List of IPs to be queried, supporting IPV4 and IPV6. Up to 100 can be queried.
                     * @param _iPs List of IPs to be queried, supporting IPV4 and IPV6. Up to 100 can be queried.
                     * 
                     */
                    void SetIPs(const std::vector<std::string>& _iPs);

                    /**
                     * 判断参数 IPs 是否已赋值
                     * @return IPs 是否已赋值
                     * 
                     */
                    bool IPsHasBeenSet() const;

                private:

                    /**
                     * List of IPs to be queried, supporting IPV4 and IPV6. Up to 100 can be queried.
                     */
                    std::vector<std::string> m_iPs;
                    bool m_iPsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIPREGIONREQUEST_H_
