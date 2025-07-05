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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATREQUEST_H_

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
                * DescribeGeneralStat request structure.
                */
                class DescribeGeneralStatRequest : public AbstractModel
                {
                public:
                    DescribeGeneralStatRequest();
                    ~DescribeGeneralStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM type
<li>CVM: Indicates Tencent CVM.</li>
<li>BM: indicates Blackstone physical machine</li>
<li>ECM: indicates edge computing server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
                     * @return MachineType CVM type
<li>CVM: Indicates Tencent CVM.</li>
<li>BM: indicates Blackstone physical machine</li>
<li>ECM: indicates edge computing server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置CVM type
<li>CVM: Indicates Tencent CVM.</li>
<li>BM: indicates Blackstone physical machine</li>
<li>ECM: indicates edge computing server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
                     * @param _machineType CVM type
<li>CVM: Indicates Tencent CVM.</li>
<li>BM: indicates Blackstone physical machine</li>
<li>ECM: indicates edge computing server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
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
                     * 获取Machine region. Example: ap-guangzhou, ap-shanghai
                     * @return MachineRegion Machine region. Example: ap-guangzhou, ap-shanghai
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置Machine region. Example: ap-guangzhou, ap-shanghai
                     * @param _machineRegion Machine region. Example: ap-guangzhou, ap-shanghai
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                private:

                    /**
                     * CVM type
<li>CVM: Indicates Tencent CVM.</li>
<li>BM: indicates Blackstone physical machine</li>
<li>ECM: indicates edge computing server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Machine region. Example: ap-guangzhou, ap-shanghai
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATREQUEST_H_
