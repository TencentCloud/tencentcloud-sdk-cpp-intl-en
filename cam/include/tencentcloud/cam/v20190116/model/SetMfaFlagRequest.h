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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_SETMFAFLAGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_SETMFAFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/LoginActionMfaFlag.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * SetMfaFlag request structure.
                */
                class SetMfaFlagRequest : public AbstractModel
                {
                public:
                    SetMfaFlagRequest();
                    ~SetMfaFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sets user UIN
                     * @return OpUin Sets user UIN
                     * 
                     */
                    uint64_t GetOpUin() const;

                    /**
                     * 设置Sets user UIN
                     * @param _opUin Sets user UIN
                     * 
                     */
                    void SetOpUin(const uint64_t& _opUin);

                    /**
                     * 判断参数 OpUin 是否已赋值
                     * @return OpUin 是否已赋值
                     * 
                     */
                    bool OpUinHasBeenSet() const;

                    /**
                     * 获取Sets login protection
                     * @return LoginFlag Sets login protection
                     * 
                     */
                    LoginActionMfaFlag GetLoginFlag() const;

                    /**
                     * 设置Sets login protection
                     * @param _loginFlag Sets login protection
                     * 
                     */
                    void SetLoginFlag(const LoginActionMfaFlag& _loginFlag);

                    /**
                     * 判断参数 LoginFlag 是否已赋值
                     * @return LoginFlag 是否已赋值
                     * 
                     */
                    bool LoginFlagHasBeenSet() const;

                    /**
                     * 获取Sets operation protection
                     * @return ActionFlag Sets operation protection
                     * 
                     */
                    LoginActionMfaFlag GetActionFlag() const;

                    /**
                     * 设置Sets operation protection
                     * @param _actionFlag Sets operation protection
                     * 
                     */
                    void SetActionFlag(const LoginActionMfaFlag& _actionFlag);

                    /**
                     * 判断参数 ActionFlag 是否已赋值
                     * @return ActionFlag 是否已赋值
                     * 
                     */
                    bool ActionFlagHasBeenSet() const;

                private:

                    /**
                     * Sets user UIN
                     */
                    uint64_t m_opUin;
                    bool m_opUinHasBeenSet;

                    /**
                     * Sets login protection
                     */
                    LoginActionMfaFlag m_loginFlag;
                    bool m_loginFlagHasBeenSet;

                    /**
                     * Sets operation protection
                     */
                    LoginActionMfaFlag m_actionFlag;
                    bool m_actionFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_SETMFAFLAGREQUEST_H_
