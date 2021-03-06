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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSREQUEST_H_

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
                * Request parameter structure of LookUpEvents
                */
                class LookUpEventsRequest : public AbstractModel
                {
                public:
                    LookUpEventsRequest();
                    ~LookUpEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time
                     * @param EndTime End time
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param StartTime Start time
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Search criteria
                     * @return LookupAttributes Search criteria
                     */
                    std::vector<LookupAttribute> GetLookupAttributes() const;

                    /**
                     * 设置Search criteria
                     * @param LookupAttributes Search criteria
                     */
                    void SetLookupAttributes(const std::vector<LookupAttribute>& _lookupAttributes);

                    /**
                     * 判断参数 LookupAttributes 是否已赋值
                     * @return LookupAttributes 是否已赋值
                     */
                    bool LookupAttributesHasBeenSet() const;

                    /**
                     * 获取Maximum number of logs that can be returned
                     * @return MaxResults Maximum number of logs that can be returned
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置Maximum number of logs that can be returned
                     * @param MaxResults Maximum number of logs that can be returned
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Credential for viewing more logs
                     * @return NextToken Credential for viewing more logs
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Credential for viewing more logs
                     * @param NextToken Credential for viewing more logs
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * End time
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Start time
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Search criteria
                     */
                    std::vector<LookupAttribute> m_lookupAttributes;
                    bool m_lookupAttributesHasBeenSet;

                    /**
                     * Maximum number of logs that can be returned
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Credential for viewing more logs
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSREQUEST_H_
