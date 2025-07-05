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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALSTATUSREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetCredentialStatus request structure.
                */
                class GetCredentialStatusRequest : public AbstractModel
                {
                public:
                    GetCredentialStatusRequest();
                    ~GetCredentialStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The credential ID.
                     * @return CredentialId The credential ID.
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置The credential ID.
                     * @param _credentialId The credential ID.
                     * 
                     */
                    void SetCredentialId(const std::string& _credentialId);

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                private:

                    /**
                     * The credential ID.
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALSTATUSREQUEST_H_
