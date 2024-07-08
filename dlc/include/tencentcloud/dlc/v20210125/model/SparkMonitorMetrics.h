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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKMONITORMETRICS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKMONITORMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Spark monitoring metrics
                */
                class SparkMonitorMetrics : public AbstractModel
                {
                public:
                    SparkMonitorMetrics();
                    ~SparkMonitorMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The shuffle data (in bytes) that overflows to COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShuffleWriteBytesCos The shuffle data (in bytes) that overflows to COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetShuffleWriteBytesCos() const;

                    /**
                     * 设置The shuffle data (in bytes) that overflows to COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shuffleWriteBytesCos The shuffle data (in bytes) that overflows to COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShuffleWriteBytesCos(const int64_t& _shuffleWriteBytesCos);

                    /**
                     * 判断参数 ShuffleWriteBytesCos 是否已赋值
                     * @return ShuffleWriteBytesCos 是否已赋值
                     * 
                     */
                    bool ShuffleWriteBytesCosHasBeenSet() const;

                    /**
                     * 获取The total shuffle data (in bytes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShuffleWriteBytesTotal The total shuffle data (in bytes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetShuffleWriteBytesTotal() const;

                    /**
                     * 设置The total shuffle data (in bytes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shuffleWriteBytesTotal The total shuffle data (in bytes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShuffleWriteBytesTotal(const int64_t& _shuffleWriteBytesTotal);

                    /**
                     * 判断参数 ShuffleWriteBytesTotal 是否已赋值
                     * @return ShuffleWriteBytesTotal 是否已赋值
                     * 
                     */
                    bool ShuffleWriteBytesTotalHasBeenSet() const;

                private:

                    /**
                     * The shuffle data (in bytes) that overflows to COS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_shuffleWriteBytesCos;
                    bool m_shuffleWriteBytesCosHasBeenSet;

                    /**
                     * The total shuffle data (in bytes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_shuffleWriteBytesTotal;
                    bool m_shuffleWriteBytesTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKMONITORMETRICS_H_
