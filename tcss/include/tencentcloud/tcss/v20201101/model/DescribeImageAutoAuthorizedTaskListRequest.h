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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDTASKLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageAutoAuthorizedTaskList request structure.
                */
                class DescribeImageAutoAuthorizedTaskListRequest : public AbstractModel
                {
                public:
                    DescribeImageAutoAuthorizedTaskListRequest();
                    ~DescribeImageAutoAuthorizedTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param StartTime Start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param EndTime End time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Filter field
`Status` (licensing result). Valid values: `ALLSUCCSESS` (licensing succeeded); `PARTIALFAIL` (failed to license some images); `ALLFAIL` (failed to license all images).
Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * @return Filters Filter field
`Status` (licensing result). Valid values: `ALLSUCCSESS` (licensing succeeded); `PARTIALFAIL` (failed to license some images); `ALLFAIL` (failed to license all images).
Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter field
`Status` (licensing result). Valid values: `ALLSUCCSESS` (licensing succeeded); `PARTIALFAIL` (failed to license some images); `ALLFAIL` (failed to license all images).
Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * @param Filters Filter field
`Status` (licensing result). Valid values: `ALLSUCCSESS` (licensing succeeded); `PARTIALFAIL` (failed to license some images); `ALLFAIL` (failed to license all images).
Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @return Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @param Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param Offset Offset. Default value: `0`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Filter field
`Status` (licensing result). Valid values: `ALLSUCCSESS` (licensing succeeded); `PARTIALFAIL` (failed to license some images); `ALLFAIL` (failed to license all images).
Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDTASKLISTREQUEST_H_
