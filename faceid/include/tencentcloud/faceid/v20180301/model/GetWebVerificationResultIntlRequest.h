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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTINTLREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTINTLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetWebVerificationResultIntl request structure.
                */
                class GetWebVerificationResultIntlRequest : public AbstractModel
                {
                public:
                    GetWebVerificationResultIntlRequest();
                    ~GetWebVerificationResultIntlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The token for the web-based verification, which is generated using the `ApplyWebVerificationBizTokenIntl` API.
                     * @return BizToken The token for the web-based verification, which is generated using the `ApplyWebVerificationBizTokenIntl` API.
                     * 
                     */
                    std::string GetBizToken() const;

                    /**
                     * 设置The token for the web-based verification, which is generated using the `ApplyWebVerificationBizTokenIntl` API.
                     * @param _bizToken The token for the web-based verification, which is generated using the `ApplyWebVerificationBizTokenIntl` API.
                     * 
                     */
                    void SetBizToken(const std::string& _bizToken);

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     * 
                     */
                    bool BizTokenHasBeenSet() const;

                private:

                    /**
                     * The token for the web-based verification, which is generated using the `ApplyWebVerificationBizTokenIntl` API.
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWEBVERIFICATIONRESULTINTLREQUEST_H_
