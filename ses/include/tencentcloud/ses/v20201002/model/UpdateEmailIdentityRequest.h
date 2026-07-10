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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateEmailIdentity request structure.
                */
                class UpdateEmailIdentityRequest : public AbstractModel
                {
                public:
                    UpdateEmailIdentityRequest();
                    ~UpdateEmailIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain to be verified.
                     * @return EmailIdentity Domain to be verified.
                     * 
                     */
                    std::string GetEmailIdentity() const;

                    /**
                     * 设置Domain to be verified.
                     * @param _emailIdentity Domain to be verified.
                     * 
                     */
                    void SetEmailIdentity(const std::string& _emailIdentity);

                    /**
                     * 判断参数 EmailIdentity 是否已赋值
                     * @return EmailIdentity 是否已赋值
                     * 
                     */
                    bool EmailIdentityHasBeenSet() const;

                    /**
                     * 获取The  DKIMOption parameter is effective or not
                     * @return NewAPI The  DKIMOption parameter is effective or not
                     * 
                     */
                    bool GetNewAPI() const;

                    /**
                     * 设置The  DKIMOption parameter is effective or not
                     * @param _newAPI The  DKIMOption parameter is effective or not
                     * 
                     */
                    void SetNewAPI(const bool& _newAPI);

                    /**
                     * 判断参数 NewAPI 是否已赋值
                     * @return NewAPI 是否已赋值
                     * 
                     */
                    bool NewAPIHasBeenSet() const;

                    /**
                     * 获取dkim option, 0: 1024, 1: 2048, 2: both
                     * @return DKIMOption dkim option, 0: 1024, 1: 2048, 2: both
                     * 
                     */
                    uint64_t GetDKIMOption() const;

                    /**
                     * 设置dkim option, 0: 1024, 1: 2048, 2: both
                     * @param _dKIMOption dkim option, 0: 1024, 1: 2048, 2: both
                     * 
                     */
                    void SetDKIMOption(const uint64_t& _dKIMOption);

                    /**
                     * 判断参数 DKIMOption 是否已赋值
                     * @return DKIMOption 是否已赋值
                     * 
                     */
                    bool DKIMOptionHasBeenSet() const;

                private:

                    /**
                     * Domain to be verified.
                     */
                    std::string m_emailIdentity;
                    bool m_emailIdentityHasBeenSet;

                    /**
                     * The  DKIMOption parameter is effective or not
                     */
                    bool m_newAPI;
                    bool m_newAPIHasBeenSet;

                    /**
                     * dkim option, 0: 1024, 1: 2048, 2: both
                     */
                    uint64_t m_dKIMOption;
                    bool m_dKIMOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYREQUEST_H_
