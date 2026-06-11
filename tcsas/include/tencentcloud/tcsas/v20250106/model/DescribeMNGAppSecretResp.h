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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGAPPSECRETRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGAPPSECRETRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response for querying mini program secret keys
                */
                class DescribeMNGAppSecretResp : public AbstractModel
                {
                public:
                    DescribeMNGAppSecretResp();
                    ~DescribeMNGAppSecretResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini game secret key status. Valid values: 0: Not generated; 1: Active; 2: Frozen.</p>
                     * @return SecretStatus <p>Mini game secret key status. Valid values: 0: Not generated; 1: Active; 2: Frozen.</p>
                     * 
                     */
                    int64_t GetSecretStatus() const;

                    /**
                     * 设置<p>Mini game secret key status. Valid values: 0: Not generated; 1: Active; 2: Frozen.</p>
                     * @param _secretStatus <p>Mini game secret key status. Valid values: 0: Not generated; 1: Active; 2: Frozen.</p>
                     * 
                     */
                    void SetSecretStatus(const int64_t& _secretStatus);

                    /**
                     * 判断参数 SecretStatus 是否已赋值
                     * @return SecretStatus 是否已赋值
                     * 
                     */
                    bool SecretStatusHasBeenSet() const;

                    /**
                     * 获取<p>Public service URL that developers need to access when integrating login, payment, and subscription message features.</p>
                     * @return OpenServerURL <p>Public service URL that developers need to access when integrating login, payment, and subscription message features.</p>
                     * 
                     */
                    std::string GetOpenServerURL() const;

                    /**
                     * 设置<p>Public service URL that developers need to access when integrating login, payment, and subscription message features.</p>
                     * @param _openServerURL <p>Public service URL that developers need to access when integrating login, payment, and subscription message features.</p>
                     * 
                     */
                    void SetOpenServerURL(const std::string& _openServerURL);

                    /**
                     * 判断参数 OpenServerURL 是否已赋值
                     * @return OpenServerURL 是否已赋值
                     * 
                     */
                    bool OpenServerURLHasBeenSet() const;

                private:

                    /**
                     * <p>Mini game secret key status. Valid values: 0: Not generated; 1: Active; 2: Frozen.</p>
                     */
                    int64_t m_secretStatus;
                    bool m_secretStatusHasBeenSet;

                    /**
                     * <p>Public service URL that developers need to access when integrating login, payment, and subscription message features.</p>
                     */
                    std::string m_openServerURL;
                    bool m_openServerURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGAPPSECRETRESP_H_
