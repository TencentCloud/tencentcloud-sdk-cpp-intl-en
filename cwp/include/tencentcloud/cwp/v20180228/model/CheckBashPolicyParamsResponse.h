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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckBashPolicyParams response structure.
                */
                class CheckBashPolicyParamsResponse : public AbstractModel
                {
                public:
                    CheckBashPolicyParamsResponse();
                    ~CheckBashPolicyParamsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0: verification passed; 1: rule name verification failed; 2: regular expression verification failed.
                     * @return ErrCode 0: verification passed; 1: rule name verification failed; 2: regular expression verification failed.
                     * 
                     */
                    uint64_t GetErrCode() const;

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Verification information
                     * @return ErrMsg Verification information
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 0: verification passed; 1: rule name verification failed; 2: regular expression verification failed.
                     */
                    uint64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Verification information
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSRESPONSE_H_
