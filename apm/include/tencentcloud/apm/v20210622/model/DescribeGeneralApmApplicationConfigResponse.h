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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALAPMAPPLICATIONCONFIGRESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALAPMAPPLICATIONCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmApplicationConfigView.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeGeneralApmApplicationConfig response structure.
                */
                class DescribeGeneralApmApplicationConfigResponse : public AbstractModel
                {
                public:
                    DescribeGeneralApmApplicationConfigResponse();
                    ~DescribeGeneralApmApplicationConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application configuration item.
                     * @return ApmApplicationConfigView Application configuration item.
                     * 
                     */
                    ApmApplicationConfigView GetApmApplicationConfigView() const;

                    /**
                     * 判断参数 ApmApplicationConfigView 是否已赋值
                     * @return ApmApplicationConfigView 是否已赋值
                     * 
                     */
                    bool ApmApplicationConfigViewHasBeenSet() const;

                private:

                    /**
                     * Application configuration item.
                     */
                    ApmApplicationConfigView m_apmApplicationConfigView;
                    bool m_apmApplicationConfigViewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALAPMAPPLICATIONCONFIGRESPONSE_H_
