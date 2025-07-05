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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUSDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginHealthStatus.h>
#include <tencentcloud/teo/v20220901/model/CheckRegionHealthStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of origin server group health status.
                */
                class OriginGroupHealthStatusDetail : public AbstractModel
                {
                public:
                    OriginGroupHealthStatusDetail();
                    ~OriginGroupHealthStatusDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server group ID.
                     * @return OriginGroupId Origin server group ID.
                     * 
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置Origin server group ID.
                     * @param _originGroupId Origin server group ID.
                     * 
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     * 
                     */
                    bool OriginGroupIdHasBeenSet() const;

                    /**
                     * 获取The health status of each origin server in an origin server group, which is comprehensively decided based on the results of all detection regions. If more than half of the regions determine that the origin server is unhealthy, the corresponding status is unhealthy; otherwise, it is healthy.
                     * @return OriginHealthStatus The health status of each origin server in an origin server group, which is comprehensively decided based on the results of all detection regions. If more than half of the regions determine that the origin server is unhealthy, the corresponding status is unhealthy; otherwise, it is healthy.
                     * 
                     */
                    std::vector<OriginHealthStatus> GetOriginHealthStatus() const;

                    /**
                     * 设置The health status of each origin server in an origin server group, which is comprehensively decided based on the results of all detection regions. If more than half of the regions determine that the origin server is unhealthy, the corresponding status is unhealthy; otherwise, it is healthy.
                     * @param _originHealthStatus The health status of each origin server in an origin server group, which is comprehensively decided based on the results of all detection regions. If more than half of the regions determine that the origin server is unhealthy, the corresponding status is unhealthy; otherwise, it is healthy.
                     * 
                     */
                    void SetOriginHealthStatus(const std::vector<OriginHealthStatus>& _originHealthStatus);

                    /**
                     * 判断参数 OriginHealthStatus 是否已赋值
                     * @return OriginHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginHealthStatusHasBeenSet() const;

                    /**
                     * 获取Health status of origin servers in each health check region.
                     * @return CheckRegionHealthStatus Health status of origin servers in each health check region.
                     * 
                     */
                    std::vector<CheckRegionHealthStatus> GetCheckRegionHealthStatus() const;

                    /**
                     * 设置Health status of origin servers in each health check region.
                     * @param _checkRegionHealthStatus Health status of origin servers in each health check region.
                     * 
                     */
                    void SetCheckRegionHealthStatus(const std::vector<CheckRegionHealthStatus>& _checkRegionHealthStatus);

                    /**
                     * 判断参数 CheckRegionHealthStatus 是否已赋值
                     * @return CheckRegionHealthStatus 是否已赋值
                     * 
                     */
                    bool CheckRegionHealthStatusHasBeenSet() const;

                private:

                    /**
                     * Origin server group ID.
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                    /**
                     * The health status of each origin server in an origin server group, which is comprehensively decided based on the results of all detection regions. If more than half of the regions determine that the origin server is unhealthy, the corresponding status is unhealthy; otherwise, it is healthy.
                     */
                    std::vector<OriginHealthStatus> m_originHealthStatus;
                    bool m_originHealthStatusHasBeenSet;

                    /**
                     * Health status of origin servers in each health check region.
                     */
                    std::vector<CheckRegionHealthStatus> m_checkRegionHealthStatus;
                    bool m_checkRegionHealthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUSDETAIL_H_
