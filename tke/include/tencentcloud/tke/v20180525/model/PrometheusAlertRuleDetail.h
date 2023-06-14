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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULEDETAIL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusAlertRule.h>
#include <tencentcloud/tke/v20180525/model/PrometheusNotification.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * The alarm configuration
                */
                class PrometheusAlertRuleDetail : public AbstractModel
                {
                public:
                    PrometheusAlertRuleDetail();
                    ~PrometheusAlertRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
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
                     * 获取Rule list
                     * @return Rules Rule list
                     * 
                     */
                    std::vector<PrometheusAlertRule> GetRules() const;

                    /**
                     * 设置Rule list
                     * @param _rules Rule list
                     * 
                     */
                    void SetRules(const std::vector<PrometheusAlertRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Last modification time
                     * @return UpdatedAt Last modification time
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Last modification time
                     * @param _updatedAt Last modification time
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Alarm delivery methods
                     * @return Notification Alarm delivery methods
                     * 
                     */
                    PrometheusNotification GetNotification() const;

                    /**
                     * 设置Alarm delivery methods
                     * @param _notification Alarm delivery methods
                     * 
                     */
                    void SetNotification(const PrometheusNotification& _notification);

                    /**
                     * 判断参数 Notification 是否已赋值
                     * @return Notification 是否已赋值
                     * 
                     */
                    bool NotificationHasBeenSet() const;

                    /**
                     * 获取Alarm rule ID
                     * @return Id Alarm rule ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Alarm rule ID
                     * @param _id Alarm rule ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取If the alarm is delivered via a template, the TemplateId is the template ID.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return TemplateId If the alarm is delivered via a template, the TemplateId is the template ID.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置If the alarm is delivered via a template, the TemplateId is the template ID.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _templateId If the alarm is delivered via a template, the TemplateId is the template ID.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Alarm interval
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Interval Alarm interval
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Alarm interval
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _interval Alarm interval
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule list
                     */
                    std::vector<PrometheusAlertRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Last modification time
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Alarm delivery methods
                     */
                    PrometheusNotification m_notification;
                    bool m_notificationHasBeenSet;

                    /**
                     * Alarm rule ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * If the alarm is delivered via a template, the TemplateId is the template ID.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Alarm interval
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULEDETAIL_H_
