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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ENHANCEDSERVICE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ENHANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RunSecurityServiceEnabled.h>
#include <tencentcloud/as/v20180419/model/RunMonitorServiceEnabled.h>
#include <tencentcloud/as/v20180419/model/RunAutomationServiceEnabled.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * This describes the conditions of enhancement services for the instance and their settings, such as the Agent of Cloud Security or Cloud Monitor.
                */
                class EnhancedService : public AbstractModel
                {
                public:
                    EnhancedService();
                    ~EnhancedService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enables the Cloud Security service. If this parameter is not specified, the Cloud Security service will be enabled by default.
                     * @return SecurityService Enables the Cloud Security service. If this parameter is not specified, the Cloud Security service will be enabled by default.
                     */
                    RunSecurityServiceEnabled GetSecurityService() const;

                    /**
                     * 设置Enables the Cloud Security service. If this parameter is not specified, the Cloud Security service will be enabled by default.
                     * @param SecurityService Enables the Cloud Security service. If this parameter is not specified, the Cloud Security service will be enabled by default.
                     */
                    void SetSecurityService(const RunSecurityServiceEnabled& _securityService);

                    /**
                     * 判断参数 SecurityService 是否已赋值
                     * @return SecurityService 是否已赋值
                     */
                    bool SecurityServiceHasBeenSet() const;

                    /**
                     * 获取Enables the Cloud Monitor service. If this parameter is not specified, the Cloud Monitor service will be enabled by default.
                     * @return MonitorService Enables the Cloud Monitor service. If this parameter is not specified, the Cloud Monitor service will be enabled by default.
                     */
                    RunMonitorServiceEnabled GetMonitorService() const;

                    /**
                     * 设置Enables the Cloud Monitor service. If this parameter is not specified, the Cloud Monitor service will be enabled by default.
                     * @param MonitorService Enables the Cloud Monitor service. If this parameter is not specified, the Cloud Monitor service will be enabled by default.
                     */
                    void SetMonitorService(const RunMonitorServiceEnabled& _monitorService);

                    /**
                     * 判断参数 MonitorService 是否已赋值
                     * @return MonitorService 是否已赋值
                     */
                    bool MonitorServiceHasBeenSet() const;

                    /**
                     * 获取Deprecated parameter.
                     * @return AutomationService Deprecated parameter.
                     */
                    std::vector<RunAutomationServiceEnabled> GetAutomationService() const;

                    /**
                     * 设置Deprecated parameter.
                     * @param AutomationService Deprecated parameter.
                     */
                    void SetAutomationService(const std::vector<RunAutomationServiceEnabled>& _automationService);

                    /**
                     * 判断参数 AutomationService 是否已赋值
                     * @return AutomationService 是否已赋值
                     */
                    bool AutomationServiceHasBeenSet() const;

                    /**
                     * 获取
                     * @return AutomationToolsService 
                     */
                    RunAutomationServiceEnabled GetAutomationToolsService() const;

                    /**
                     * 设置
                     * @param AutomationToolsService 
                     */
                    void SetAutomationToolsService(const RunAutomationServiceEnabled& _automationToolsService);

                    /**
                     * 判断参数 AutomationToolsService 是否已赋值
                     * @return AutomationToolsService 是否已赋值
                     */
                    bool AutomationToolsServiceHasBeenSet() const;

                private:

                    /**
                     * Enables the Cloud Security service. If this parameter is not specified, the Cloud Security service will be enabled by default.
                     */
                    RunSecurityServiceEnabled m_securityService;
                    bool m_securityServiceHasBeenSet;

                    /**
                     * Enables the Cloud Monitor service. If this parameter is not specified, the Cloud Monitor service will be enabled by default.
                     */
                    RunMonitorServiceEnabled m_monitorService;
                    bool m_monitorServiceHasBeenSet;

                    /**
                     * Deprecated parameter.
                     */
                    std::vector<RunAutomationServiceEnabled> m_automationService;
                    bool m_automationServiceHasBeenSet;

                    /**
                     * 
                     */
                    RunAutomationServiceEnabled m_automationToolsService;
                    bool m_automationToolsServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ENHANCEDSERVICE_H_
