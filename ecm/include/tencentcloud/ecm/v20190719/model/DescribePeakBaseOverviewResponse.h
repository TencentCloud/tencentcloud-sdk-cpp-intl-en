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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PeakFamilyInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePeakBaseOverview response structure.
                */
                class DescribePeakBaseOverviewResponse : public AbstractModel
                {
                public:
                    DescribePeakBaseOverviewResponse();
                    ~DescribePeakBaseOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of basic peaks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PeakFamilyInfoSet List of basic peaks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PeakFamilyInfo> GetPeakFamilyInfoSet() const;

                    /**
                     * 判断参数 PeakFamilyInfoSet 是否已赋值
                     * @return PeakFamilyInfoSet 是否已赋值
                     * 
                     */
                    bool PeakFamilyInfoSetHasBeenSet() const;

                private:

                    /**
                     * List of basic peaks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PeakFamilyInfo> m_peakFamilyInfoSet;
                    bool m_peakFamilyInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWRESPONSE_H_
