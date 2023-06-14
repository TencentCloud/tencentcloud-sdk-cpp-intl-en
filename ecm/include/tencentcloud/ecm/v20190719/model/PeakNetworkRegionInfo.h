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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORKREGIONINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORKREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PeakNetwork.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Peak network information by region
                */
                class PeakNetworkRegionInfo : public AbstractModel
                {
                public:
                    PeakNetworkRegionInfo();
                    ~PeakNetworkRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region information
                     * @return Region Region information
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information
                     * @param _region Region information
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Peak network set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PeakNetworkSet Peak network set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PeakNetwork> GetPeakNetworkSet() const;

                    /**
                     * 设置Peak network set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _peakNetworkSet Peak network set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeakNetworkSet(const std::vector<PeakNetwork>& _peakNetworkSet);

                    /**
                     * 判断参数 PeakNetworkSet 是否已赋值
                     * @return PeakNetworkSet 是否已赋值
                     * 
                     */
                    bool PeakNetworkSetHasBeenSet() const;

                private:

                    /**
                     * Region information
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Peak network set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PeakNetwork> m_peakNetworkSet;
                    bool m_peakNetworkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORKREGIONINFO_H_
