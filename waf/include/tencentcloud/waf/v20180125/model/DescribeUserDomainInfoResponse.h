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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERDOMAININFORESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERDOMAININFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/UserDomainInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeUserDomainInfo response structure.
                */
                class DescribeUserDomainInfoResponse : public AbstractModel
                {
                public:
                    DescribeUserDomainInfoResponse();
                    ~DescribeUserDomainInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SaaS and CLB domain information
                     * @return UsersInfo SaaS and CLB domain information
                     * 
                     */
                    std::vector<UserDomainInfo> GetUsersInfo() const;

                    /**
                     * 判断参数 UsersInfo 是否已赋值
                     * @return UsersInfo 是否已赋值
                     * 
                     */
                    bool UsersInfoHasBeenSet() const;

                private:

                    /**
                     * SaaS and CLB domain information
                     */
                    std::vector<UserDomainInfo> m_usersInfo;
                    bool m_usersInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERDOMAININFORESPONSE_H_
