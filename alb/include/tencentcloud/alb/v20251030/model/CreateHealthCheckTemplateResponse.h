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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATERESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATERESPONSE_H_

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
                * CreateHealthCheckTemplate response structure.
                */
                class CreateHealthCheckTemplateResponse : public AbstractModel
                {
                public:
                    CreateHealthCheckTemplateResponse();
                    ~CreateHealthCheckTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Health check template ID. The format is `hct-` followed by alphanumeric characters. All APIs (create, query, modify, delete) use the `hct-` prefix.
                     * @return HealthCheckTemplateId Health check template ID. The format is `hct-` followed by alphanumeric characters. All APIs (create, query, modify, delete) use the `hct-` prefix.
                     * 
                     */
                    std::string GetHealthCheckTemplateId() const;

                    /**
                     * 判断参数 HealthCheckTemplateId 是否已赋值
                     * @return HealthCheckTemplateId 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateIdHasBeenSet() const;

                private:

                    /**
                     * Health check template ID. The format is `hct-` followed by alphanumeric characters. All APIs (create, query, modify, delete) use the `hct-` prefix.
                     */
                    std::string m_healthCheckTemplateId;
                    bool m_healthCheckTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATERESPONSE_H_
