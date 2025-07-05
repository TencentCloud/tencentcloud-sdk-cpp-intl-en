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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULTOPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULTOPINFO_H_

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
                * The statistical entity representing top vulnerabilities
                */
                class VulTopInfo : public AbstractModel
                {
                public:
                    VulTopInfo();
                    ~VulTopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulLevel Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulLevel() const;

                    /**
                     * 设置Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulLevel Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulCount Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulCount Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulId Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulId Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                private:

                    /**
                     * Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULTOPINFO_H_
