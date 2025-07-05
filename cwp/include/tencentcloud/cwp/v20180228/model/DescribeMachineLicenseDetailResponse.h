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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINELICENSEDETAILRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINELICENSEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineLicenseDetail.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineLicenseDetail response structure.
                */
                class DescribeMachineLicenseDetailResponse : public AbstractModel
                {
                public:
                    DescribeMachineLicenseDetailResponse();
                    ~DescribeMachineLicenseDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineLicense Authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MachineLicenseDetail> GetMachineLicense() const;

                    /**
                     * 判断参数 MachineLicense 是否已赋值
                     * @return MachineLicense 是否已赋值
                     * 
                     */
                    bool MachineLicenseHasBeenSet() const;

                    /**
                     * 获取Total number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MachineLicenseDetail> m_machineLicense;
                    bool m_machineLicenseHasBeenSet;

                    /**
                     * Total number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINELICENSEDETAILRESPONSE_H_
