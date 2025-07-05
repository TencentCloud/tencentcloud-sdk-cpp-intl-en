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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeStaffStatusMetrics request structure.
                */
                class DescribeStaffStatusMetricsRequest : public AbstractModel
                {
                public:
                    DescribeStaffStatusMetricsRequest();
                    ~DescribeStaffStatusMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Filter agent list. by default, do not pass all returned agent information.
                     * @return StaffList Filter agent list. by default, do not pass all returned agent information.
                     * 
                     */
                    std::vector<std::string> GetStaffList() const;

                    /**
                     * 设置Filter agent list. by default, do not pass all returned agent information.
                     * @param _staffList Filter agent list. by default, do not pass all returned agent information.
                     * 
                     */
                    void SetStaffList(const std::vector<std::string>& _staffList);

                    /**
                     * 判断参数 StaffList 是否已赋值
                     * @return StaffList 是否已赋值
                     * 
                     */
                    bool StaffListHasBeenSet() const;

                    /**
                     * 获取Filter skill group id list.
                     * @return GroupIdList Filter skill group id list.
                     * 
                     */
                    std::vector<int64_t> GetGroupIdList() const;

                    /**
                     * 设置Filter skill group id list.
                     * @param _groupIdList Filter skill group id list.
                     * 
                     */
                    void SetGroupIdList(const std::vector<int64_t>& _groupIdList);

                    /**
                     * 判断参数 GroupIdList 是否已赋值
                     * @return GroupIdList 是否已赋值
                     * 
                     */
                    bool GroupIdListHasBeenSet() const;

                    /**
                     * 获取Filter agent status list agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline . 
                     * @return StatusList Filter agent status list agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline . 
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置Filter agent status list agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline . 
                     * @param _statusList Filter agent status list agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline . 
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Filter agent list. by default, do not pass all returned agent information.
                     */
                    std::vector<std::string> m_staffList;
                    bool m_staffListHasBeenSet;

                    /**
                     * Filter skill group id list.
                     */
                    std::vector<int64_t> m_groupIdList;
                    bool m_groupIdListHasBeenSet;

                    /**
                     * Filter agent status list agent status free available | busy busy | rest on break | notready not ready | aftercallwork post-call adjustment | offline offline . 
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSREQUEST_H_
