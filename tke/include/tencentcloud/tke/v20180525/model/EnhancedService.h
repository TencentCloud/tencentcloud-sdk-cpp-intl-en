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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ENHANCEDSERVICE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ENHANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RunSecurityServiceEnabled.h>
#include <tencentcloud/tke/v20180525/model/RunMonitorServiceEnabled.h>
#include <tencentcloud/tke/v20180525/model/RunAutomationServiceEnabled.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Describes the configuration of enhanced services, such as Cloud Security and Cloud Monitor.
                */
                class EnhancedService : public AbstractModel
                {
                public:
                    EnhancedService();
                    ~EnhancedService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enables cloud security service. If this parameter is not specified, the cloud security service will be enabled by default.
                     * @return SecurityService Enables cloud security service. If this parameter is not specified, the cloud security service will be enabled by default.
                     */
                    RunSecurityServiceEnabled GetSecurityService() const;

                    /**
                     * 设置Enables cloud security service. If this parameter is not specified, the cloud security service will be enabled by default.
                     * @param SecurityService Enables cloud security service. If this parameter is not specified, the cloud security service will be enabled by default.
                     */
                    void SetSecurityService(const RunSecurityServiceEnabled& _securityService);

                    /**
                     * 判断参数 SecurityService 是否已赋值
                     * @return SecurityService 是否已赋值
                     */
                    bool SecurityServiceHasBeenSet() const;

                    /**
                     * 获取Enables cloud monitor service. If this parameter is not specified, the cloud monitor service will be enabled by default.
                     * @return MonitorService Enables cloud monitor service. If this parameter is not specified, the cloud monitor service will be enabled by default.
                     */
                    RunMonitorServiceEnabled GetMonitorService() const;

                    /**
                     * 设置Enables cloud monitor service. If this parameter is not specified, the cloud monitor service will be enabled by default.
                     * @param MonitorService Enables cloud monitor service. If this parameter is not specified, the cloud monitor service will be enabled by default.
                     */
                    void SetMonitorService(const RunMonitorServiceEnabled& _monitorService);

                    /**
                     * 判断参数 MonitorService 是否已赋值
                     * @return MonitorService 是否已赋值
                     */
                    bool MonitorServiceHasBeenSet() const;

                    /**
                     * 获取Whether to enable the TAT service. If this parameter is not specified, the TAT service is enabled for public images and disabled for other images by default.
                     * @return AutomationService Whether to enable the TAT service. If this parameter is not specified, the TAT service is enabled for public images and disabled for other images by default.
                     */
                    RunAutomationServiceEnabled GetAutomationService() const;

                    /**
                     * 设置Whether to enable the TAT service. If this parameter is not specified, the TAT service is enabled for public images and disabled for other images by default.
                     * @param AutomationService Whether to enable the TAT service. If this parameter is not specified, the TAT service is enabled for public images and disabled for other images by default.
                     */
                    void SetAutomationService(const RunAutomationServiceEnabled& _automationService);

                    /**
                     * 判断参数 AutomationService 是否已赋值
                     * @return AutomationService 是否已赋值
                     */
                    bool AutomationServiceHasBeenSet() const;

                private:

                    /**
                     * Enables cloud security service. If this parameter is not specified, the cloud security service will be enabled by default.
                     */
                    RunSecurityServiceEnabled m_securityService;
                    bool m_securityServiceHasBeenSet;

                    /**
                     * Enables cloud monitor service. If this parameter is not specified, the cloud monitor service will be enabled by default.
                     */
                    RunMonitorServiceEnabled m_monitorService;
                    bool m_monitorServiceHasBeenSet;

                    /**
                     * Whether to enable the TAT service. If this parameter is not specified, the TAT service is enabled for public images and disabled for other images by default.
                     */
                    RunAutomationServiceEnabled m_automationService;
                    bool m_automationServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ENHANCEDSERVICE_H_
