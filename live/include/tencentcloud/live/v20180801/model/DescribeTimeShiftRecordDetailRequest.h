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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTRECORDDETAILREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTRECORDDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeTimeShiftRecordDetail request structure.
                */
                class DescribeTimeShiftRecordDetailRequest : public AbstractModel
                {
                public:
                    DescribeTimeShiftRecordDetailRequest();
                    ~DescribeTimeShiftRecordDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The push domain.
                     * @return Domain The push domain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The push domain.
                     * @param _domain The push domain.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The push path.
                     * @return AppName The push path.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path.
                     * @param _appName The push path.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The stream name.
                     * @return StreamName The stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
                     * @param _streamName The stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The start time, which must be a Unix timestamp.
                     * @return StartTime The start time, which must be a Unix timestamp.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The start time, which must be a Unix timestamp.
                     * @param _startTime The start time, which must be a Unix timestamp.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time, which must be a Unix timestamp. 
                     * @return EndTime The end time, which must be a Unix timestamp. 
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The end time, which must be a Unix timestamp. 
                     * @param _endTime The end time, which must be a Unix timestamp. 
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The group the push domain belongs to. You don’t need to specify this parameter if the domain doesn’t belong to any group or the group name is an empty string.
                     * @return DomainGroup The group the push domain belongs to. You don’t need to specify this parameter if the domain doesn’t belong to any group or the group name is an empty string.
                     * 
                     */
                    std::string GetDomainGroup() const;

                    /**
                     * 设置The group the push domain belongs to. You don’t need to specify this parameter if the domain doesn’t belong to any group or the group name is an empty string.
                     * @param _domainGroup The group the push domain belongs to. You don’t need to specify this parameter if the domain doesn’t belong to any group or the group name is an empty string.
                     * 
                     */
                    void SetDomainGroup(const std::string& _domainGroup);

                    /**
                     * 判断参数 DomainGroup 是否已赋值
                     * @return DomainGroup 是否已赋值
                     * 
                     */
                    bool DomainGroupHasBeenSet() const;

                    /**
                     * 获取The transcoding template ID. You don’t need to specify this parameter if the transcoding template ID is `0`.
                     * @return TransCodeId The transcoding template ID. You don’t need to specify this parameter if the transcoding template ID is `0`.
                     * 
                     */
                    uint64_t GetTransCodeId() const;

                    /**
                     * 设置The transcoding template ID. You don’t need to specify this parameter if the transcoding template ID is `0`.
                     * @param _transCodeId The transcoding template ID. You don’t need to specify this parameter if the transcoding template ID is `0`.
                     * 
                     */
                    void SetTransCodeId(const uint64_t& _transCodeId);

                    /**
                     * 判断参数 TransCodeId 是否已赋值
                     * @return TransCodeId 是否已赋值
                     * 
                     */
                    bool TransCodeIdHasBeenSet() const;

                private:

                    /**
                     * The push domain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The start time, which must be a Unix timestamp.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time, which must be a Unix timestamp. 
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The group the push domain belongs to. You don’t need to specify this parameter if the domain doesn’t belong to any group or the group name is an empty string.
                     */
                    std::string m_domainGroup;
                    bool m_domainGroupHasBeenSet;

                    /**
                     * The transcoding template ID. You don’t need to specify this parameter if the transcoding template ID is `0`.
                     */
                    uint64_t m_transCodeId;
                    bool m_transCodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTRECORDDETAILREQUEST_H_
