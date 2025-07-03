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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINPREFIXCONFIG_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINPREFIXCONFIG_H_

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
                * Incremental migration of origin address prefix configuration.
                */
                class IncrementalMigrationOriginPrefixConfig : public AbstractModel
                {
                public:
                    IncrementalMigrationOriginPrefixConfig();
                    ~IncrementalMigrationOriginPrefixConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin address prefix: If you fill in `test/`, the origin-pull address will be `http(s)://<origin domain>/test/<file name>`.
                     * @return Prefix Origin address prefix: If you fill in `test/`, the origin-pull address will be `http(s)://<origin domain>/test/<file name>`.
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Origin address prefix: If you fill in `test/`, the origin-pull address will be `http(s)://<origin domain>/test/<file name>`.
                     * @param _prefix Origin address prefix: If you fill in `test/`, the origin-pull address will be `http(s)://<origin domain>/test/<file name>`.
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
                     * Origin address prefix: If you fill in `test/`, the origin-pull address will be `http(s)://<origin domain>/test/<file name>`.
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINPREFIXCONFIG_H_
