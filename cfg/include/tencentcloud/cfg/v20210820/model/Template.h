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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TemplateGroup.h>
#include <tencentcloud/cfg/v20210820/model/TemplateMonitor.h>
#include <tencentcloud/cfg/v20210820/model/TemplatePolicy.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>
#include <tencentcloud/cfg/v20210820/model/ApmServiceInfo.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Template library
                */
                class Template : public AbstractModel
                {
                public:
                    Template();
                    ~Template() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template library ID
                     * @return TemplateId Template library ID
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template library ID
                     * @param _templateId Template library ID
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Template library name
                     * @return TemplateTitle Template library name
                     * 
                     */
                    std::string GetTemplateTitle() const;

                    /**
                     * 设置Template library name
                     * @param _templateTitle Template library name
                     * 
                     */
                    void SetTemplateTitle(const std::string& _templateTitle);

                    /**
                     * 判断参数 TemplateTitle 是否已赋值
                     * @return TemplateTitle 是否已赋值
                     * 
                     */
                    bool TemplateTitleHasBeenSet() const;

                    /**
                     * 获取Template library description
                     * @return TemplateDescription Template library description
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置Template library description
                     * @param _templateDescription Template library description
                     * 
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateTag Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTemplateTag() const;

                    /**
                     * 设置Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateTag Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateTag(const std::string& _templateTag);

                    /**
                     * 判断参数 TemplateTag 是否已赋值
                     * @return TemplateTag 是否已赋值
                     * 
                     */
                    bool TemplateTagHasBeenSet() const;

                    /**
                     * 获取Usage status. 1: in use; 2: not in use.
                     * @return TemplateIsUsed Usage status. 1: in use; 2: not in use.
                     * 
                     */
                    int64_t GetTemplateIsUsed() const;

                    /**
                     * 设置Usage status. 1: in use; 2: not in use.
                     * @param _templateIsUsed Usage status. 1: in use; 2: not in use.
                     * 
                     */
                    void SetTemplateIsUsed(const int64_t& _templateIsUsed);

                    /**
                     * 判断参数 TemplateIsUsed 是否已赋值
                     * @return TemplateIsUsed 是否已赋值
                     * 
                     */
                    bool TemplateIsUsedHasBeenSet() const;

                    /**
                     * 获取Template library creation time
                     * @return TemplateCreateTime Template library creation time
                     * 
                     */
                    std::string GetTemplateCreateTime() const;

                    /**
                     * 设置Template library creation time
                     * @param _templateCreateTime Template library creation time
                     * 
                     */
                    void SetTemplateCreateTime(const std::string& _templateCreateTime);

                    /**
                     * 判断参数 TemplateCreateTime 是否已赋值
                     * @return TemplateCreateTime 是否已赋值
                     * 
                     */
                    bool TemplateCreateTimeHasBeenSet() const;

                    /**
                     * 获取Template library update time
                     * @return TemplateUpdateTime Template library update time
                     * 
                     */
                    std::string GetTemplateUpdateTime() const;

                    /**
                     * 设置Template library update time
                     * @param _templateUpdateTime Template library update time
                     * 
                     */
                    void SetTemplateUpdateTime(const std::string& _templateUpdateTime);

                    /**
                     * 判断参数 TemplateUpdateTime 是否已赋值
                     * @return TemplateUpdateTime 是否已赋值
                     * 
                     */
                    bool TemplateUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Template library mode. 1: manual execution; 2: automatic execution.
                     * @return TemplateMode Template library mode. 1: manual execution; 2: automatic execution.
                     * 
                     */
                    int64_t GetTemplateMode() const;

                    /**
                     * 设置Template library mode. 1: manual execution; 2: automatic execution.
                     * @param _templateMode Template library mode. 1: manual execution; 2: automatic execution.
                     * 
                     */
                    void SetTemplateMode(const int64_t& _templateMode);

                    /**
                     * 判断参数 TemplateMode 是否已赋值
                     * @return TemplateMode 是否已赋值
                     * 
                     */
                    bool TemplateModeHasBeenSet() const;

                    /**
                     * 获取Automatic pause duration. Unit: minutes.
                     * @return TemplatePauseDuration Automatic pause duration. Unit: minutes.
                     * 
                     */
                    int64_t GetTemplatePauseDuration() const;

                    /**
                     * 设置Automatic pause duration. Unit: minutes.
                     * @param _templatePauseDuration Automatic pause duration. Unit: minutes.
                     * 
                     */
                    void SetTemplatePauseDuration(const int64_t& _templatePauseDuration);

                    /**
                     * 判断参数 TemplatePauseDuration 是否已赋值
                     * @return TemplatePauseDuration 是否已赋值
                     * 
                     */
                    bool TemplatePauseDurationHasBeenSet() const;

                    /**
                     * 获取Main account that creates the experiment
                     * @return TemplateOwnerUin Main account that creates the experiment
                     * 
                     */
                    std::string GetTemplateOwnerUin() const;

                    /**
                     * 设置Main account that creates the experiment
                     * @param _templateOwnerUin Main account that creates the experiment
                     * 
                     */
                    void SetTemplateOwnerUin(const std::string& _templateOwnerUin);

                    /**
                     * 判断参数 TemplateOwnerUin 是否已赋值
                     * @return TemplateOwnerUin 是否已赋值
                     * 
                     */
                    bool TemplateOwnerUinHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return TemplateRegionId Region ID
                     * 
                     */
                    int64_t GetTemplateRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _templateRegionId Region ID
                     * 
                     */
                    void SetTemplateRegionId(const int64_t& _templateRegionId);

                    /**
                     * 判断参数 TemplateRegionId 是否已赋值
                     * @return TemplateRegionId 是否已赋值
                     * 
                     */
                    bool TemplateRegionIdHasBeenSet() const;

                    /**
                     * 获取Action group
                     * @return TemplateGroups Action group
                     * 
                     */
                    std::vector<TemplateGroup> GetTemplateGroups() const;

                    /**
                     * 设置Action group
                     * @param _templateGroups Action group
                     * 
                     */
                    void SetTemplateGroups(const std::vector<TemplateGroup>& _templateGroups);

                    /**
                     * 判断参数 TemplateGroups 是否已赋值
                     * @return TemplateGroups 是否已赋值
                     * 
                     */
                    bool TemplateGroupsHasBeenSet() const;

                    /**
                     * 获取Monitoring metrics
                     * @return TemplateMonitors Monitoring metrics
                     * 
                     */
                    std::vector<TemplateMonitor> GetTemplateMonitors() const;

                    /**
                     * 设置Monitoring metrics
                     * @param _templateMonitors Monitoring metrics
                     * 
                     */
                    void SetTemplateMonitors(const std::vector<TemplateMonitor>& _templateMonitors);

                    /**
                     * 判断参数 TemplateMonitors 是否已赋值
                     * @return TemplateMonitors 是否已赋值
                     * 
                     */
                    bool TemplateMonitorsHasBeenSet() const;

                    /**
                     * 获取Guardrail monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplatePolicy Guardrail monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TemplatePolicy GetTemplatePolicy() const;

                    /**
                     * 设置Guardrail monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templatePolicy Guardrail monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplatePolicy(const TemplatePolicy& _templatePolicy);

                    /**
                     * 判断参数 TemplatePolicy 是否已赋值
                     * @return TemplatePolicy 是否已赋值
                     * 
                     */
                    bool TemplatePolicyHasBeenSet() const;

                    /**
                     * 获取Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateSource Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTemplateSource() const;

                    /**
                     * 设置Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateSource Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateSource(const int64_t& _templateSource);

                    /**
                     * 判断参数 TemplateSource 是否已赋值
                     * @return TemplateSource 是否已赋值
                     * 
                     */
                    bool TemplateSourceHasBeenSet() const;

                    /**
                     * 获取Application information on Application Performance Monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApmServiceList Application information on Application Performance Monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApmServiceInfo> GetApmServiceList() const;

                    /**
                     * 设置Application information on Application Performance Monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apmServiceList Application information on Application Performance Monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApmServiceList(const std::vector<ApmServiceInfo>& _apmServiceList);

                    /**
                     * 判断参数 ApmServiceList 是否已赋值
                     * @return ApmServiceList 是否已赋值
                     * 
                     */
                    bool ApmServiceListHasBeenSet() const;

                    /**
                     * 获取Alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlarmPolicy Alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicy() const;

                    /**
                     * 设置Alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alarmPolicy Alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlarmPolicy(const std::vector<std::string>& _alarmPolicy);

                    /**
                     * 判断参数 AlarmPolicy 是否已赋值
                     * @return AlarmPolicy 是否已赋值
                     * 
                     */
                    bool AlarmPolicyHasBeenSet() const;

                    /**
                     * 获取Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyDealType Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPolicyDealType() const;

                    /**
                     * 设置Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyDealType Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyDealType(const int64_t& _policyDealType);

                    /**
                     * 判断参数 PolicyDealType 是否已赋值
                     * @return PolicyDealType 是否已赋值
                     * 
                     */
                    bool PolicyDealTypeHasBeenSet() const;

                private:

                    /**
                     * Template library ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Template library name
                     */
                    std::string m_templateTitle;
                    bool m_templateTitleHasBeenSet;

                    /**
                     * Template library description
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * Custom tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_templateTag;
                    bool m_templateTagHasBeenSet;

                    /**
                     * Usage status. 1: in use; 2: not in use.
                     */
                    int64_t m_templateIsUsed;
                    bool m_templateIsUsedHasBeenSet;

                    /**
                     * Template library creation time
                     */
                    std::string m_templateCreateTime;
                    bool m_templateCreateTimeHasBeenSet;

                    /**
                     * Template library update time
                     */
                    std::string m_templateUpdateTime;
                    bool m_templateUpdateTimeHasBeenSet;

                    /**
                     * Template library mode. 1: manual execution; 2: automatic execution.
                     */
                    int64_t m_templateMode;
                    bool m_templateModeHasBeenSet;

                    /**
                     * Automatic pause duration. Unit: minutes.
                     */
                    int64_t m_templatePauseDuration;
                    bool m_templatePauseDurationHasBeenSet;

                    /**
                     * Main account that creates the experiment
                     */
                    std::string m_templateOwnerUin;
                    bool m_templateOwnerUinHasBeenSet;

                    /**
                     * Region ID
                     */
                    int64_t m_templateRegionId;
                    bool m_templateRegionIdHasBeenSet;

                    /**
                     * Action group
                     */
                    std::vector<TemplateGroup> m_templateGroups;
                    bool m_templateGroupsHasBeenSet;

                    /**
                     * Monitoring metrics
                     */
                    std::vector<TemplateMonitor> m_templateMonitors;
                    bool m_templateMonitorsHasBeenSet;

                    /**
                     * Guardrail monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TemplatePolicy m_templatePolicy;
                    bool m_templatePolicyHasBeenSet;

                    /**
                     * Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Template library source. 0: self-built; 1: recommended by experts.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_templateSource;
                    bool m_templateSourceHasBeenSet;

                    /**
                     * Application information on Application Performance Monitoring
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApmServiceInfo> m_apmServiceList;
                    bool m_apmServiceListHasBeenSet;

                    /**
                     * Alarm metrics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                    /**
                     * Guardrail processing method. 1: roll back sequentially; 2: pause experiment.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_policyDealType;
                    bool m_policyDealTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATE_H_
