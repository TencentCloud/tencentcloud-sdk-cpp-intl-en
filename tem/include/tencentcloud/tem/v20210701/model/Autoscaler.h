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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_AUTOSCALER_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_AUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/HorizontalAutoscaler.h>
#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscaler.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Scaling rule
                */
                class Autoscaler : public AbstractModel
                {
                public:
                    Autoscaler();
                    ~Autoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum number of instances in a scaling group
                     * @return MinReplicas Minimum number of instances in a scaling group
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置Minimum number of instances in a scaling group
                     * @param _minReplicas Minimum number of instances in a scaling group
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances in a scaling group
                     * @return MaxReplicas Maximum number of instances in a scaling group
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置Maximum number of instances in a scaling group
                     * @param _maxReplicas Maximum number of instances in a scaling group
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取Policy of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return HorizontalAutoscaler Policy of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<HorizontalAutoscaler> GetHorizontalAutoscaler() const;

                    /**
                     * 设置Policy of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _horizontalAutoscaler Policy of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHorizontalAutoscaler(const std::vector<HorizontalAutoscaler>& _horizontalAutoscaler);

                    /**
                     * 判断参数 HorizontalAutoscaler 是否已赋值
                     * @return HorizontalAutoscaler 是否已赋值
                     * 
                     */
                    bool HorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取Scheduled auto-scaler policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CronHorizontalAutoscaler Scheduled auto-scaler policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CronHorizontalAutoscaler> GetCronHorizontalAutoscaler() const;

                    /**
                     * 设置Scheduled auto-scaler policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cronHorizontalAutoscaler Scheduled auto-scaler policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCronHorizontalAutoscaler(const std::vector<CronHorizontalAutoscaler>& _cronHorizontalAutoscaler);

                    /**
                     * 判断参数 CronHorizontalAutoscaler 是否已赋值
                     * @return CronHorizontalAutoscaler 是否已赋值
                     * 
                     */
                    bool CronHorizontalAutoscalerHasBeenSet() const;

                    /**
                     * 获取Scaling rule ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoscalerId Scaling rule ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAutoscalerId() const;

                    /**
                     * 设置Scaling rule ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _autoscalerId Scaling rule ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoscalerId(const std::string& _autoscalerId);

                    /**
                     * 判断参数 AutoscalerId 是否已赋值
                     * @return AutoscalerId 是否已赋值
                     * 
                     */
                    bool AutoscalerIdHasBeenSet() const;

                    /**
                     * 获取Scaling rule name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoscalerName Scaling rule name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAutoscalerName() const;

                    /**
                     * 设置Scaling rule name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _autoscalerName Scaling rule name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoscalerName(const std::string& _autoscalerName);

                    /**
                     * 判断参数 AutoscalerName 是否已赋值
                     * @return AutoscalerName 是否已赋值
                     * 
                     */
                    bool AutoscalerNameHasBeenSet() const;

                    /**
                     * 获取Description of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Description Description of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _description Description of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateDate Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _createDate Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ModifyDate Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _modifyDate Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取Start Time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnableDate Start Time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnableDate() const;

                    /**
                     * 设置Start Time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _enableDate Start Time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableDate(const std::string& _enableDate);

                    /**
                     * 判断参数 EnableDate 是否已赋值
                     * @return EnableDate 是否已赋值
                     * 
                     */
                    bool EnableDateHasBeenSet() const;

                    /**
                     * 获取Whether it is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Enabled Whether it is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether it is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _enabled Whether it is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Minimum number of instances in a scaling group
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * Maximum number of instances in a scaling group
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * Policy of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<HorizontalAutoscaler> m_horizontalAutoscaler;
                    bool m_horizontalAutoscalerHasBeenSet;

                    /**
                     * Scheduled auto-scaler policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<CronHorizontalAutoscaler> m_cronHorizontalAutoscaler;
                    bool m_cronHorizontalAutoscalerHasBeenSet;

                    /**
                     * Scaling rule ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_autoscalerId;
                    bool m_autoscalerIdHasBeenSet;

                    /**
                     * Scaling rule name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_autoscalerName;
                    bool m_autoscalerNameHasBeenSet;

                    /**
                     * Description of the scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * Modification time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * Start Time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_enableDate;
                    bool m_enableDateHasBeenSet;

                    /**
                     * Whether it is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_AUTOSCALER_H_
