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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSUMMARYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSUMMARYITEM_H_

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
                * Vulnerability repair summary
                */
                class VulFixSummaryItem : public AbstractModel
                {
                public:
                    VulFixSummaryItem();
                    ~VulFixSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Vulnerability ID</p>
                     * @return VulId <p>Vulnerability ID</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>Vulnerability ID</p>
                     * @param _vulId <p>Vulnerability ID</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability name</p>
                     * @return VulName <p>Vulnerability name</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置<p>Vulnerability name</p>
                     * @param _vulName <p>Vulnerability name</p>
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
                     * 获取<p>CVE id</p>
                     * @return CveId <p>CVE id</p>
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置<p>CVE id</p>
                     * @param _cveId <p>CVE id</p>
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of affected hosts</p>
                     * @return AffectedCount <p>Number of affected hosts</p>
                     * 
                     */
                    int64_t GetAffectedCount() const;

                    /**
                     * 设置<p>Number of affected hosts</p>
                     * @param _affectedCount <p>Number of affected hosts</p>
                     * 
                     */
                    void SetAffectedCount(const int64_t& _affectedCount);

                    /**
                     * 判断参数 AffectedCount 是否已赋值
                     * @return AffectedCount 是否已赋值
                     * 
                     */
                    bool AffectedCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether restart is required after repair</p>
                     * @return NeedReboot <p>Whether restart is required after repair</p>
                     * 
                     */
                    bool GetNeedReboot() const;

                    /**
                     * 设置<p>Whether restart is required after repair</p>
                     * @param _needReboot <p>Whether restart is required after repair</p>
                     * 
                     */
                    void SetNeedReboot(const bool& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     * 
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取<p>Whether one-click repair is supported true-supported false-unsupported</p>
                     * @return FixSwitch <p>Whether one-click repair is supported true-supported false-unsupported</p>
                     * 
                     */
                    bool GetFixSwitch() const;

                    /**
                     * 设置<p>Whether one-click repair is supported true-supported false-unsupported</p>
                     * @param _fixSwitch <p>Whether one-click repair is supported true-supported false-unsupported</p>
                     * 
                     */
                    void SetFixSwitch(const bool& _fixSwitch);

                    /**
                     * 判断参数 FixSwitch 是否已赋值
                     * @return FixSwitch 是否已赋值
                     * 
                     */
                    bool FixSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>Vulnerability ID</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>Vulnerability name</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>CVE id</p>
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * <p>Number of affected hosts</p>
                     */
                    int64_t m_affectedCount;
                    bool m_affectedCountHasBeenSet;

                    /**
                     * <p>Whether restart is required after repair</p>
                     */
                    bool m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * <p>Whether one-click repair is supported true-supported false-unsupported</p>
                     */
                    bool m_fixSwitch;
                    bool m_fixSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSUMMARYITEM_H_
