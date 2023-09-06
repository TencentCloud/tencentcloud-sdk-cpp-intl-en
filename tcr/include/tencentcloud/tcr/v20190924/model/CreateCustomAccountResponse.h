/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATECUSTOMACCOUNTRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATECUSTOMACCOUNTRESPONSE_H_

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
                * CreateCustomAccount response structure.
                */
                class CreateCustomAccountResponse : public AbstractModel
                {
                public:
                    CreateCustomAccountResponse();
                    ~CreateCustomAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom username (the prefix `tcr$` is automatically added)
                     * @return Name Custom username (the prefix `tcr$` is automatically added)
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
                     * 获取Custom password, which is displayed only once
                     * @return Password Custom password, which is displayed only once
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
                     * 获取Custom expiry time (timestamp)
                     * @return ExpiresAt Custom expiry time (timestamp)
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
                     * 获取Custom account creation time
                     * @return CreateTime Custom account creation time
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
                     * Custom username (the prefix `tcr$` is automatically added)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Custom password, which is displayed only once
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Custom expiry time (timestamp)
                     */
                    int64_t m_expiresAt;
                    bool m_expiresAtHasBeenSet;

                    /**
                     * Custom account creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATECUSTOMACCOUNTRESPONSE_H_
