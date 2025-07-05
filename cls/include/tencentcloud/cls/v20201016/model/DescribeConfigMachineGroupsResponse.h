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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGMACHINEGROUPSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGMACHINEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineGroupInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeConfigMachineGroups response structure.
                */
                class DescribeConfigMachineGroupsResponse : public AbstractModel
                {
                public:
                    DescribeConfigMachineGroupsResponse();
                    ~DescribeConfigMachineGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of machine groups bound to the collection rule configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MachineGroups List of machine groups bound to the collection rule configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MachineGroupInfo> GetMachineGroups() const;

                    /**
                     * 判断参数 MachineGroups 是否已赋值
                     * @return MachineGroups 是否已赋值
                     * 
                     */
                    bool MachineGroupsHasBeenSet() const;

                private:

                    /**
                     * List of machine groups bound to the collection rule configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<MachineGroupInfo> m_machineGroups;
                    bool m_machineGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGMACHINEGROUPSRESPONSE_H_
