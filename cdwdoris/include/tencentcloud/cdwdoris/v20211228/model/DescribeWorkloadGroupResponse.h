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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEWORKLOADGROUPRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEWORKLOADGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/WorkloadGroupConfig.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeWorkloadGroup response structure.
                */
                class DescribeWorkloadGroupResponse : public AbstractModel
                {
                public:
                    DescribeWorkloadGroupResponse();
                    ~DescribeWorkloadGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource group information
                     * @return WorkloadGroups Resource group information
                     * 
                     */
                    std::vector<WorkloadGroupConfig> GetWorkloadGroups() const;

                    /**
                     * 判断参数 WorkloadGroups 是否已赋值
                     * @return WorkloadGroups 是否已赋值
                     * 
                     */
                    bool WorkloadGroupsHasBeenSet() const;

                    /**
                     * 获取Whether to enable the resource group: open and close
                     * @return Status Whether to enable the resource group: open and close
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return ErrorMsg Error message
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * Resource group information
                     */
                    std::vector<WorkloadGroupConfig> m_workloadGroups;
                    bool m_workloadGroupsHasBeenSet;

                    /**
                     * Whether to enable the resource group: open and close
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEWORKLOADGROUPRESPONSE_H_
