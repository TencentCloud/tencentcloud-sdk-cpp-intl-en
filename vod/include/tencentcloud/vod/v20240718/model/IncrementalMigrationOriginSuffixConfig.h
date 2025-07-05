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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINSUFFIXCONFIG_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINSUFFIXCONFIG_H_

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
                * Incremental migration of origin file suffix configuration.
                */
                class IncrementalMigrationOriginSuffixConfig : public AbstractModel
                {
                public:
                    IncrementalMigrationOriginSuffixConfig();
                    ~IncrementalMigrationOriginSuffixConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File suffix.
if filled with `.ts`, the origin-pull address will be: `http(s)://<origin domain>/<file name>.ts`.
                     * @return Suffix File suffix.
if filled with `.ts`, the origin-pull address will be: `http(s)://<origin domain>/<file name>.ts`.
                     * 
                     */
                    std::string GetSuffix() const;

                    /**
                     * 设置File suffix.
if filled with `.ts`, the origin-pull address will be: `http(s)://<origin domain>/<file name>.ts`.
                     * @param _suffix File suffix.
if filled with `.ts`, the origin-pull address will be: `http(s)://<origin domain>/<file name>.ts`.
                     * 
                     */
                    void SetSuffix(const std::string& _suffix);

                    /**
                     * 判断参数 Suffix 是否已赋值
                     * @return Suffix 是否已赋值
                     * 
                     */
                    bool SuffixHasBeenSet() const;

                private:

                    /**
                     * File suffix.
if filled with `.ts`, the origin-pull address will be: `http(s)://<origin domain>/<file name>.ts`.
                     */
                    std::string m_suffix;
                    bool m_suffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINSUFFIXCONFIG_H_
