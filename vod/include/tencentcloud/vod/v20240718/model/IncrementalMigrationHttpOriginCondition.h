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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONDITION_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * Incremental migration back-to-source conditions.
                */
                class IncrementalMigrationHttpOriginCondition : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpOriginCondition();
                    ~IncrementalMigrationHttpOriginCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP code to trigger back-to-source conditions. If not filled, the default value is `404`.
                     * @return HttpStatusCode HTTP code to trigger back-to-source conditions. If not filled, the default value is `404`.
                     * 
                     */
                    uint64_t GetHttpStatusCode() const;

                    /**
                     * 设置HTTP code to trigger back-to-source conditions. If not filled, the default value is `404`.
                     * @param _httpStatusCode HTTP code to trigger back-to-source conditions. If not filled, the default value is `404`.
                     * 
                     */
                    void SetHttpStatusCode(const uint64_t& _httpStatusCode);

                    /**
                     * 判断参数 HttpStatusCode 是否已赋值
                     * @return HttpStatusCode 是否已赋值
                     * 
                     */
                    bool HttpStatusCodeHasBeenSet() const;

                    /**
                     * 获取Object key prefix to trigger back-to-source conditions
                     * @return Prefix Object key prefix to trigger back-to-source conditions
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Object key prefix to trigger back-to-source conditions
                     * @param _prefix Object key prefix to trigger back-to-source conditions
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                private:

                    /**
                     * HTTP code to trigger back-to-source conditions. If not filled, the default value is `404`.
                     */
                    uint64_t m_httpStatusCode;
                    bool m_httpStatusCodeHasBeenSet;

                    /**
                     * Object key prefix to trigger back-to-source conditions
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONDITION_H_
