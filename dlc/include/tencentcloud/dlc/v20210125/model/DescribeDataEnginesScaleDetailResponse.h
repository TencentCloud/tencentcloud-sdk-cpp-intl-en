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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineScaleInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEnginesScaleDetail response structure.
                */
                class DescribeDataEnginesScaleDetailResponse : public AbstractModel
                {
                public:
                    DescribeDataEnginesScaleDetailResponse();
                    ~DescribeDataEnginesScaleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Details about the statistics of engine specifications
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scales Details about the statistics of engine specifications
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DataEngineScaleInfo> GetScales() const;

                    /**
                     * 判断参数 Scales 是否已赋值
                     * @return Scales 是否已赋值
                     * 
                     */
                    bool ScalesHasBeenSet() const;

                private:

                    /**
                     * Details about the statistics of engine specifications
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DataEngineScaleInfo> m_scales;
                    bool m_scalesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILRESPONSE_H_
