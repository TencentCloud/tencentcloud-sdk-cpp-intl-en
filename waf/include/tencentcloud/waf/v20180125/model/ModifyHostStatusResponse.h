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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYHOSTSTATUSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYHOSTSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ResponseCode.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyHostStatus response structure.
                */
                class ModifyHostStatusResponse : public AbstractModel
                {
                public:
                    ModifyHostStatusResponse();
                    ~ModifyHostStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Successful status code, needs JSON decoding before use, the returned format is {Domain:Status}, successful status code is Success, others are failed status codes (YunAPI Defined Error Codes)
                     * @return Success Successful status code, needs JSON decoding before use, the returned format is {Domain:Status}, successful status code is Success, others are failed status codes (YunAPI Defined Error Codes)
                     * 
                     */
                    ResponseCode GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                private:

                    /**
                     * Successful status code, needs JSON decoding before use, the returned format is {Domain:Status}, successful status code is Success, others are failed status codes (YunAPI Defined Error Codes)
                     */
                    ResponseCode m_success;
                    bool m_successHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYHOSTSTATUSRESPONSE_H_
