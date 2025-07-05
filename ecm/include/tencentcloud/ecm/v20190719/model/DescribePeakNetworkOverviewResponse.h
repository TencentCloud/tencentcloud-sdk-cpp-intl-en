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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKNETWORKOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKNETWORKOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PeakNetworkRegionInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePeakNetworkOverview response structure.
                */
                class DescribePeakNetworkOverviewResponse : public AbstractModel
                {
                public:
                    DescribePeakNetworkOverviewResponse();
                    ~DescribePeakNetworkOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of network peaks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PeakNetworkRegionSet Array of network peaks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PeakNetworkRegionInfo> GetPeakNetworkRegionSet() const;

                    /**
                     * 判断参数 PeakNetworkRegionSet 是否已赋值
                     * @return PeakNetworkRegionSet 是否已赋值
                     * 
                     */
                    bool PeakNetworkRegionSetHasBeenSet() const;

                private:

                    /**
                     * Array of network peaks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PeakNetworkRegionInfo> m_peakNetworkRegionSet;
                    bool m_peakNetworkRegionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKNETWORKOVERVIEWRESPONSE_H_
