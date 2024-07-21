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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDON_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Add-on description
                */
                class Addon : public AbstractModel
                {
                public:
                    Addon();
                    ~Addon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Add-on name
                     * @return AddonName Add-on name
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置Add-on name
                     * @param _addonName Add-on name
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                    /**
                     * 获取Add-on version
                     * @return AddonVersion Add-on version
                     * 
                     */
                    std::string GetAddonVersion() const;

                    /**
                     * 设置Add-on version
                     * @param _addonVersion Add-on version
                     * 
                     */
                    void SetAddonVersion(const std::string& _addonVersion);

                    /**
                     * 判断参数 AddonVersion 是否已赋值
                     * @return AddonVersion 是否已赋值
                     * 
                     */
                    bool AddonVersionHasBeenSet() const;

                    /**
                     * 获取Add-on parameters, which are base64-encoded strings in JSON/
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RawValues Add-on parameters, which are base64-encoded strings in JSON/
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRawValues() const;

                    /**
                     * 设置Add-on parameters, which are base64-encoded strings in JSON/
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _rawValues Add-on parameters, which are base64-encoded strings in JSON/
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRawValues(const std::string& _rawValues);

                    /**
                     * 判断参数 RawValues 是否已赋值
                     * @return RawValues 是否已赋值
                     * 
                     */
                    bool RawValuesHasBeenSet() const;

                    /**
                     * 获取Add-on status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Phase Add-on status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置Add-on status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _phase Add-on status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhase(const std::string& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取Reason for add-on failure
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Reason Reason for add-on failure
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason for add-on failure
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _reason Reason for add-on failure
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Add-on name
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                    /**
                     * Add-on version
                     */
                    std::string m_addonVersion;
                    bool m_addonVersionHasBeenSet;

                    /**
                     * Add-on parameters, which are base64-encoded strings in JSON/
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_rawValues;
                    bool m_rawValuesHasBeenSet;

                    /**
                     * Add-on status
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * Reason for add-on failure
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDON_H_
