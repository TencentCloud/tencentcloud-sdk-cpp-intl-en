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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DifferenceDetail.h>
#include <tencentcloud/dts/v20211206/model/SkippedDetail.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Data consistency check details
                */
                class CompareDetailInfo : public AbstractModel
                {
                public:
                    CompareDetailInfo();
                    ~CompareDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Difference Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DifferenceDetail GetDifference() const;

                    /**
                     * 设置Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Difference Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDifference(const DifferenceDetail& _difference);

                    /**
                     * 判断参数 Difference 是否已赋值
                     * @return Difference 是否已赋值
                     */
                    bool DifferenceHasBeenSet() const;

                    /**
                     * 获取Details of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Skipped Details of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SkippedDetail GetSkipped() const;

                    /**
                     * 设置Details of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Skipped Details of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSkipped(const SkippedDetail& _skipped);

                    /**
                     * 判断参数 Skipped 是否已赋值
                     * @return Skipped 是否已赋值
                     */
                    bool SkippedHasBeenSet() const;

                private:

                    /**
                     * Details of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DifferenceDetail m_difference;
                    bool m_differenceHasBeenSet;

                    /**
                     * Details of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SkippedDetail m_skipped;
                    bool m_skippedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREDETAILINFO_H_
