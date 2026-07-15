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
                     * 获取<p>Domain name for request verification</p>
                     * @return EmailIdentity <p>Domain name for request verification</p>
                     * 
                     */
                    std::string GetEmailIdentity() const;

                    /**
                     * 设置<p>Domain name for request verification</p>
                     * @param _emailIdentity <p>Domain name for request verification</p>
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
                     * 获取<p>Match the new and old APIs in the console</p>
                     * @return NewAPI <p>Match the new and old APIs in the console</p>
                     * 
                     */
                    bool GetNewAPI() const;

                    /**
                     * 设置<p>Match the new and old APIs in the console</p>
                     * @param _newAPI <p>Match the new and old APIs in the console</p>
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
                     * 获取<p>dkim digits</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul>
                     * @return DKIMOption <p>dkim digits</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul>
                     * 
                     */
                    uint64_t GetDKIMOption() const;

                    /**
                     * 设置<p>dkim digits</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul>
                     * @param _dKIMOption <p>dkim digits</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul>
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
                     * <p>Domain name for request verification</p>
                     */
                    std::string m_emailIdentity;
                    bool m_emailIdentityHasBeenSet;

                    /**
                     * <p>Match the new and old APIs in the console</p>
                     */
                    bool m_newAPI;
                    bool m_newAPIHasBeenSet;

                    /**
                     * <p>dkim digits</p><p>Enumeration value:</p><ul><li>0: 1024</li><li>1: 2048</li><li>2: Dual signature</li></ul>
                     */
                    uint64_t m_dKIMOption;
                    bool m_dKIMOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILIDENTITYREQUEST_H_
