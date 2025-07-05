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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ECMENHANCEDSERVICE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ECMENHANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ECMRunMonitorServiceEnabled.h>
#include <tencentcloud/tke/v20180525/model/ECMRunSecurityServiceEnabled.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ECM enhanced services
                */
                class ECMEnhancedService : public AbstractModel
                {
                public:
                    ECMEnhancedService();
                    ~ECMEnhancedService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether Cloud Monitoring is enabled
                     * @return SecurityService Whether Cloud Monitoring is enabled
                     * 
                     */
                    ECMRunMonitorServiceEnabled GetSecurityService() const;

                    /**
                     * 设置Whether Cloud Monitoring is enabled
                     * @param _securityService Whether Cloud Monitoring is enabled
                     * 
                     */
                    void SetSecurityService(const ECMRunMonitorServiceEnabled& _securityService);

                    /**
                     * 判断参数 SecurityService 是否已赋值
                     * @return SecurityService 是否已赋值
                     * 
                     */
                    bool SecurityServiceHasBeenSet() const;

                    /**
                     * 获取Whether Cloud Workload Protection is enabled
                     * @return MonitorService Whether Cloud Workload Protection is enabled
                     * 
                     */
                    ECMRunSecurityServiceEnabled GetMonitorService() const;

                    /**
                     * 设置Whether Cloud Workload Protection is enabled
                     * @param _monitorService Whether Cloud Workload Protection is enabled
                     * 
                     */
                    void SetMonitorService(const ECMRunSecurityServiceEnabled& _monitorService);

                    /**
                     * 判断参数 MonitorService 是否已赋值
                     * @return MonitorService 是否已赋值
                     * 
                     */
                    bool MonitorServiceHasBeenSet() const;

                private:

                    /**
                     * Whether Cloud Monitoring is enabled
                     */
                    ECMRunMonitorServiceEnabled m_securityService;
                    bool m_securityServiceHasBeenSet;

                    /**
                     * Whether Cloud Workload Protection is enabled
                     */
                    ECMRunSecurityServiceEnabled m_monitorService;
                    bool m_monitorServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ECMENHANCEDSERVICE_H_
