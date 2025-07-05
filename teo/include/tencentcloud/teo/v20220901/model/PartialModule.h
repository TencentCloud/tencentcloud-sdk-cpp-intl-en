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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PARTIALMODULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PARTIALMODULE_H_

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
                * Module settings of the exception rule
                */
                class PartialModule : public AbstractModel
                {
                public:
                    PartialModule();
                    ~PartialModule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The module. Values:
<li>`waf`: Managed rules</li>
                     * @return Module The module. Values:
<li>`waf`: Managed rules</li>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The module. Values:
<li>`waf`: Managed rules</li>
                     * @param _module The module. Values:
<li>`waf`: Managed rules</li>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取List of managed rule IDs to be skipped.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Include List of managed rule IDs to be skipped.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetInclude() const;

                    /**
                     * 设置List of managed rule IDs to be skipped.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _include List of managed rule IDs to be skipped.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInclude(const std::vector<int64_t>& _include);

                    /**
                     * 判断参数 Include 是否已赋值
                     * @return Include 是否已赋值
                     * 
                     */
                    bool IncludeHasBeenSet() const;

                private:

                    /**
                     * The module. Values:
<li>`waf`: Managed rules</li>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * List of managed rule IDs to be skipped.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_include;
                    bool m_includeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PARTIALMODULE_H_
