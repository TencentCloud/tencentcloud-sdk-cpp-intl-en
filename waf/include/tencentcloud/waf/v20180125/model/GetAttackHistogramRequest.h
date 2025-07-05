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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKHISTOGRAMREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKHISTOGRAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * GetAttackHistogram request structure.
                */
                class GetAttackHistogramRequest : public AbstractModel
                {
                public:
                    GetAttackHistogramRequest();
                    ~GetAttackHistogramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queried domain: use all for all domains
                     * @return Domain Queried domain: use all for all domains
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Queried domain: use all for all domains
                     * @param _domain Queried domain: use all for all domains
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
                     * 获取Query start time
                     * @return StartTime Query start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time
                     * @param _startTime Query start time
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
                     * 获取Query end time
                     * @return EndTime Query end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time
                     * @param _endTime Query end time
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
                     * 获取Lucene syntax.
                     * @return QueryString Lucene syntax.
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置Lucene syntax.
                     * @param _queryString Lucene syntax.
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * Queried domain: use all for all domains
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Query start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Lucene syntax.
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKHISTOGRAMREQUEST_H_
