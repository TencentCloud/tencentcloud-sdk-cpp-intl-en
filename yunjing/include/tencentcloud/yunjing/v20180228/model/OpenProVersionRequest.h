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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPROVERSIONREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPROVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * OpenProVersion request structure.
                */
                class OpenProVersionRequest : public AbstractModel
                {
                public:
                    OpenProVersionRequest();
                    ~OpenProVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Server type.
<li>CVM: CVM</li>
<li>BM: BM</li>
                     * @return MachineType Server type.
<li>CVM: CVM</li>
<li>BM: BM</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Server type.
<li>CVM: CVM</li>
<li>BM: BM</li>
                     * @param _machineType Server type.
<li>CVM: CVM</li>
<li>BM: BM</li>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Server region
Examples: ap-guangzhou, ap-shanghai
                     * @return MachineRegion Server region
Examples: ap-guangzhou, ap-shanghai
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置Server region
Examples: ap-guangzhou, ap-shanghai
                     * @param _machineRegion Server region
Examples: ap-guangzhou, ap-shanghai
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取Server `Uuid` array.
`InstanceId` for BM or `Uuid` for CVM
                     * @return Quuids Server `Uuid` array.
`InstanceId` for BM or `Uuid` for CVM
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Server `Uuid` array.
`InstanceId` for BM or `Uuid` for CVM
                     * @param _quuids Server `Uuid` array.
`InstanceId` for BM or `Uuid` for CVM
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取Event ID.
                     * @return ActivityId Event ID.
                     * 
                     */
                    uint64_t GetActivityId() const;

                    /**
                     * 设置Event ID.
                     * @param _activityId Event ID.
                     * 
                     */
                    void SetActivityId(const uint64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                private:

                    /**
                     * Server type.
<li>CVM: CVM</li>
<li>BM: BM</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Server region
Examples: ap-guangzhou, ap-shanghai
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * Server `Uuid` array.
`InstanceId` for BM or `Uuid` for CVM
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * Event ID.
                     */
                    uint64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPROVERSIONREQUEST_H_
