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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Status Code Cache TTL configuration internal structure.
                */
                class StatusCodeCacheParam : public AbstractModel
                {
                public:
                    StatusCodeCacheParam();
                    ~StatusCodeCacheParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code. valid values: 400, 401, 403, 404, 405, 407, 414, 500, 501, 502, 503, 504, 509, 514.
                     * @return StatusCode Status code. valid values: 400, 401, 403, 404, 405, 407, 414, 500, 501, 502, 503, 504, 509, 514.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Status code. valid values: 400, 401, 403, 404, 405, 407, 414, 500, 501, 502, 503, 504, 509, 514.
                     * @param _statusCode Status code. valid values: 400, 401, 403, 404, 405, 407, 414, 500, 501, 502, 503, 504, 509, 514.
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Cache time value in seconds. value range: 0–31536000.
                     * @return CacheTime Cache time value in seconds. value range: 0–31536000.
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Cache time value in seconds. value range: 0–31536000.
                     * @param _cacheTime Cache time value in seconds. value range: 0–31536000.
                     * 
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * Status code. valid values: 400, 401, 403, 404, 405, 407, 414, 500, 501, 502, 503, 504, 509, 514.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Cache time value in seconds. value range: 0–31536000.
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAM_H_
