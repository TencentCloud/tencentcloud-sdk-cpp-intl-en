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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_

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
                * Auto-scaling configuration for the CWP module
                */
                class HostAutoScaleConfig : public AbstractModel
                {
                public:
                    HostAutoScaleConfig();
                    ~HostAutoScaleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host auto-scaling switch
Enumeration values:
ON: enable
OFF: disabled.
Supplemental description: If not passed, no modification is made. Map the underlying auto-purchase switch auto_repurchase_switch.
                     * @return Switch Host auto-scaling switch
Enumeration values:
ON: enable
OFF: disabled.
Supplemental description: If not passed, no modification is made. Map the underlying auto-purchase switch auto_repurchase_switch.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Host auto-scaling switch
Enumeration values:
ON: enable
OFF: disabled.
Supplemental description: If not passed, no modification is made. Map the underlying auto-purchase switch auto_repurchase_switch.
                     * @param _switch Host auto-scaling switch
Enumeration values:
ON: enable
OFF: disabled.
Supplemental description: If not passed, no modification is made. Map the underlying auto-purchase switch auto_repurchase_switch.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Scale-out version
Enumeration values:
PRO: Professional Edition
ULTIMATE: Flagship edition
Supplementary description: No modification will be made if this parameter is not passed in.
                     * @return ProtectType Scale-out version
Enumeration values:
PRO: Professional Edition
ULTIMATE: Flagship edition
Supplementary description: No modification will be made if this parameter is not passed in.
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置Scale-out version
Enumeration values:
PRO: Professional Edition
ULTIMATE: Flagship edition
Supplementary description: No modification will be made if this parameter is not passed in.
                     * @param _protectType Scale-out version
Enumeration values:
PRO: Professional Edition
ULTIMATE: Flagship edition
Supplementary description: No modification will be made if this parameter is not passed in.
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                private:

                    /**
                     * Host auto-scaling switch
Enumeration values:
ON: enable
OFF: disabled.
Supplemental description: If not passed, no modification is made. Map the underlying auto-purchase switch auto_repurchase_switch.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Scale-out version
Enumeration values:
PRO: Professional Edition
ULTIMATE: Flagship edition
Supplementary description: No modification will be made if this parameter is not passed in.
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_
