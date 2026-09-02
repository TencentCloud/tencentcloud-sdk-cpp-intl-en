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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPAYCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPAYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/HostAutoScaleConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyPayConfig request structure.
                */
                class ModifyPayConfigRequest : public AbstractModel
                {
                public:
                    ModifyPayConfigRequest();
                    ~ModifyPayConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Auto-scaling configuration for the CWP module
Supplemental description: if not passed, host configuration will not be modified. At least this module is required for the current period. Named module fields like ContainerConfig / AIAgentConfig can be added for subsequent scalability.
                     * @return HostConfig Auto-scaling configuration for the CWP module
Supplemental description: if not passed, host configuration will not be modified. At least this module is required for the current period. Named module fields like ContainerConfig / AIAgentConfig can be added for subsequent scalability.
                     * 
                     */
                    HostAutoScaleConfig GetHostConfig() const;

                    /**
                     * 设置Auto-scaling configuration for the CWP module
Supplemental description: if not passed, host configuration will not be modified. At least this module is required for the current period. Named module fields like ContainerConfig / AIAgentConfig can be added for subsequent scalability.
                     * @param _hostConfig Auto-scaling configuration for the CWP module
Supplemental description: if not passed, host configuration will not be modified. At least this module is required for the current period. Named module fields like ContainerConfig / AIAgentConfig can be added for subsequent scalability.
                     * 
                     */
                    void SetHostConfig(const HostAutoScaleConfig& _hostConfig);

                    /**
                     * 判断参数 HostConfig 是否已赋值
                     * @return HostConfig 是否已赋值
                     * 
                     */
                    bool HostConfigHasBeenSet() const;

                private:

                    /**
                     * Auto-scaling configuration for the CWP module
Supplemental description: if not passed, host configuration will not be modified. At least this module is required for the current period. Named module fields like ContainerConfig / AIAgentConfig can be added for subsequent scalability.
                     */
                    HostAutoScaleConfig m_hostConfig;
                    bool m_hostConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPAYCONFIGREQUEST_H_
