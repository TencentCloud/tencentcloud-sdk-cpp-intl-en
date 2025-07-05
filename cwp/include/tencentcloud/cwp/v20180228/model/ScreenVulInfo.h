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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENVULINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENVULINFO_H_

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
                * Vulnerability list on big screen
                */
                class ScreenVulInfo : public AbstractModel
                {
                public:
                    ScreenVulInfo();
                    ~ScreenVulInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability Event ID
                     * @return Id Vulnerability Event ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Vulnerability Event ID
                     * @param _id Vulnerability Event ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return Name Vulnerability name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _name Vulnerability name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Last detection Time
                     * @return LastTime Last detection Time
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last detection Time
                     * @param _lastTime Last detection Time
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability level 1: low-risk; 2: medium-risk; 3: high-risk; 4: prompt
                     * @return Level Vulnerability level 1: low-risk; 2: medium-risk; 3: high-risk; 4: prompt
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Vulnerability level 1: low-risk; 2: medium-risk; 3: high-risk; 4: prompt
                     * @param _level Vulnerability level 1: low-risk; 2: medium-risk; 3: high-risk; 4: prompt
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Vulnerability type: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Category Vulnerability type: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCategory() const;

                    /**
                     * 设置Vulnerability type: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _category Vulnerability type: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCategory(const uint64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * Vulnerability Event ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Last detection Time
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Vulnerability level 1: low-risk; 2: medium-risk; 3: high-risk; 4: prompt
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Vulnerability type: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENVULINFO_H_
