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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELCOUNTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELCOUNTINFO_H_

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
                * Number of vulnerability levels
                */
                class VulLevelCountInfo : public AbstractModel
                {
                public:
                    VulLevelCountInfo();
                    ~VulLevelCountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability level
                     * @return VulLevel Vulnerability level
                     * 
                     */
                    uint64_t GetVulLevel() const;

                    /**
                     * 设置Vulnerability level
                     * @param _vulLevel Vulnerability level
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
                     * @return VulCount Number of vulnerabilities
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置Number of vulnerabilities
                     * @param _vulCount Number of vulnerabilities
                     * 
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                private:

                    /**
                     * Vulnerability level
                     */
                    uint64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELCOUNTINFO_H_
