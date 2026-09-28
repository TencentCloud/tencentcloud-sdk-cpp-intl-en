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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETEHEALTHCHECKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETEHEALTHCHECKTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DeleteHealthCheckTemplates request structure.
                */
                class DeleteHealthCheckTemplatesRequest : public AbstractModel
                {
                public:
                    DeleteHealthCheckTemplatesRequest();
                    ~DeleteHealthCheckTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Health check template ID list. The ID format is `hct-` followed by alphanumeric characters.
                     * @return HealthCheckTemplateIds Health check template ID list. The ID format is `hct-` followed by alphanumeric characters.
                     * 
                     */
                    std::vector<std::string> GetHealthCheckTemplateIds() const;

                    /**
                     * 设置Health check template ID list. The ID format is `hct-` followed by alphanumeric characters.
                     * @param _healthCheckTemplateIds Health check template ID list. The ID format is `hct-` followed by alphanumeric characters.
                     * 
                     */
                    void SetHealthCheckTemplateIds(const std::vector<std::string>& _healthCheckTemplateIds);

                    /**
                     * 判断参数 HealthCheckTemplateIds 是否已赋值
                     * @return HealthCheckTemplateIds 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateIdsHasBeenSet() const;

                    /**
                     * 获取Whether to preview this request.
- **false** (default): Send a normal request to directly delete the template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the template to delete meet the requirements.
                     * @return DryRun Whether to preview this request.
- **false** (default): Send a normal request to directly delete the template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the template to delete meet the requirements.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to preview this request.
- **false** (default): Send a normal request to directly delete the template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the template to delete meet the requirements.
                     * @param _dryRun Whether to preview this request.
- **false** (default): Send a normal request to directly delete the template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the template to delete meet the requirements.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * Health check template ID list. The ID format is `hct-` followed by alphanumeric characters.
                     */
                    std::vector<std::string> m_healthCheckTemplateIds;
                    bool m_healthCheckTemplateIdsHasBeenSet;

                    /**
                     * Whether to preview this request.
- **false** (default): Send a normal request to directly delete the template.
- **true**: Send a preview request to check whether the parameters, format, and service limits of the template to delete meet the requirements.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETEHEALTHCHECKTEMPLATESREQUEST_H_
