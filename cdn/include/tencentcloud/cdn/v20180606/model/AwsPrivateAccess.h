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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_AWSPRIVATEACCESS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_AWSPRIVATEACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Origin access authentication for S3 bucket.
                */
                class AwsPrivateAccess : public AbstractModel
                {
                public:
                    AwsPrivateAccess();
                    ~AwsPrivateAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch, which can be set to on or off.
                     * @return Switch Switch, which can be set to on or off.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch, which can be set to on or off.
                     * @param Switch Switch, which can be set to on or off.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Access ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AccessKey Access ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AccessKey Access ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecretKey Key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SecretKey Key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * Switch, which can be set to on or off.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Access ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_AWSPRIVATEACCESS_H_
