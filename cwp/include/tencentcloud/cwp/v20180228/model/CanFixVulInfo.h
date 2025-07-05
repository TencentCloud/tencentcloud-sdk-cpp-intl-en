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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CANFIXVULINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CANFIXVULINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulInfoHostInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Host information for batch vulnerability fixing
                */
                class CanFixVulInfo : public AbstractModel
                {
                public:
                    CanFixVulInfo();
                    ~CanFixVulInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Information on hosts where this vulnerability can be fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostList Information on hosts where this vulnerability can be fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VulInfoHostInfo> GetHostList() const;

                    /**
                     * 设置Information on hosts where this vulnerability can be fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostList Information on hosts where this vulnerability can be fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostList(const std::vector<VulInfoHostInfo>& _hostList);

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                    /**
                     * 获取Fixing prompt tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixTag Fixing prompt tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFixTag() const;

                    /**
                     * 设置Fixing prompt tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fixTag Fixing prompt tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFixTag(const std::vector<std::string>& _fixTag);

                    /**
                     * 判断参数 FixTag 是否已赋值
                     * @return FixTag 是否已赋值
                     * 
                     */
                    bool FixTagHasBeenSet() const;

                    /**
                     * 获取
                     * @return VulCategory 
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置
                     * @param _vulCategory 
                     * 
                     */
                    void SetVulCategory(const uint64_t& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Information on hosts where this vulnerability can be fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VulInfoHostInfo> m_hostList;
                    bool m_hostListHasBeenSet;

                    /**
                     * Fixing prompt tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_fixTag;
                    bool m_fixTagHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CANFIXVULINFO_H_
