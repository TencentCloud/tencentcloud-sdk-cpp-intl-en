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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_COMPRESSIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_COMPRESSIONPARAMETERS_H_

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
                * Intelligent compression configuration.
                */
                class CompressionParameters : public AbstractModel
                {
                public:
                    CompressionParameters();
                    ~CompressionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent compression configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Intelligent compression configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Intelligent compression configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Intelligent compression configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
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
                     * 获取List of supported compression algorithms. Required if Switch is on, unless it is ineffective. Valid values:
<li>brotli: brotli algorithm;</li>
<li>gzip: gzip algorithm.</li>
                     * @return Algorithms List of supported compression algorithms. Required if Switch is on, unless it is ineffective. Valid values:
<li>brotli: brotli algorithm;</li>
<li>gzip: gzip algorithm.</li>
                     * 
                     */
                    std::vector<std::string> GetAlgorithms() const;

                    /**
                     * 设置List of supported compression algorithms. Required if Switch is on, unless it is ineffective. Valid values:
<li>brotli: brotli algorithm;</li>
<li>gzip: gzip algorithm.</li>
                     * @param _algorithms List of supported compression algorithms. Required if Switch is on, unless it is ineffective. Valid values:
<li>brotli: brotli algorithm;</li>
<li>gzip: gzip algorithm.</li>
                     * 
                     */
                    void SetAlgorithms(const std::vector<std::string>& _algorithms);

                    /**
                     * 判断参数 Algorithms 是否已赋值
                     * @return Algorithms 是否已赋值
                     * 
                     */
                    bool AlgorithmsHasBeenSet() const;

                private:

                    /**
                     * Intelligent compression configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * List of supported compression algorithms. Required if Switch is on, unless it is ineffective. Valid values:
<li>brotli: brotli algorithm;</li>
<li>gzip: gzip algorithm.</li>
                     */
                    std::vector<std::string> m_algorithms;
                    bool m_algorithmsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_COMPRESSIONPARAMETERS_H_
