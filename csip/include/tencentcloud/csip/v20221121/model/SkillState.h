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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSTATE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * SKILL installation status info
                */
                class SkillState : public AbstractModel
                {
                public:
                    SkillState();
                    ~SkillState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SKILL Installation Status
Enumeration value:
0: Not installed
Installing
2: Installed
3: Installation failure
4: Uninstalling
5: Uninstallation failed.
                     * @return SkillInstallStatus SKILL Installation Status
Enumeration value:
0: Not installed
Installing
2: Installed
3: Installation failure
4: Uninstalling
5: Uninstallation failed.
                     * 
                     */
                    int64_t GetSkillInstallStatus() const;

                    /**
                     * 设置SKILL Installation Status
Enumeration value:
0: Not installed
Installing
2: Installed
3: Installation failure
4: Uninstalling
5: Uninstallation failed.
                     * @param _skillInstallStatus SKILL Installation Status
Enumeration value:
0: Not installed
Installing
2: Installed
3: Installation failure
4: Uninstalling
5: Uninstallation failed.
                     * 
                     */
                    void SetSkillInstallStatus(const int64_t& _skillInstallStatus);

                    /**
                     * 判断参数 SkillInstallStatus 是否已赋值
                     * @return SkillInstallStatus 是否已赋值
                     * 
                     */
                    bool SkillInstallStatusHasBeenSet() const;

                    /**
                     * 获取SKILL installation/uninstallation operation time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return SkillInstallTime SKILL installation/uninstallation operation time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetSkillInstallTime() const;

                    /**
                     * 设置SKILL installation/uninstallation operation time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _skillInstallTime SKILL installation/uninstallation operation time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    void SetSkillInstallTime(const std::string& _skillInstallTime);

                    /**
                     * 判断参数 SkillInstallTime 是否已赋值
                     * @return SkillInstallTime 是否已赋值
                     * 
                     */
                    bool SkillInstallTimeHasBeenSet() const;

                    /**
                     * 获取SKILL installation/uninstallation result description information
                     * @return SkillInstallResult SKILL installation/uninstallation result description information
                     * 
                     */
                    std::string GetSkillInstallResult() const;

                    /**
                     * 设置SKILL installation/uninstallation result description information
                     * @param _skillInstallResult SKILL installation/uninstallation result description information
                     * 
                     */
                    void SetSkillInstallResult(const std::string& _skillInstallResult);

                    /**
                     * 判断参数 SkillInstallResult 是否已赋值
                     * @return SkillInstallResult 是否已赋值
                     * 
                     */
                    bool SkillInstallResultHasBeenSet() const;

                private:

                    /**
                     * SKILL Installation Status
Enumeration value:
0: Not installed
Installing
2: Installed
3: Installation failure
4: Uninstalling
5: Uninstallation failed.
                     */
                    int64_t m_skillInstallStatus;
                    bool m_skillInstallStatusHasBeenSet;

                    /**
                     * SKILL installation/uninstallation operation time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_skillInstallTime;
                    bool m_skillInstallTimeHasBeenSet;

                    /**
                     * SKILL installation/uninstallation result description information
                     */
                    std::string m_skillInstallResult;
                    bool m_skillInstallResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSTATE_H_
