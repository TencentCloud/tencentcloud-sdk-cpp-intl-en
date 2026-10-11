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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SPARSECHECKOUTCONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SPARSECHECKOUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * git checkout rules
                */
                class SparseCheckoutConfig : public AbstractModel
                {
                public:
                    SparseCheckoutConfig();
                    ~SparseCheckoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable sparse detect</p>
                     * @return Enabled <p>Whether to enable sparse detect</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable sparse detect</p>
                     * @param _enabled <p>Whether to enable sparse detect</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Whether to use cone mode (true recommended for greater efficiency in directory matching)</p>
                     * @return ConeMode <p>Whether to use cone mode (true recommended for greater efficiency in directory matching)</p>
                     * 
                     */
                    bool GetConeMode() const;

                    /**
                     * 设置<p>Whether to use cone mode (true recommended for greater efficiency in directory matching)</p>
                     * @param _coneMode <p>Whether to use cone mode (true recommended for greater efficiency in directory matching)</p>
                     * 
                     */
                    void SetConeMode(const bool& _coneMode);

                    /**
                     * 判断参数 ConeMode 是否已赋值
                     * @return ConeMode 是否已赋值
                     * 
                     */
                    bool ConeModeHasBeenSet() const;

                    /**
                     * 获取<p>Sparse checkout path list (for example, ["src/module-a/", "docs/"])</p>
                     * @return Patterns <p>Sparse checkout path list (for example, ["src/module-a/", "docs/"])</p>
                     * 
                     */
                    std::vector<std::string> GetPatterns() const;

                    /**
                     * 设置<p>Sparse checkout path list (for example, ["src/module-a/", "docs/"])</p>
                     * @param _patterns <p>Sparse checkout path list (for example, ["src/module-a/", "docs/"])</p>
                     * 
                     */
                    void SetPatterns(const std::vector<std::string>& _patterns);

                    /**
                     * 判断参数 Patterns 是否已赋值
                     * @return Patterns 是否已赋值
                     * 
                     */
                    bool PatternsHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable sparse detect</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Whether to use cone mode (true recommended for greater efficiency in directory matching)</p>
                     */
                    bool m_coneMode;
                    bool m_coneModeHasBeenSet;

                    /**
                     * <p>Sparse checkout path list (for example, ["src/module-a/", "docs/"])</p>
                     */
                    std::vector<std::string> m_patterns;
                    bool m_patternsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SPARSECHECKOUTCONFIG_H_
