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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONFIELDCONFIGLISTRESPONSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONFIELDCONFIGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/ActionFieldConfigResult.h>
#include <tencentcloud/cfg/v20210820/model/ResourceOffline.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeActionFieldConfigList response structure.
                */
                class DescribeActionFieldConfigListResponse : public AbstractModel
                {
                public:
                    DescribeActionFieldConfigListResponse();
                    ~DescribeActionFieldConfigListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of general filed configuration parameters
                     * @return Common List of general filed configuration parameters
                     * 
                     */
                    std::vector<ActionFieldConfigResult> GetCommon() const;

                    /**
                     * 判断参数 Common 是否已赋值
                     * @return Common 是否已赋值
                     * 
                     */
                    bool CommonHasBeenSet() const;

                    /**
                     * 获取List of action filed configuration parameters
                     * @return Results List of action filed configuration parameters
                     * 
                     */
                    std::vector<ActionFieldConfigResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取Information on the decommissioned resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceOffline Information on the decommissioned resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ResourceOffline> GetResourceOffline() const;

                    /**
                     * 判断参数 ResourceOffline 是否已赋值
                     * @return ResourceOffline 是否已赋值
                     * 
                     */
                    bool ResourceOfflineHasBeenSet() const;

                private:

                    /**
                     * List of general filed configuration parameters
                     */
                    std::vector<ActionFieldConfigResult> m_common;
                    bool m_commonHasBeenSet;

                    /**
                     * List of action filed configuration parameters
                     */
                    std::vector<ActionFieldConfigResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * Information on the decommissioned resource
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceOffline> m_resourceOffline;
                    bool m_resourceOfflineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONFIELDCONFIGLISTRESPONSE_H_
