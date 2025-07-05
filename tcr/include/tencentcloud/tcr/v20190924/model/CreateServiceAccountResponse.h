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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATESERVICEACCOUNTRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATESERVICEACCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateServiceAccount response structure.
                */
                class CreateServiceAccountResponse : public AbstractModel
                {
                public:
                    CreateServiceAccountResponse();
                    ~CreateServiceAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Service account name (the prefix `tcr$` is automatically added)
                     * @return Name Service account name (the prefix `tcr$` is automatically added)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Service account password, which is displayed only once
                     * @return Password Service account password, which is displayed only once
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Expiry time of the service account (timestamp)
                     * @return ExpiresAt Expiry time of the service account (timestamp)
                     * 
                     */
                    int64_t GetExpiresAt() const;

                    /**
                     * 判断参数 ExpiresAt 是否已赋值
                     * @return ExpiresAt 是否已赋值
                     * 
                     */
                    bool ExpiresAtHasBeenSet() const;

                    /**
                     * 获取Creation time of the service account
                     * @return CreateTime Creation time of the service account
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Service account name (the prefix `tcr$` is automatically added)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Service account password, which is displayed only once
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Expiry time of the service account (timestamp)
                     */
                    int64_t m_expiresAt;
                    bool m_expiresAtHasBeenSet;

                    /**
                     * Creation time of the service account
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATESERVICEACCOUNTRESPONSE_H_
