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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFICATIONPROTECTIONINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFICATIONPROTECTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Modification protection status information.
                */
                class ModificationProtectionInfo : public AbstractModel
                {
                public:
                    ModificationProtectionInfo();
                    ~ModificationProtectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether modification protection is enabled. Once enabled, it prevents the instance from unintended modification or deletion.
- true: enable modification protection
- false: disable modification protection
                     * @return ModificationProtectionEnabled Whether modification protection is enabled. Once enabled, it prevents the instance from unintended modification or deletion.
- true: enable modification protection
- false: disable modification protection
                     * 
                     */
                    bool GetModificationProtectionEnabled() const;

                    /**
                     * 设置Whether modification protection is enabled. Once enabled, it prevents the instance from unintended modification or deletion.
- true: enable modification protection
- false: disable modification protection
                     * @param _modificationProtectionEnabled Whether modification protection is enabled. Once enabled, it prevents the instance from unintended modification or deletion.
- true: enable modification protection
- false: disable modification protection
                     * 
                     */
                    void SetModificationProtectionEnabled(const bool& _modificationProtectionEnabled);

                    /**
                     * 判断参数 ModificationProtectionEnabled 是否已赋值
                     * @return ModificationProtectionEnabled 是否已赋值
                     * 
                     */
                    bool ModificationProtectionEnabledHasBeenSet() const;

                    /**
                     * 获取1238716123
                     * @return OperatorUin 1238716123
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置1238716123
                     * @param _operatorUin 1238716123
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取Reason explanation for enabling modification protection.
Length: 1 to 255 characters. It must contain Chinese and characters from harmless strings. It can contain Chinese, letters, digits, hyphens (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * @return Reason Reason explanation for enabling modification protection.
Length: 1 to 255 characters. It must contain Chinese and characters from harmless strings. It can contain Chinese, letters, digits, hyphens (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason explanation for enabling modification protection.
Length: 1 to 255 characters. It must contain Chinese and characters from harmless strings. It can contain Chinese, letters, digits, hyphens (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * @param _reason Reason explanation for enabling modification protection.
Length: 1 to 255 characters. It must contain Chinese and characters from harmless strings. It can contain Chinese, letters, digits, hyphens (-), forward slashes (/), half-width periods (.), and underscores (_).
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
                     * Whether modification protection is enabled. Once enabled, it prevents the instance from unintended modification or deletion.
- true: enable modification protection
- false: disable modification protection
                     */
                    bool m_modificationProtectionEnabled;
                    bool m_modificationProtectionEnabledHasBeenSet;

                    /**
                     * 1238716123
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * Reason explanation for enabling modification protection.
Length: 1 to 255 characters. It must contain Chinese and characters from harmless strings. It can contain Chinese, letters, digits, hyphens (-), forward slashes (/), half-width periods (.), and underscores (_).
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFICATIONPROTECTIONINFO_H_
