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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CompressionRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Smart compression configuration. By default, Gzip compression is performed for files with js, html, css, xml, json, shtml, and htm suffixes, and with sizes between 256 and 2097152 bytes.
                */
                class Compression : public AbstractModel
                {
                public:
                    Compression();
                    ~Compression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable smart compression. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable smart compression. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable smart compression. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable smart compression. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Compression rules array
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CompressionRules Compression rules array
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<CompressionRule> GetCompressionRules() const;

                    /**
                     * 设置Compression rules array
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _compressionRules Compression rules array
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompressionRules(const std::vector<CompressionRule>& _compressionRules);

                    /**
                     * 判断参数 CompressionRules 是否已赋值
                     * @return CompressionRules 是否已赋值
                     * 
                     */
                    bool CompressionRulesHasBeenSet() const;

                private:

                    /**
                     * Whether to enable smart compression. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Compression rules array
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<CompressionRule> m_compressionRules;
                    bool m_compressionRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSION_H_
