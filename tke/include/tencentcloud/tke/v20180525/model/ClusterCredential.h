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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCREDENTIAL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCREDENTIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Authentication information for accessing K8s
                */
                class ClusterCredential : public AbstractModel
                {
                public:
                    ClusterCredential();
                    ~ClusterCredential() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CA root certificate
                     * @return CACert CA root certificate
                     * 
                     */
                    std::string GetCACert() const;

                    /**
                     * 设置CA root certificate
                     * @param _cACert CA root certificate
                     * 
                     */
                    void SetCACert(const std::string& _cACert);

                    /**
                     * 判断参数 CACert 是否已赋值
                     * @return CACert 是否已赋值
                     * 
                     */
                    bool CACertHasBeenSet() const;

                    /**
                     * 获取Token for authentication
                     * @return Token Token for authentication
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Token for authentication
                     * @param _token Token for authentication
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * CA root certificate
                     */
                    std::string m_cACert;
                    bool m_cACertHasBeenSet;

                    /**
                     * Token for authentication
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCREDENTIAL_H_
