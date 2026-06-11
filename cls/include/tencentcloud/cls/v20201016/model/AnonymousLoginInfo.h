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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSLOGININFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSLOGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * DataSight Intranet anonymous login account information
                */
                class AnonymousLoginInfo : public AbstractModel
                {
                public:
                    AnonymousLoginInfo();
                    ~AnonymousLoginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Anonymous login account secretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretId <p>Anonymous login account secretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置<p>Anonymous login account secretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secretId <p>Anonymous login account secretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>Anonymous login account secretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretKey <p>Anonymous login account secretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>Anonymous login account secretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secretKey <p>Anonymous login account secretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * <p>Anonymous login account secretId</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>Anonymous login account secretKey</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ANONYMOUSLOGININFO_H_
