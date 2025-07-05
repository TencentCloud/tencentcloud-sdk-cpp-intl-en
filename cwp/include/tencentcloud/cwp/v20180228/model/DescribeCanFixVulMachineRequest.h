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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANFIXVULMACHINEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANFIXVULMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeCanFixVulMachine request structure.
                */
                class DescribeCanFixVulMachineRequest : public AbstractModel
                {
                public:
                    DescribeCanFixVulMachineRequest();
                    ~DescribeCanFixVulMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability IDs
                     * @return VulIds Vulnerability IDs
                     * 
                     */
                    std::vector<uint64_t> GetVulIds() const;

                    /**
                     * 设置Vulnerability IDs
                     * @param _vulIds Vulnerability IDs
                     * 
                     */
                    void SetVulIds(const std::vector<uint64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取Hosts requiring fixing. This parameter has an AND relationship with VulIds.
                     * @return Quuids Hosts requiring fixing. This parameter has an AND relationship with VulIds.
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Hosts requiring fixing. This parameter has an AND relationship with VulIds.
                     * @param _quuids Hosts requiring fixing. This parameter has an AND relationship with VulIds.
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * Vulnerability IDs
                     */
                    std::vector<uint64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * Hosts requiring fixing. This parameter has an AND relationship with VulIds.
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANFIXVULMACHINEREQUEST_H_
