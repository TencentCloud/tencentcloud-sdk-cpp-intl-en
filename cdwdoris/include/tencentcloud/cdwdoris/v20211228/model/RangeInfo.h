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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RANGEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RANGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Information of Range type partition
                */
                class RangeInfo : public AbstractModel
                {
                public:
                    RangeInfo();
                    ~RangeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Range partition type:
●FIXED: Define the left closed and right open interval of the partition.
●LESS THAN: Only define the upper bound of the partition.
●BATCH RANGE: Batch create RANGE partitions of numeric and time types, define the left closed and right open intervals of the partitions, and set the step size.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RangeType Range partition type:
●FIXED: Define the left closed and right open interval of the partition.
●LESS THAN: Only define the upper bound of the partition.
●BATCH RANGE: Batch create RANGE partitions of numeric and time types, define the left closed and right open intervals of the partitions, and set the step size.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRangeType() const;

                    /**
                     * 设置Range partition type:
●FIXED: Define the left closed and right open interval of the partition.
●LESS THAN: Only define the upper bound of the partition.
●BATCH RANGE: Batch create RANGE partitions of numeric and time types, define the left closed and right open intervals of the partitions, and set the step size.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rangeType Range partition type:
●FIXED: Define the left closed and right open interval of the partition.
●LESS THAN: Only define the upper bound of the partition.
●BATCH RANGE: Batch create RANGE partitions of numeric and time types, define the left closed and right open intervals of the partitions, and set the step size.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRangeType(const std::string& _rangeType);

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取Partition name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PartitionName Partition name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置Partition name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitionName Partition name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取The left-closed interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Left The left-closed interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLeft() const;

                    /**
                     * 设置The left-closed interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _left The left-closed interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLeft(const std::string& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取The right open interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Right The right open interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRight() const;

                    /**
                     * 设置The right open interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _right The right open interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRight(const std::string& _right);

                    /**
                     * 判断参数 Right 是否已赋值
                     * @return Right 是否已赋值
                     * 
                     */
                    bool RightHasBeenSet() const;

                    /**
                     * 获取The upper bound of each partition column when RangeType is LESS THAN

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Max The upper bound of each partition column when RangeType is LESS THAN

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置The upper bound of each partition column when RangeType is LESS THAN

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _max The upper bound of each partition column when RangeType is LESS THAN

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取RangeType is the step size of BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepLength RangeType is the step size of BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStepLength() const;

                    /**
                     * 设置RangeType is the step size of BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepLength RangeType is the step size of BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepLength(const int64_t& _stepLength);

                    /**
                     * 判断参数 StepLength 是否已赋值
                     * @return StepLength 是否已赋值
                     * 
                     */
                    bool StepLengthHasBeenSet() const;

                    /**
                     * 获取Fill it in when RangeType is BATCH RANGE or automatic partitioning. It indicates the step size unit when the partition column is of time type.
●YEAR: year
●MONTH: month
●WEEK: week
●DAY: day

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Unit Fill it in when RangeType is BATCH RANGE or automatic partitioning. It indicates the step size unit when the partition column is of time type.
●YEAR: year
●MONTH: month
●WEEK: week
●DAY: day

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Fill it in when RangeType is BATCH RANGE or automatic partitioning. It indicates the step size unit when the partition column is of time type.
●YEAR: year
●MONTH: month
●WEEK: week
●DAY: day

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unit Fill it in when RangeType is BATCH RANGE or automatic partitioning. It indicates the step size unit when the partition column is of time type.
●YEAR: year
●MONTH: month
●WEEK: week
●DAY: day

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * Range partition type:
●FIXED: Define the left closed and right open interval of the partition.
●LESS THAN: Only define the upper bound of the partition.
●BATCH RANGE: Batch create RANGE partitions of numeric and time types, define the left closed and right open intervals of the partitions, and set the step size.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * Partition name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * The left-closed interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * The right open interval of each partition column when RangeType is FIXED or BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_right;
                    bool m_rightHasBeenSet;

                    /**
                     * The upper bound of each partition column when RangeType is LESS THAN

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * RangeType is the step size of BATCH RANGE

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_stepLength;
                    bool m_stepLengthHasBeenSet;

                    /**
                     * Fill it in when RangeType is BATCH RANGE or automatic partitioning. It indicates the step size unit when the partition column is of time type.
●YEAR: year
●MONTH: month
●WEEK: week
●DAY: day

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RANGEINFO_H_
