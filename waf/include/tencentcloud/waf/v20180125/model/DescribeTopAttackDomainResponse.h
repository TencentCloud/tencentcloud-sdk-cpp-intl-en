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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/KVInt.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeTopAttackDomain response structure.
                */
                class DescribeTopAttackDomainResponse : public AbstractModel
                {
                public:
                    DescribeTopAttackDomainResponse();
                    ~DescribeTopAttackDomainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CC attack domain list
                     * @return CC CC attack domain list
                     * 
                     */
                    std::vector<KVInt> GetCC() const;

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取Web attack domain list
                     * @return Web Web attack domain list
                     * 
                     */
                    std::vector<KVInt> GetWeb() const;

                    /**
                     * 判断参数 Web 是否已赋值
                     * @return Web 是否已赋值
                     * 
                     */
                    bool WebHasBeenSet() const;

                private:

                    /**
                     * CC attack domain list
                     */
                    std::vector<KVInt> m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * Web attack domain list
                     */
                    std::vector<KVInt> m_web;
                    bool m_webHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINRESPONSE_H_
