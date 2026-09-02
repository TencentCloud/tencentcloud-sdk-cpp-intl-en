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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKTENDENCYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKTENDENCYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmRiskTendency request structure.
                */
                class DescribeDspmRiskTendencyRequest : public AbstractModel
                {
                public:
                    DescribeDspmRiskTendencyRequest();
                    ~DescribeDspmRiskTendencyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Start date
                     * @return StartDate Start date
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Start date
                     * @param _startDate Start date
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取End date
                     * @return EndDate End date
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End date
                     * @param _endDate End date
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Start date
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * End date
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKTENDENCYREQUEST_H_
