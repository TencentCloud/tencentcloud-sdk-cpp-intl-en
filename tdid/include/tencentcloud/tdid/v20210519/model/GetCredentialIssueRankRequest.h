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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUERANKREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUERANKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetCredentialIssueRank request structure.
                */
                class GetCredentialIssueRankRequest : public AbstractModel
                {
                public:
                    GetCredentialIssueRankRequest();
                    ~GetCredentialIssueRankRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start date (as early as 2021-4-23).
                     * @return StartTime The start date (as early as 2021-4-23).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start date (as early as 2021-4-23).
                     * @param _startTime The start date (as early as 2021-4-23).
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
                     * 获取The end date (as early as 2021-4-23).
                     * @return EndTime The end date (as early as 2021-4-23).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end date (as early as 2021-4-23).
                     * @param _endTime The end date (as early as 2021-4-23).
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
                     * 获取The network ID.
                     * @return ClusterId The network ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The network ID.
                     * @param _clusterId The network ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * The start date (as early as 2021-4-23).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end date (as early as 2021-4-23).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUERANKREQUEST_H_
