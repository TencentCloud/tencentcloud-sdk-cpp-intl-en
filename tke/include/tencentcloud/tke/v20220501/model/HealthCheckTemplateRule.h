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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKTEMPLATERULE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKTEMPLATERULE_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Health check template rules
                */
                class HealthCheckTemplateRule : public AbstractModel
                {
                public:
                    HealthCheckTemplateRule();
                    ~HealthCheckTemplateRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Health check item name
                     * @return Name Health check item name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Health check item name
                     * @param _name Health check item name
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
                     * 获取Description of health check rules
                     * @return Description Description of health check rules
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of health check rules
                     * @param _description Description of health check rules
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Fix action
                     * @return RepairAction Fix action
                     * 
                     */
                    std::string GetRepairAction() const;

                    /**
                     * 设置Fix action
                     * @param _repairAction Fix action
                     * 
                     */
                    void SetRepairAction(const std::string& _repairAction);

                    /**
                     * 判断参数 RepairAction 是否已赋值
                     * @return RepairAction 是否已赋值
                     * 
                     */
                    bool RepairActionHasBeenSet() const;

                    /**
                     * 获取Fix impact
                     * @return RepairEffect Fix impact
                     * 
                     */
                    std::string GetRepairEffect() const;

                    /**
                     * 设置Fix impact
                     * @param _repairEffect Fix impact
                     * 
                     */
                    void SetRepairEffect(const std::string& _repairEffect);

                    /**
                     * 判断参数 RepairEffect 是否已赋值
                     * @return RepairEffect 是否已赋值
                     * 
                     */
                    bool RepairEffectHasBeenSet() const;

                    /**
                     * 获取Whether it is recommended to enable check
                     * @return ShouldEnable Whether it is recommended to enable check
                     * 
                     */
                    bool GetShouldEnable() const;

                    /**
                     * 设置Whether it is recommended to enable check
                     * @param _shouldEnable Whether it is recommended to enable check
                     * 
                     */
                    void SetShouldEnable(const bool& _shouldEnable);

                    /**
                     * 判断参数 ShouldEnable 是否已赋值
                     * @return ShouldEnable 是否已赋值
                     * 
                     */
                    bool ShouldEnableHasBeenSet() const;

                    /**
                     * 获取Whether repair is suggested.
                     * @return ShouldRepair Whether repair is suggested.
                     * 
                     */
                    bool GetShouldRepair() const;

                    /**
                     * 设置Whether repair is suggested.
                     * @param _shouldRepair Whether repair is suggested.
                     * 
                     */
                    void SetShouldRepair(const bool& _shouldRepair);

                    /**
                     * 判断参数 ShouldRepair 是否已赋值
                     * @return ShouldRepair 是否已赋值
                     * 
                     */
                    bool ShouldRepairHasBeenSet() const;

                    /**
                     * 获取Severity
                     * @return Severity Severity
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置Severity
                     * @param _severity Severity
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                private:

                    /**
                     * Health check item name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of health check rules
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Fix action
                     */
                    std::string m_repairAction;
                    bool m_repairActionHasBeenSet;

                    /**
                     * Fix impact
                     */
                    std::string m_repairEffect;
                    bool m_repairEffectHasBeenSet;

                    /**
                     * Whether it is recommended to enable check
                     */
                    bool m_shouldEnable;
                    bool m_shouldEnableHasBeenSet;

                    /**
                     * Whether repair is suggested.
                     */
                    bool m_shouldRepair;
                    bool m_shouldRepairHasBeenSet;

                    /**
                     * Severity
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKTEMPLATERULE_H_
