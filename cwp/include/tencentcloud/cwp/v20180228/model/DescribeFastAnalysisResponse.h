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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/FieldValueRatioInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeFastAnalysis response structure.
                */
                class DescribeFastAnalysisResponse : public AbstractModel
                {
                public:
                    DescribeFastAnalysisResponse();
                    ~DescribeFastAnalysisResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistical data after analysis
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FieldValueRatioInfos Statistical data after analysis
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FieldValueRatioInfo> GetFieldValueRatioInfos() const;

                    /**
                     * 判断参数 FieldValueRatioInfos 是否已赋值
                     * @return FieldValueRatioInfos 是否已赋值
                     * 
                     */
                    bool FieldValueRatioInfosHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return TotalCount Total number
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
                     * Statistical data after analysis
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<FieldValueRatioInfo> m_fieldValueRatioInfos;
                    bool m_fieldValueRatioInfosHasBeenSet;

                    /**
                     * Total number
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISRESPONSE_H_
