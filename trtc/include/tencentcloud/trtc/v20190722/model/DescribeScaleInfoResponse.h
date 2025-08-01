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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFORESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/ScaleInfomation.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeScaleInfo response structure.
                */
                class DescribeScaleInfoResponse : public AbstractModel
                {
                public:
                    DescribeScaleInfoResponse();
                    ~DescribeScaleInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of records returned.
                     * @return Total The number of records returned.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取The returned data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScaleList The returned data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ScaleInfomation> GetScaleList() const;

                    /**
                     * 判断参数 ScaleList 是否已赋值
                     * @return ScaleList 是否已赋值
                     * 
                     */
                    bool ScaleListHasBeenSet() const;

                private:

                    /**
                     * The number of records returned.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * The returned data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ScaleInfomation> m_scaleList;
                    bool m_scaleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBESCALEINFORESPONSE_H_
