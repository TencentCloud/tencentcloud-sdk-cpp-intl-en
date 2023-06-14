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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINFOCOUNTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINFOCOUNTRESPONSE_H_

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
                * DescribeNatFwInfoCount response structure.
                */
                class DescribeNatFwInfoCountResponse : public AbstractModel
                {
                public:
                    DescribeNatFwInfoCountResponse();
                    ~DescribeNatFwInfoCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


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
                     * 获取Number of NAT instances of the current tenant
Note: This field may return `null`, indicating that no valid value was found.
                     * @return NatFwInsCount Number of NAT instances of the current tenant
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetNatFwInsCount() const;

                    /**
                     * 判断参数 NatFwInsCount 是否已赋值
                     * @return NatFwInsCount 是否已赋值
                     * 
                     */
                    bool NatFwInsCountHasBeenSet() const;

                    /**
                     * 获取Number of subnets connected by the current tenant
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SubnetCount Number of subnets connected by the current tenant
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetSubnetCount() const;

                    /**
                     * 判断参数 SubnetCount 是否已赋值
                     * @return SubnetCount 是否已赋值
                     * 
                     */
                    bool SubnetCountHasBeenSet() const;

                    /**
                     * 获取Number of firewalls enabled
Note: This field may return `null`, indicating that no valid value was found.
                     * @return OpenSwitchCount Number of firewalls enabled
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetOpenSwitchCount() const;

                    /**
                     * 判断参数 OpenSwitchCount 是否已赋值
                     * @return OpenSwitchCount 是否已赋值
                     * 
                     */
                    bool OpenSwitchCountHasBeenSet() const;

                private:

                    /**
                     * Response parameter
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * Number of NAT instances of the current tenant
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_natFwInsCount;
                    bool m_natFwInsCountHasBeenSet;

                    /**
                     * Number of subnets connected by the current tenant
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_subnetCount;
                    bool m_subnetCountHasBeenSet;

                    /**
                     * Number of firewalls enabled
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_openSwitchCount;
                    bool m_openSwitchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINFOCOUNTRESPONSE_H_
