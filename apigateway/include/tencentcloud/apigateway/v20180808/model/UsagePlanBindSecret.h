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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRET_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Key bound to usage plan
                */
                class UsagePlanBindSecret : public AbstractModel
                {
                public:
                    UsagePlanBindSecret();
                    ~UsagePlanBindSecret() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AccessKeyId Key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置Key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AccessKeyId Key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取Key name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecretName Key name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Key name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SecretName Key name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Key status. 0: disabled. 1: enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Key status. 0: disabled. 1: enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Key status. 0: disabled. 1: enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Status Key status. 0: disabled. 1: enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Key name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Key status. 0: disabled. 1: enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRET_H_
