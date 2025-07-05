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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * The statistical entity representing the distribution of vulnerabilities by severity level
                */
                class VulLevelInfo : public AbstractModel
                {
                public:
                    VulLevelInfo();
                    ~VulLevelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取// Severity level: 1 - low-risk; 2 - medium-risk; 3 - high-risk; 4 - critical
                     * @return VulLevel // Severity level: 1 - low-risk; 2 - medium-risk; 3 - high-risk; 4 - critical
                     * 
                     */
                    uint64_t GetVulLevel() const;

                    /**
                     * 设置// Severity level: 1 - low-risk; 2 - medium-risk; 3 - high-risk; 4 - critical
                     * @param _vulLevel // Severity level: 1 - low-risk; 2 - medium-risk; 3 - high-risk; 4 - critical
                     * 
                     */
                    void SetVulLevel(const uint64_t& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取Quantity
                     * @return Count Quantity
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Quantity
                     * @param _count Quantity
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * // Severity level: 1 - low-risk; 2 - medium-risk; 3 - high-risk; 4 - critical
                     */
                    uint64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * Quantity
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELINFO_H_
