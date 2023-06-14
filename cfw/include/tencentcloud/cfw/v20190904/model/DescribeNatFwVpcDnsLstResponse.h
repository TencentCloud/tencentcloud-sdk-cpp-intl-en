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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcDnsInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatFwVpcDnsLst response structure.
                */
                class DescribeNatFwVpcDnsLstResponse : public AbstractModel
                {
                public:
                    DescribeNatFwVpcDnsLstResponse();
                    ~DescribeNatFwVpcDnsLstResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC DNS info array of NAT firewall
Note: This field may return `null`, indicating that no valid value was found.
                     * @return VpcDnsSwitchLst VPC DNS info array of NAT firewall
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<VpcDnsInfo> GetVpcDnsSwitchLst() const;

                    /**
                     * 判断参数 VpcDnsSwitchLst 是否已赋值
                     * @return VpcDnsSwitchLst 是否已赋值
                     * 
                     */
                    bool VpcDnsSwitchLstHasBeenSet() const;

                    /**
                     * 获取Response parameter
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ReturnMsg Response parameter
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取Total number of toggles
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Total Total number of toggles
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * VPC DNS info array of NAT firewall
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<VpcDnsInfo> m_vpcDnsSwitchLst;
                    bool m_vpcDnsSwitchLstHasBeenSet;

                    /**
                     * Response parameter
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * Total number of toggles
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTRESPONSE_H_
