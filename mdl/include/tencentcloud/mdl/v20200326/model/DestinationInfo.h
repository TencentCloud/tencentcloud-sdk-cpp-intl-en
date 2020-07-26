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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESTINATIONINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESTINATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Relay destination address.
                */
                class DestinationInfo : public AbstractModel
                {
                public:
                    DestinationInfo();
                    ~DestinationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Relay destination address. Length limit: [1,512].
                     * @return OutputUrl Relay destination address. Length limit: [1,512].
                     */
                    std::string GetOutputUrl() const;

                    /**
                     * 设置Relay destination address. Length limit: [1,512].
                     * @param OutputUrl Relay destination address. Length limit: [1,512].
                     */
                    void SetOutputUrl(const std::string& _outputUrl);

                    /**
                     * 判断参数 OutputUrl 是否已赋值
                     * @return OutputUrl 是否已赋值
                     */
                    bool OutputUrlHasBeenSet() const;

                    /**
                     * 获取Authentication key. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthKey Authentication key. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置Authentication key. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AuthKey Authentication key. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     */
                    bool AuthKeyHasBeenSet() const;

                    /**
                     * 获取Authentication username. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Username Authentication username. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Authentication username. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Username Authentication username. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Authentication password. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Password Authentication password. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Authentication password. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Password Authentication password. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Relay destination address. Length limit: [1,512].
                     */
                    std::string m_outputUrl;
                    bool m_outputUrlHasBeenSet;

                    /**
                     * Authentication key. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                    /**
                     * Authentication username. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Authentication password. Length limit: [1,128].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESTINATIONINFO_H_
