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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTPOLICYITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTPOLICYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertRule.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusNotificationItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * TMP alerting rule instance
                */
                class PrometheusAlertPolicyItem : public AbstractModel
                {
                public:
                    PrometheusAlertPolicyItem();
                    ~PrometheusAlertPolicyItem() = default;
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
                     * 获取List of rules
                     * @return Rules List of rules
                     * 
                     */
                    std::vector<PrometheusAlertRule> GetRules() const;

                    /**
                     * 设置List of rules
                     * @param _rules List of rules
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
                     * 获取Alerting rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Alerting rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Alerting rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Alerting rule ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取If the alert comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateId If the alert comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置If the alert comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateId If the alert comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Alert channel, which may be returned as null if used in a template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Notification Alert channel, which may be returned as null if used in a template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PrometheusNotificationItem GetNotification() const;

                    /**
                     * 设置Alert channel, which may be returned as null if used in a template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _notification Alert channel, which may be returned as null if used in a template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotification(const PrometheusNotificationItem& _notification);

                    /**
                     * 判断参数 Notification 是否已赋值
                     * @return Notification 是否已赋值
                     * 
                     */
                    bool NotificationHasBeenSet() const;

                    /**
                     * 获取Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取If the alerting rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId If the alerting rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置If the alerting rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId If the alerting rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of rules
                     */
                    std::vector<PrometheusAlertRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Alerting rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * If the alert comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Alert channel, which may be returned as null if used in a template.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PrometheusNotificationItem m_notification;
                    bool m_notificationHasBeenSet;

                    /**
                     * Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * If the alerting rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTPOLICYITEM_H_
