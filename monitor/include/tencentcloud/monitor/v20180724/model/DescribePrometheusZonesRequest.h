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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSZONESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusZones request structure.
                */
                class DescribePrometheusZonesRequest : public AbstractModel
                {
                public:
                    DescribePrometheusZonesRequest();
                    ~DescribePrometheusZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Region ID. You only need to specify the value of either `RegionId` or `RegionName`.
                     * @return RegionId Region ID. You only need to specify the value of either `RegionId` or `RegionName`.
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID. You only need to specify the value of either `RegionId` or `RegionName`.
                     * @param RegionId Region ID. You only need to specify the value of either `RegionId` or `RegionName`.
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region name. You only need to specify the value of either `RegionId` or `RegionName`.
                     * @return RegionName Region name. You only need to specify the value of either `RegionId` or `RegionName`.
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name. You only need to specify the value of either `RegionId` or `RegionName`.
                     * @param RegionName Region name. You only need to specify the value of either `RegionId` or `RegionName`.
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * Region ID. You only need to specify the value of either `RegionId` or `RegionName`.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region name. You only need to specify the value of either `RegionId` or `RegionName`.
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSZONESREQUEST_H_
