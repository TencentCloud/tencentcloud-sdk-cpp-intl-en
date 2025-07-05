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
                * LookUpEvents request structure.
                */
                class LookUpEventsRequest : public AbstractModel
                {
                public:
                    LookUpEventsRequest();
                    ~LookUpEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Search criteria
                     * @return LookupAttributes Search criteria
                     * 
                     */
                    std::vector<LookupAttribute> GetLookupAttributes() const;

                    /**
                     * 设置Search criteria
                     * @param _lookupAttributes Search criteria
                     * 
                     */
                    void SetLookupAttributes(const std::vector<LookupAttribute>& _lookupAttributes);

                    /**
                     * 判断参数 LookupAttributes 是否已赋值
                     * @return LookupAttributes 是否已赋值
                     * 
                     */
                    bool LookupAttributesHasBeenSet() const;

                    /**
                     * 获取Credential for viewing more logs
                     * @return NextToken Credential for viewing more logs
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Credential for viewing more logs
                     * @param _nextToken Credential for viewing more logs
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Maximum number of logs to be returned
                     * @return MaxResults Maximum number of logs to be returned
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置Maximum number of logs to be returned
                     * @param _maxResults Maximum number of logs to be returned
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取CloudAudit mode. Valid values: standard, quick. Default value: standard
                     * @return Mode CloudAudit mode. Valid values: standard, quick. Default value: standard
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置CloudAudit mode. Valid values: standard, quick. Default value: standard
                     * @param _mode CloudAudit mode. Valid values: standard, quick. Default value: standard
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Search criteria
                     */
                    std::vector<LookupAttribute> m_lookupAttributes;
                    bool m_lookupAttributesHasBeenSet;

                    /**
                     * Credential for viewing more logs
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Maximum number of logs to be returned
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * CloudAudit mode. Valid values: standard, quick. Default value: standard
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSREQUEST_H_
