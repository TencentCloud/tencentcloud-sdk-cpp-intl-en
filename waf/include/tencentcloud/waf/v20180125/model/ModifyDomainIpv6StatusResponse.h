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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINIPV6STATUSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINIPV6STATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyDomainIpv6Status response structure.
                */
                class ModifyDomainIpv6StatusResponse : public AbstractModel
                {
                public:
                    ModifyDomainIpv6StatusResponse();
                    ~ModifyDomainIpv6StatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returned status (0: Operation Failed 1: Operation Succeeded 2: Not Supported for Enterprise Edition and Above 3: Not Supported for Below Enterprise Edition)
                     * @return Ipv6Status Returned status (0: Operation Failed 1: Operation Succeeded 2: Not Supported for Enterprise Edition and Above 3: Not Supported for Below Enterprise Edition)
                     * 
                     */
                    int64_t GetIpv6Status() const;

                    /**
                     * 判断参数 Ipv6Status 是否已赋值
                     * @return Ipv6Status 是否已赋值
                     * 
                     */
                    bool Ipv6StatusHasBeenSet() const;

                private:

                    /**
                     * Returned status (0: Operation Failed 1: Operation Succeeded 2: Not Supported for Enterprise Edition and Above 3: Not Supported for Below Enterprise Edition)
                     */
                    int64_t m_ipv6Status;
                    bool m_ipv6StatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINIPV6STATUSRESPONSE_H_
