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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNETWORKAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNETWORKAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyNetworkApplication request structure.
                */
                class ModifyNetworkApplicationRequest : public AbstractModel
                {
                public:
                    ModifyNetworkApplicationRequest();
                    ~ModifyNetworkApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Web application id</p>
                     * @return NetworkAppId <p>Web application id</p>
                     * 
                     */
                    std::string GetNetworkAppId() const;

                    /**
                     * 设置<p>Web application id</p>
                     * @param _networkAppId <p>Web application id</p>
                     * 
                     */
                    void SetNetworkAppId(const std::string& _networkAppId);

                    /**
                     * 判断参数 NetworkAppId 是否已赋值
                     * @return NetworkAppId 是否已赋值
                     * 
                     */
                    bool NetworkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Network application name: Length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>Letters (a-z and A-Z)</li><li>Numbers</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Cannot contain spaces</li><li>Cannot contain other special characters (such as @, #, $, % etc.)</li></ul>
                     * @return Name <p>Network application name: Length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>Letters (a-z and A-Z)</li><li>Numbers</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Cannot contain spaces</li><li>Cannot contain other special characters (such as @, #, $, % etc.)</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Network application name: Length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>Letters (a-z and A-Z)</li><li>Numbers</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Cannot contain spaces</li><li>Cannot contain other special characters (such as @, #, $, % etc.)</li></ul>
                     * @param _name <p>Network application name: Length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>Letters (a-z and A-Z)</li><li>Numbers</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Cannot contain spaces</li><li>Cannot contain other special characters (such as @, #, $, % etc.)</li></ul>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>Web application id</p>
                     */
                    std::string m_networkAppId;
                    bool m_networkAppIdHasBeenSet;

                    /**
                     * <p>Network application name: Length not exceeding 64 characters, name must be unique.</p><ul><li>Can only contain the following characters:<ul><li>Letters (a-z and A-Z)</li><li>Numbers</li><li>Underscore</li><li>Hyphen (minus sign)</li><li>Chinese characters</li></ul></li><li>At least one character</li><li>Cannot contain spaces</li><li>Cannot contain other special characters (such as @, #, $, % etc.)</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNETWORKAPPLICATIONREQUEST_H_
