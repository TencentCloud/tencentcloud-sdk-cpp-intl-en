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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBETAGSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBETAGSREQUEST_H_

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
                * DescribeTags request structure.
                */
                class DescribeTagsRequest : public AbstractModel
                {
                public:
                    DescribeTagsRequest();
                    ~DescribeTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM instance type.
<li>CVM: CVM</li>
<li>BM: CPM</li>
                     * @return MachineType CVM instance type.
<li>CVM: CVM</li>
<li>BM: CPM</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置CVM instance type.
<li>CVM: CVM</li>
<li>BM: CPM</li>
                     * @param _machineType CVM instance type.
<li>CVM: CVM</li>
<li>BM: CPM</li>
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
                     * 获取Server region, such as `ap-guangzhou` and `ap-shanghai`
                     * @return MachineRegion Server region, such as `ap-guangzhou` and `ap-shanghai`
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置Server region, such as `ap-guangzhou` and `ap-shanghai`
                     * @param _machineRegion Server region, such as `ap-guangzhou` and `ap-shanghai`
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
                     * CVM instance type.
<li>CVM: CVM</li>
<li>BM: CPM</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Server region, such as `ap-guangzhou` and `ap-shanghai`
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBETAGSREQUEST_H_
