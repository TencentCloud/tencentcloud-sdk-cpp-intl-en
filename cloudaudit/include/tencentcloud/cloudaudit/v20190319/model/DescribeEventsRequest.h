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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/LookupAttribute.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * DescribeEvents request structure.
                */
                class DescribeEventsRequest : public AbstractModel
                {
                public:
                    DescribeEventsRequest();
                    ~DescribeEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start timestamp in seconds (cannot be 90 days after the current time).
                     * @return StartTime Start timestamp in seconds (cannot be 90 days after the current time).
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp in seconds (cannot be 90 days after the current time).
                     * @param StartTime Start timestamp in seconds (cannot be 90 days after the current time).
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp in seconds (the time range for query is less than 30 days).
                     * @return EndTime End timestamp in seconds (the time range for query is less than 30 days).
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End timestamp in seconds (the time range for query is less than 30 days).
                     * @param EndTime End timestamp in seconds (the time range for query is less than 30 days).
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Credential for viewing more logs.
                     * @return NextToken Credential for viewing more logs.
                     */
                    uint64_t GetNextToken() const;

                    /**
                     * 设置Credential for viewing more logs.
                     * @param NextToken Credential for viewing more logs.
                     */
                    void SetNextToken(const uint64_t& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Max number of returned logs (up to 50).
                     * @return MaxResults Max number of returned logs (up to 50).
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Max number of returned logs (up to 50).
                     * @param MaxResults Max number of returned logs (up to 50).
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Search condition. Valid values: `RequestId`, `EventName`, `ActionType` (write/read), `PrincipalId` (sub-account), `ResourceType`, `ResourceName`, `AccessKeyId`, `SensitiveAction`, `ApiErrorCode`, `CamErrorCode`, and `Tags` (Format of AttributeValue: [{"key":"*","value":"*"}])
                     * @return LookupAttributes Search condition. Valid values: `RequestId`, `EventName`, `ActionType` (write/read), `PrincipalId` (sub-account), `ResourceType`, `ResourceName`, `AccessKeyId`, `SensitiveAction`, `ApiErrorCode`, `CamErrorCode`, and `Tags` (Format of AttributeValue: [{"key":"*","value":"*"}])
                     */
                    std::vector<LookupAttribute> GetLookupAttributes() const;

                    /**
                     * 设置Search condition. Valid values: `RequestId`, `EventName`, `ActionType` (write/read), `PrincipalId` (sub-account), `ResourceType`, `ResourceName`, `AccessKeyId`, `SensitiveAction`, `ApiErrorCode`, `CamErrorCode`, and `Tags` (Format of AttributeValue: [{"key":"*","value":"*"}])
                     * @param LookupAttributes Search condition. Valid values: `RequestId`, `EventName`, `ActionType` (write/read), `PrincipalId` (sub-account), `ResourceType`, `ResourceName`, `AccessKeyId`, `SensitiveAction`, `ApiErrorCode`, `CamErrorCode`, and `Tags` (Format of AttributeValue: [{"key":"*","value":"*"}])
                     */
                    void SetLookupAttributes(const std::vector<LookupAttribute>& _lookupAttributes);

                    /**
                     * 判断参数 LookupAttributes 是否已赋值
                     * @return LookupAttributes 是否已赋值
                     */
                    bool LookupAttributesHasBeenSet() const;

                    /**
                     * 获取Whether to return the IP location. `1`: yes, `0`: no.
                     * @return IsReturnLocation Whether to return the IP location. `1`: yes, `0`: no.
                     */
                    uint64_t GetIsReturnLocation() const;

                    /**
                     * 设置Whether to return the IP location. `1`: yes, `0`: no.
                     * @param IsReturnLocation Whether to return the IP location. `1`: yes, `0`: no.
                     */
                    void SetIsReturnLocation(const uint64_t& _isReturnLocation);

                    /**
                     * 判断参数 IsReturnLocation 是否已赋值
                     * @return IsReturnLocation 是否已赋值
                     */
                    bool IsReturnLocationHasBeenSet() const;

                private:

                    /**
                     * Start timestamp in seconds (cannot be 90 days after the current time).
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp in seconds (the time range for query is less than 30 days).
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Credential for viewing more logs.
                     */
                    uint64_t m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Max number of returned logs (up to 50).
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Search condition. Valid values: `RequestId`, `EventName`, `ActionType` (write/read), `PrincipalId` (sub-account), `ResourceType`, `ResourceName`, `AccessKeyId`, `SensitiveAction`, `ApiErrorCode`, `CamErrorCode`, and `Tags` (Format of AttributeValue: [{"key":"*","value":"*"}])
                     */
                    std::vector<LookupAttribute> m_lookupAttributes;
                    bool m_lookupAttributesHasBeenSet;

                    /**
                     * Whether to return the IP location. `1`: yes, `0`: no.
                     */
                    uint64_t m_isReturnLocation;
                    bool m_isReturnLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSREQUEST_H_
