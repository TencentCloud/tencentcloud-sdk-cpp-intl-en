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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTING_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTING_H_

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
                * Protection settings object.
                */
                class ModifyProtectionSetting : public AbstractModel
                {
                public:
                    ModifyProtectionSetting();
                    ~ModifyProtectionSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique asset ID.
                     * @return QUUID Unique asset ID.
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置Unique asset ID.
                     * @param _qUUID Unique asset ID.
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取Master switch. Valid values: 0 (disabled) and 1 (enabled).
                     * @return Enable Master switch. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Master switch. Valid values: 0 (disabled) and 1 (enabled).
                     * @param _enable Master switch. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Vulnerability defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     * @return VulDefEnable Vulnerability defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    uint64_t GetVulDefEnable() const;

                    /**
                     * 设置Vulnerability defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     * @param _vulDefEnable Vulnerability defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    void SetVulDefEnable(const uint64_t& _vulDefEnable);

                    /**
                     * 判断参数 VulDefEnable 是否已赋值
                     * @return VulDefEnable 是否已赋值
                     * 
                     */
                    bool VulDefEnableHasBeenSet() const;

                    /**
                     * 获取Vulnerability defense mode. Valid values: 0 (standard) and 1 (major event protection).
                     * @return VulDefMode Vulnerability defense mode. Valid values: 0 (standard) and 1 (major event protection).
                     * 
                     */
                    uint64_t GetVulDefMode() const;

                    /**
                     * 设置Vulnerability defense mode. Valid values: 0 (standard) and 1 (major event protection).
                     * @param _vulDefMode Vulnerability defense mode. Valid values: 0 (standard) and 1 (major event protection).
                     * 
                     */
                    void SetVulDefMode(const uint64_t& _vulDefMode);

                    /**
                     * 判断参数 VulDefMode 是否已赋值
                     * @return VulDefMode 是否已赋值
                     * 
                     */
                    bool VulDefModeHasBeenSet() const;

                    /**
                     * 获取Vulnerability defense action. Valid values: 0 (detection only) and 1 (detection and prevention).
                     * @return VulDefAction Vulnerability defense action. Valid values: 0 (detection only) and 1 (detection and prevention).
                     * 
                     */
                    uint64_t GetVulDefAction() const;

                    /**
                     * 设置Vulnerability defense action. Valid values: 0 (detection only) and 1 (detection and prevention).
                     * @param _vulDefAction Vulnerability defense action. Valid values: 0 (detection only) and 1 (detection and prevention).
                     * 
                     */
                    void SetVulDefAction(const uint64_t& _vulDefAction);

                    /**
                     * 判断参数 VulDefAction 是否已赋值
                     * @return VulDefAction 是否已赋值
                     * 
                     */
                    bool VulDefActionHasBeenSet() const;

                    /**
                     * 获取In-memory webshell defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     * @return MemShellDefEnable In-memory webshell defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    uint64_t GetMemShellDefEnable() const;

                    /**
                     * 设置In-memory webshell defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     * @param _memShellDefEnable In-memory webshell defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    void SetMemShellDefEnable(const uint64_t& _memShellDefEnable);

                    /**
                     * 判断参数 MemShellDefEnable 是否已赋值
                     * @return MemShellDefEnable 是否已赋值
                     * 
                     */
                    bool MemShellDefEnableHasBeenSet() const;

                    /**
                     * 获取Performance limit switch. Valid values: 0 (disabled) and 1 (enabled).
                     * @return PerformanceLimit Performance limit switch. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    uint64_t GetPerformanceLimit() const;

                    /**
                     * 设置Performance limit switch. Valid values: 0 (disabled) and 1 (enabled).
                     * @param _performanceLimit Performance limit switch. Valid values: 0 (disabled) and 1 (enabled).
                     * 
                     */
                    void SetPerformanceLimit(const uint64_t& _performanceLimit);

                    /**
                     * 判断参数 PerformanceLimit 是否已赋值
                     * @return PerformanceLimit 是否已赋值
                     * 
                     */
                    bool PerformanceLimitHasBeenSet() const;

                    /**
                     * 获取CPU threshold. Value range: 1–99.
                     * @return PerformanceLimitCpu CPU threshold. Value range: 1–99.
                     * 
                     */
                    uint64_t GetPerformanceLimitCpu() const;

                    /**
                     * 设置CPU threshold. Value range: 1–99.
                     * @param _performanceLimitCpu CPU threshold. Value range: 1–99.
                     * 
                     */
                    void SetPerformanceLimitCpu(const uint64_t& _performanceLimitCpu);

                    /**
                     * 判断参数 PerformanceLimitCpu 是否已赋值
                     * @return PerformanceLimitCpu 是否已赋值
                     * 
                     */
                    bool PerformanceLimitCpuHasBeenSet() const;

                    /**
                     * 获取Memory threshold. Value range: 1–99.
                     * @return PerformanceLimitMem Memory threshold. Value range: 1–99.
                     * 
                     */
                    uint64_t GetPerformanceLimitMem() const;

                    /**
                     * 设置Memory threshold. Value range: 1–99.
                     * @param _performanceLimitMem Memory threshold. Value range: 1–99.
                     * 
                     */
                    void SetPerformanceLimitMem(const uint64_t& _performanceLimitMem);

                    /**
                     * 判断参数 PerformanceLimitMem 是否已赋值
                     * @return PerformanceLimitMem 是否已赋值
                     * 
                     */
                    bool PerformanceLimitMemHasBeenSet() const;

                    /**
                     * 获取Remaining memory threshold.
                     * @return PerformanceLimitMemAmount Remaining memory threshold.
                     * 
                     */
                    uint64_t GetPerformanceLimitMemAmount() const;

                    /**
                     * 设置Remaining memory threshold.
                     * @param _performanceLimitMemAmount Remaining memory threshold.
                     * 
                     */
                    void SetPerformanceLimitMemAmount(const uint64_t& _performanceLimitMemAmount);

                    /**
                     * 判断参数 PerformanceLimitMemAmount 是否已赋值
                     * @return PerformanceLimitMemAmount 是否已赋值
                     * 
                     */
                    bool PerformanceLimitMemAmountHasBeenSet() const;

                    /**
                     * 获取Additional protection. Valid values: 0 (do not inject into processes that will restart) and 1 (inject into processes that will restart).
                     * @return SafeInject Additional protection. Valid values: 0 (do not inject into processes that will restart) and 1 (inject into processes that will restart).
                     * 
                     */
                    uint64_t GetSafeInject() const;

                    /**
                     * 设置Additional protection. Valid values: 0 (do not inject into processes that will restart) and 1 (inject into processes that will restart).
                     * @param _safeInject Additional protection. Valid values: 0 (do not inject into processes that will restart) and 1 (inject into processes that will restart).
                     * 
                     */
                    void SetSafeInject(const uint64_t& _safeInject);

                    /**
                     * 判断参数 SafeInject 是否已赋值
                     * @return SafeInject 是否已赋值
                     * 
                     */
                    bool SafeInjectHasBeenSet() const;

                private:

                    /**
                     * Unique asset ID.
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * Master switch. Valid values: 0 (disabled) and 1 (enabled).
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Vulnerability defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     */
                    uint64_t m_vulDefEnable;
                    bool m_vulDefEnableHasBeenSet;

                    /**
                     * Vulnerability defense mode. Valid values: 0 (standard) and 1 (major event protection).
                     */
                    uint64_t m_vulDefMode;
                    bool m_vulDefModeHasBeenSet;

                    /**
                     * Vulnerability defense action. Valid values: 0 (detection only) and 1 (detection and prevention).
                     */
                    uint64_t m_vulDefAction;
                    bool m_vulDefActionHasBeenSet;

                    /**
                     * In-memory webshell defense switch. Valid values: 0 (disabled) and 1 (enabled).
                     */
                    uint64_t m_memShellDefEnable;
                    bool m_memShellDefEnableHasBeenSet;

                    /**
                     * Performance limit switch. Valid values: 0 (disabled) and 1 (enabled).
                     */
                    uint64_t m_performanceLimit;
                    bool m_performanceLimitHasBeenSet;

                    /**
                     * CPU threshold. Value range: 1–99.
                     */
                    uint64_t m_performanceLimitCpu;
                    bool m_performanceLimitCpuHasBeenSet;

                    /**
                     * Memory threshold. Value range: 1–99.
                     */
                    uint64_t m_performanceLimitMem;
                    bool m_performanceLimitMemHasBeenSet;

                    /**
                     * Remaining memory threshold.
                     */
                    uint64_t m_performanceLimitMemAmount;
                    bool m_performanceLimitMemAmountHasBeenSet;

                    /**
                     * Additional protection. Valid values: 0 (do not inject into processes that will restart) and 1 (inject into processes that will restart).
                     */
                    uint64_t m_safeInject;
                    bool m_safeInjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTING_H_
