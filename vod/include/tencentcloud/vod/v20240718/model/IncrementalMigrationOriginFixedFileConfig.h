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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFIXEDFILECONFIG_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFIXEDFILECONFIG_H_

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
                * Incremental migration of origin fixed file path configuration.
                */
                class IncrementalMigrationOriginFixedFileConfig : public AbstractModel
                {
                public:
                    IncrementalMigrationOriginFixedFileConfig();
                    ~IncrementalMigrationOriginFixedFileConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fixed file path: If you fill in `example/test.png`, the origin-pull address will be: `http(s)://<origin domain>/example/test.png`.
                     * @return FixedFilePath Fixed file path: If you fill in `example/test.png`, the origin-pull address will be: `http(s)://<origin domain>/example/test.png`.
                     * 
                     */
                    std::string GetFixedFilePath() const;

                    /**
                     * 设置Fixed file path: If you fill in `example/test.png`, the origin-pull address will be: `http(s)://<origin domain>/example/test.png`.
                     * @param _fixedFilePath Fixed file path: If you fill in `example/test.png`, the origin-pull address will be: `http(s)://<origin domain>/example/test.png`.
                     * 
                     */
                    void SetFixedFilePath(const std::string& _fixedFilePath);

                    /**
                     * 判断参数 FixedFilePath 是否已赋值
                     * @return FixedFilePath 是否已赋值
                     * 
                     */
                    bool FixedFilePathHasBeenSet() const;

                private:

                    /**
                     * Fixed file path: If you fill in `example/test.png`, the origin-pull address will be: `http(s)://<origin domain>/example/test.png`.
                     */
                    std::string m_fixedFilePath;
                    bool m_fixedFilePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFIXEDFILECONFIG_H_
