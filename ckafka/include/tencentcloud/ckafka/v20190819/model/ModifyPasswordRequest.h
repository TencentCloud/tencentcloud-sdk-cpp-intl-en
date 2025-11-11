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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYPASSWORDREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyPassword request structure.
                */
                class ModifyPasswordRequest : public AbstractModel
                {
                public:
                    ModifyPasswordRequest();
                    ~ModifyPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance Id. you can obtain it by calling the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * @return InstanceId Instance Id. you can obtain it by calling the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance Id. you can obtain it by calling the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * @param _instanceId Instance Id. you can obtain it by calling the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the username, which can be obtained through the [DescribeUser](https://www.tencentcloud.comom/document/product/597/40855?from_cn_redirect=1) api.
                     * @return Name Specifies the username, which can be obtained through the [DescribeUser](https://www.tencentcloud.comom/document/product/597/40855?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the username, which can be obtained through the [DescribeUser](https://www.tencentcloud.comom/document/product/597/40855?from_cn_redirect=1) api.
                     * @param _name Specifies the username, which can be obtained through the [DescribeUser](https://www.tencentcloud.comom/document/product/597/40855?from_cn_redirect=1) api.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Current user password
                     * @return Password Current user password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Current user password
                     * @param _password Current user password
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取New user password
                     * @return PasswordNew New user password
                     * 
                     */
                    std::string GetPasswordNew() const;

                    /**
                     * 设置New user password
                     * @param _passwordNew New user password
                     * 
                     */
                    void SetPasswordNew(const std::string& _passwordNew);

                    /**
                     * 判断参数 PasswordNew 是否已赋值
                     * @return PasswordNew 是否已赋值
                     * 
                     */
                    bool PasswordNewHasBeenSet() const;

                private:

                    /**
                     * Instance Id. you can obtain it by calling the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the username, which can be obtained through the [DescribeUser](https://www.tencentcloud.comom/document/product/597/40855?from_cn_redirect=1) api.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Current user password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * New user password
                     */
                    std::string m_passwordNew;
                    bool m_passwordNewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYPASSWORDREQUEST_H_
