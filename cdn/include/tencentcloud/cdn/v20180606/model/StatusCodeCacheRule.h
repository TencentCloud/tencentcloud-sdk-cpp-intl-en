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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHERULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHERULE_H_

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
                * Status code cache expiration time rule configuration
                */
                class StatusCodeCacheRule : public AbstractModel
                {
                public:
                    StatusCodeCacheRule();
                    ~StatusCodeCacheRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP status code
Supports 403 and 404 status codes
                     * @return StatusCode HTTP status code
Supports 403 and 404 status codes
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 设置HTTP status code
Supports 403 and 404 status codes
                     * @param StatusCode HTTP status code
Supports 403 and 404 status codes
                     */
                    void SetStatusCode(const std::string& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Status code cache expiration time (in seconds)
                     * @return CacheTime Status code cache expiration time (in seconds)
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Status code cache expiration time (in seconds)
                     * @param CacheTime Status code cache expiration time (in seconds)
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * HTTP status code
Supports 403 and 404 status codes
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Status code cache expiration time (in seconds)
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHERULE_H_
