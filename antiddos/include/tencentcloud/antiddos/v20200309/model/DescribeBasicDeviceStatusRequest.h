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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBasicDeviceStatus request structure.
                */
                class DescribeBasicDeviceStatusRequest : public AbstractModel
                {
                public:
                    DescribeBasicDeviceStatusRequest();
                    ~DescribeBasicDeviceStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IP resources.
                     * @return IpList List of IP resources.
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置List of IP resources.
                     * @param _ipList List of IP resources.
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取List of domain asset IDs.
                     * @return IdList List of domain asset IDs.
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置List of domain asset IDs.
                     * @param _idList List of domain asset IDs.
                     * 
                     */
                    void SetIdList(const std::vector<std::string>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                    /**
                     * 获取Region name for filtering.
                     * @return FilterRegion Region name for filtering.
                     * 
                     */
                    uint64_t GetFilterRegion() const;

                    /**
                     * 设置Region name for filtering.
                     * @param _filterRegion Region name for filtering.
                     * 
                     */
                    void SetFilterRegion(const uint64_t& _filterRegion);

                    /**
                     * 判断参数 FilterRegion 是否已赋值
                     * @return FilterRegion 是否已赋值
                     * 
                     */
                    bool FilterRegionHasBeenSet() const;

                    /**
                     * 获取List of CNAME WAF resource IDs.
                     * @return CnameWafIdList List of CNAME WAF resource IDs.
                     * 
                     */
                    std::vector<std::string> GetCnameWafIdList() const;

                    /**
                     * 设置List of CNAME WAF resource IDs.
                     * @param _cnameWafIdList List of CNAME WAF resource IDs.
                     * 
                     */
                    void SetCnameWafIdList(const std::vector<std::string>& _cnameWafIdList);

                    /**
                     * 判断参数 CnameWafIdList 是否已赋值
                     * @return CnameWafIdList 是否已赋值
                     * 
                     */
                    bool CnameWafIdListHasBeenSet() const;

                private:

                    /**
                     * List of IP resources.
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * List of domain asset IDs.
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                    /**
                     * Region name for filtering.
                     */
                    uint64_t m_filterRegion;
                    bool m_filterRegionHasBeenSet;

                    /**
                     * List of CNAME WAF resource IDs.
                     */
                    std::vector<std::string> m_cnameWafIdList;
                    bool m_cnameWafIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSREQUEST_H_
