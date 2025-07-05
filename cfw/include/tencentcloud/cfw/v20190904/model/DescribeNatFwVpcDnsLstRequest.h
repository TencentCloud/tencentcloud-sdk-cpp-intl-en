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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatFwVpcDnsLst request structure.
                */
                class DescribeNatFwVpcDnsLstRequest : public AbstractModel
                {
                public:
                    DescribeNatFwVpcDnsLstRequest();
                    ~DescribeNatFwVpcDnsLstRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT firewall instance ID
                     * @return NatFwInsId NAT firewall instance ID
                     * 
                     */
                    std::string GetNatFwInsId() const;

                    /**
                     * 设置NAT firewall instance ID
                     * @param _natFwInsId NAT firewall instance ID
                     * 
                     */
                    void SetNatFwInsId(const std::string& _natFwInsId);

                    /**
                     * 判断参数 NatFwInsId 是否已赋值
                     * @return NatFwInsId 是否已赋值
                     * 
                     */
                    bool NatFwInsIdHasBeenSet() const;

                    /**
                     * 获取Content filtered by NAT firewall, separated with ","
                     * @return NatInsIdFilter Content filtered by NAT firewall, separated with ","
                     * 
                     */
                    std::string GetNatInsIdFilter() const;

                    /**
                     * 设置Content filtered by NAT firewall, separated with ","
                     * @param _natInsIdFilter Content filtered by NAT firewall, separated with ","
                     * 
                     */
                    void SetNatInsIdFilter(const std::string& _natInsIdFilter);

                    /**
                     * 判断参数 NatInsIdFilter 是否已赋值
                     * @return NatInsIdFilter 是否已赋值
                     * 
                     */
                    bool NatInsIdFilterHasBeenSet() const;

                    /**
                     * 获取Number of pages
                     * @return Offset Number of pages
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Number of pages
                     * @param _offset Number of pages
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum entries per page
                     * @return Limit Maximum entries per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum entries per page
                     * @param _limit Maximum entries per page
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * NAT firewall instance ID
                     */
                    std::string m_natFwInsId;
                    bool m_natFwInsIdHasBeenSet;

                    /**
                     * Content filtered by NAT firewall, separated with ","
                     */
                    std::string m_natInsIdFilter;
                    bool m_natInsIdFilterHasBeenSet;

                    /**
                     * Number of pages
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum entries per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTREQUEST_H_
