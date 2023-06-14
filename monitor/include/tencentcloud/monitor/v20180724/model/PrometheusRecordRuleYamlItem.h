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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRECORDRULEYAMLITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRECORDRULEYAMLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Details of the Prometheus recording rule instance, including the cluster ID.
                */
                class PrometheusRecordRuleYamlItem : public AbstractModel
                {
                public:
                    PrometheusRecordRuleYamlItem();
                    ~PrometheusRecordRuleYamlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance name
                     * @return Name Instance name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name
                     * @param _name Instance name
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
                     * 获取Last update time
                     * @return UpdateTime Last update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time
                     * @param _updateTime Last update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取YAML content
                     * @return TemplateId YAML content
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置YAML content
                     * @param _templateId YAML content
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
                     * 获取If the recording rule comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Content If the recording rule comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置If the recording rule comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _content If the recording rule comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取If the recording rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId If the recording rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置If the recording rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId If the recording rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
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

                    /**
                     * 获取Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id id
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
                     * 获取Number of rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Number of rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _count Number of rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Instance name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Last update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * YAML content
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * If the recording rule comes from a template, `TemplateId` is the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * If the recording rule comes from the user cluster CRD resource definition, `ClusterId` is the cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Number of rules
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRECORDRULEYAMLITEM_H_
