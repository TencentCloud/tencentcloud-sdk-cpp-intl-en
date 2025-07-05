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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFILEINFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginPrefixConfig.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginSuffixConfig.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginFixedFileConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * Incremental migration of origin file information.
                */
                class IncrementalMigrationOriginFileInfo : public AbstractModel
                {
                public:
                    IncrementalMigrationOriginFileInfo();
                    ~IncrementalMigrationOriginFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File prefix configuration.
                     * @return PrefixConfig File prefix configuration.
                     * 
                     */
                    IncrementalMigrationOriginPrefixConfig GetPrefixConfig() const;

                    /**
                     * 设置File prefix configuration.
                     * @param _prefixConfig File prefix configuration.
                     * 
                     */
                    void SetPrefixConfig(const IncrementalMigrationOriginPrefixConfig& _prefixConfig);

                    /**
                     * 判断参数 PrefixConfig 是否已赋值
                     * @return PrefixConfig 是否已赋值
                     * 
                     */
                    bool PrefixConfigHasBeenSet() const;

                    /**
                     * 获取File 	suffix configuration.
                     * @return SuffixConfig File 	suffix configuration.
                     * 
                     */
                    IncrementalMigrationOriginSuffixConfig GetSuffixConfig() const;

                    /**
                     * 设置File 	suffix configuration.
                     * @param _suffixConfig File 	suffix configuration.
                     * 
                     */
                    void SetSuffixConfig(const IncrementalMigrationOriginSuffixConfig& _suffixConfig);

                    /**
                     * 判断参数 SuffixConfig 是否已赋值
                     * @return SuffixConfig 是否已赋值
                     * 
                     */
                    bool SuffixConfigHasBeenSet() const;

                    /**
                     * 获取Fixed file configuration.
                     * @return FixedFileConfig Fixed file configuration.
                     * 
                     */
                    IncrementalMigrationOriginFixedFileConfig GetFixedFileConfig() const;

                    /**
                     * 设置Fixed file configuration.
                     * @param _fixedFileConfig Fixed file configuration.
                     * 
                     */
                    void SetFixedFileConfig(const IncrementalMigrationOriginFixedFileConfig& _fixedFileConfig);

                    /**
                     * 判断参数 FixedFileConfig 是否已赋值
                     * @return FixedFileConfig 是否已赋值
                     * 
                     */
                    bool FixedFileConfigHasBeenSet() const;

                private:

                    /**
                     * File prefix configuration.
                     */
                    IncrementalMigrationOriginPrefixConfig m_prefixConfig;
                    bool m_prefixConfigHasBeenSet;

                    /**
                     * File 	suffix configuration.
                     */
                    IncrementalMigrationOriginSuffixConfig m_suffixConfig;
                    bool m_suffixConfigHasBeenSet;

                    /**
                     * Fixed file configuration.
                     */
                    IncrementalMigrationOriginFixedFileConfig m_fixedFileConfig;
                    bool m_fixedFileConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFILEINFO_H_
