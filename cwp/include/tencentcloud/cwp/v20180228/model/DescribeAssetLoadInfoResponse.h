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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETLOADINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETLOADINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetLoadSummary.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetLoadInfo response structure.
                */
                class DescribeAssetLoadInfoResponse : public AbstractModel
                {
                public:
                    DescribeAssetLoadInfoResponse();
                    ~DescribeAssetLoadInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取System load
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CpuLoad System load
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AssetLoadSummary GetCpuLoad() const;

                    /**
                     * 判断参数 CpuLoad 是否已赋值
                     * @return CpuLoad 是否已赋值
                     * 
                     */
                    bool CpuLoadHasBeenSet() const;

                    /**
                     * 获取Memory utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemLoad Memory utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AssetLoadSummary GetMemLoad() const;

                    /**
                     * 判断参数 MemLoad 是否已赋值
                     * @return MemLoad 是否已赋值
                     * 
                     */
                    bool MemLoadHasBeenSet() const;

                    /**
                     * 获取Hard disk utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskLoad Hard disk utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AssetLoadSummary GetDiskLoad() const;

                    /**
                     * 判断参数 DiskLoad 是否已赋值
                     * @return DiskLoad 是否已赋值
                     * 
                     */
                    bool DiskLoadHasBeenSet() const;

                private:

                    /**
                     * System load
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AssetLoadSummary m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * Memory utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AssetLoadSummary m_memLoad;
                    bool m_memLoadHasBeenSet;

                    /**
                     * Hard disk utilization
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AssetLoadSummary m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETLOADINFORESPONSE_H_
