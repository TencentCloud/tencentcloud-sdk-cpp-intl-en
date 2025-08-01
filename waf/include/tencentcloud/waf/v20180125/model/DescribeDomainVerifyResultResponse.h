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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINVERIFYRESULTRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINVERIFYRESULTRESPONSE_H_

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
                * DescribeDomainVerifyResult response structure.
                */
                class DescribeDomainVerifyResultResponse : public AbstractModel
                {
                public:
                    DescribeDomainVerifyResultResponse();
                    ~DescribeDomainVerifyResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Result description: if possible, return an empty string
                     * @return Msg Result description: if possible, return an empty string
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取Inspection status. 0 indicates that it can be added; greater than 0 indicates that it cannot be added.
                     * @return VerifyCode Inspection status. 0 indicates that it can be added; greater than 0 indicates that it cannot be added.
                     * 
                     */
                    int64_t GetVerifyCode() const;

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                private:

                    /**
                     * Result description: if possible, return an empty string
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Inspection status. 0 indicates that it can be added; greater than 0 indicates that it cannot be added.
                     */
                    int64_t m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINVERIFYRESULTRESPONSE_H_
