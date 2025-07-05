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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DOWNLOADL7LOGSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DOWNLOADL7LOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DownloadL7Logs request structure.
                */
                class DownloadL7LogsRequest : public AbstractModel
                {
                public:
                    DownloadL7LogsRequest();
                    ~DownloadL7LogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time.
                     * @return StartTime The start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
                     * @param _startTime The start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time.
                     * @return EndTime The end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time.
                     * @param _endTime The end time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取ZoneId set. This parameter is required.
                     * @return ZoneIds ZoneId set. This parameter is required.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置ZoneId set. This parameter is required.
                     * @param _zoneIds ZoneId set. This parameter is required.
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * @return Domains List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * @param _domains List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Limit on paginated queries. Default value: 20. Maximum value: 300.
                     * @return Limit Limit on paginated queries. Default value: 20. Maximum value: 300.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: 20. Maximum value: 300.
                     * @param _limit Limit on paginated queries. Default value: 20. Maximum value: 300.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The page offset. Default value: 0.
                     * @return Offset The page offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0.
                     * @param _offset The page offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * The start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * ZoneId set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * List of subdomain names to be queried. All subdomain names will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Limit on paginated queries. Default value: 20. Maximum value: 300.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DOWNLOADL7LOGSREQUEST_H_
