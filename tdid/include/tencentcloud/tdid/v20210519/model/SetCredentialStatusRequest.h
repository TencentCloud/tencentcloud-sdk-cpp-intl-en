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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_SETCREDENTIALSTATUSREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_SETCREDENTIALSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/CredentialStatus.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * SetCredentialStatus request structure.
                */
                class SetCredentialStatusRequest : public AbstractModel
                {
                public:
                    SetCredentialStatusRequest();
                    ~SetCredentialStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The credential status.
                     * @return CredentialStatus The credential status.
                     * 
                     */
                    CredentialStatus GetCredentialStatus() const;

                    /**
                     * 设置The credential status.
                     * @param _credentialStatus The credential status.
                     * 
                     */
                    void SetCredentialStatus(const CredentialStatus& _credentialStatus);

                    /**
                     * 判断参数 CredentialStatus 是否已赋值
                     * @return CredentialStatus 是否已赋值
                     * 
                     */
                    bool CredentialStatusHasBeenSet() const;

                private:

                    /**
                     * The credential status.
                     */
                    CredentialStatus m_credentialStatus;
                    bool m_credentialStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_SETCREDENTIALSTATUSREQUEST_H_
