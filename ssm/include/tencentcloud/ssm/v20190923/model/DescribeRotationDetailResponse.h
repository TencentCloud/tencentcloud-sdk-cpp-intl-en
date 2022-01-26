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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DescribeRotationDetail response structure.
                */
                class DescribeRotationDetailResponse : public AbstractModel
                {
                public:
                    DescribeRotationDetailResponse();
                    ~DescribeRotationDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable rotation. `true`: enabled; `false`: disabled.
                     * @return EnableRotation Whether to enable rotation. `true`: enabled; `false`: disabled.
                     */
                    bool GetEnableRotation() const;

                    /**
                     * 判断参数 EnableRotation 是否已赋值
                     * @return EnableRotation 是否已赋值
                     */
                    bool EnableRotationHasBeenSet() const;

                    /**
                     * 获取Rotation frequency in days. Default value: 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Frequency Rotation frequency in days. Default value: 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取Last rotation time, which is an explicitly visible time string in the format of 2006-01-02 15:04:05.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LatestRotateTime Last rotation time, which is an explicitly visible time string in the format of 2006-01-02 15:04:05.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLatestRotateTime() const;

                    /**
                     * 判断参数 LatestRotateTime 是否已赋值
                     * @return LatestRotateTime 是否已赋值
                     */
                    bool LatestRotateTimeHasBeenSet() const;

                    /**
                     * 获取Next rotation start time, which is an explicitly visible time string in the format of 2006-01-02 15:04:05.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NextRotateBeginTime Next rotation start time, which is an explicitly visible time string in the format of 2006-01-02 15:04:05.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNextRotateBeginTime() const;

                    /**
                     * 判断参数 NextRotateBeginTime 是否已赋值
                     * @return NextRotateBeginTime 是否已赋值
                     */
                    bool NextRotateBeginTimeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable rotation. `true`: enabled; `false`: disabled.
                     */
                    bool m_enableRotation;
                    bool m_enableRotationHasBeenSet;

                    /**
                     * Rotation frequency in days. Default value: 1 day.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Last rotation time, which is an explicitly visible time string in the format of 2006-01-02 15:04:05.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestRotateTime;
                    bool m_latestRotateTimeHasBeenSet;

                    /**
                     * Next rotation start time, which is an explicitly visible time string in the format of 2006-01-02 15:04:05.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nextRotateBeginTime;
                    bool m_nextRotateBeginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONDETAILRESPONSE_H_
