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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKTEMPLATERESPONSE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/HealthCheckTemplate.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeHealthCheckTemplate response structure.
                */
                class DescribeHealthCheckTemplateResponse : public AbstractModel
                {
                public:
                    DescribeHealthCheckTemplateResponse();
                    ~DescribeHealthCheckTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Health check policy template
                     * @return HealthCheckTemplate Health check policy template
                     * 
                     */
                    HealthCheckTemplate GetHealthCheckTemplate() const;

                    /**
                     * 判断参数 HealthCheckTemplate 是否已赋值
                     * @return HealthCheckTemplate 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateHasBeenSet() const;

                private:

                    /**
                     * Health check policy template
                     */
                    HealthCheckTemplate m_healthCheckTemplate;
                    bool m_healthCheckTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKTEMPLATERESPONSE_H_
