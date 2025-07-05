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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_REGIONLISTDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_REGIONLISTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Details of the region list
                */
                class RegionListDetail : public AbstractModel
                {
                public:
                    RegionListDetail();
                    ~RegionListDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine type
CVM, Tencent Cloud Virtual Machine
LH, TencentCloud Lighthouse
ECM, Tencent Cloud Edge Computing Machine
BM, Tencent BM 1.0
Other, Other servers (non-Tencent Cloud)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineType Machine type
CVM, Tencent Cloud Virtual Machine
LH, TencentCloud Lighthouse
ECM, Tencent Cloud Edge Computing Machine
BM, Tencent BM 1.0
Other, Other servers (non-Tencent Cloud)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Machine type
CVM, Tencent Cloud Virtual Machine
LH, TencentCloud Lighthouse
ECM, Tencent Cloud Edge Computing Machine
BM, Tencent BM 1.0
Other, Other servers (non-Tencent Cloud)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineType Machine type
CVM, Tencent Cloud Virtual Machine
LH, TencentCloud Lighthouse
ECM, Tencent Cloud Edge Computing Machine
BM, Tencent BM 1.0
Other, Other servers (non-Tencent Cloud)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取0 Tencent Cloud
1 IDC
2 Alibaba Cloud
3 Huawei Cloud
4 Amazon
5 Microsoft
6 Google
7 Oracle
8 Digital Ocean
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudFrom 0 Tencent Cloud
1 IDC
2 Alibaba Cloud
3 Huawei Cloud
4 Amazon
5 Microsoft
6 Google
7 Oracle
8 Digital Ocean
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCloudFrom() const;

                    /**
                     * 设置0 Tencent Cloud
1 IDC
2 Alibaba Cloud
3 Huawei Cloud
4 Amazon
5 Microsoft
6 Google
7 Oracle
8 Digital Ocean
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudFrom 0 Tencent Cloud
1 IDC
2 Alibaba Cloud
3 Huawei Cloud
4 Amazon
5 Microsoft
6 Google
7 Oracle
8 Digital Ocean
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloudFrom(const uint64_t& _cloudFrom);

                    /**
                     * 判断参数 CloudFrom 是否已赋值
                     * @return CloudFrom 是否已赋值
                     * 
                     */
                    bool CloudFromHasBeenSet() const;

                    /**
                     * 获取List of regions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionList List of regions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RegionInfo> GetRegionList() const;

                    /**
                     * 设置List of regions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionList List of regions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionList(const std::vector<RegionInfo>& _regionList);

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * Machine type
CVM, Tencent Cloud Virtual Machine
LH, TencentCloud Lighthouse
ECM, Tencent Cloud Edge Computing Machine
BM, Tencent BM 1.0
Other, Other servers (non-Tencent Cloud)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 0 Tencent Cloud
1 IDC
2 Alibaba Cloud
3 Huawei Cloud
4 Amazon
5 Microsoft
6 Google
7 Oracle
8 Digital Ocean
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cloudFrom;
                    bool m_cloudFromHasBeenSet;

                    /**
                     * List of regions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RegionInfo> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_REGIONLISTDETAIL_H_
