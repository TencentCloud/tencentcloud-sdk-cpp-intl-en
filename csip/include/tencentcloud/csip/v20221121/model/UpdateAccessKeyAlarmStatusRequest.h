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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYALARMSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYALARMSTATUSREQUEST_H_

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
                * UpdateAccessKeyAlarmStatus request structure.
                */
                class UpdateAccessKeyAlarmStatusRequest : public AbstractModel
                {
                public:
                    UpdateAccessKeyAlarmStatusRequest();
                    ~UpdateAccessKeyAlarmStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Status  0: unprocessed 1: fixed 2: ignored.
                     * @return Status Status  0: unprocessed 1: fixed 2: ignored.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status  0: unprocessed 1: fixed 2: ignored.
                     * @param _status Status  0: unprocessed 1: fixed 2: ignored.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取Alarm ID list.
                     * @return AlarmIDList Alarm ID list.
                     * 
                     */
                    std::vector<int64_t> GetAlarmIDList() const;

                    /**
                     * 设置Alarm ID list.
                     * @param _alarmIDList Alarm ID list.
                     * 
                     */
                    void SetAlarmIDList(const std::vector<int64_t>& _alarmIDList);

                    /**
                     * 判断参数 AlarmIDList 是否已赋值
                     * @return AlarmIDList 是否已赋值
                     * 
                     */
                    bool AlarmIDListHasBeenSet() const;

                    /**
                     * 获取Risk ID list.
                     * @return RiskIDList Risk ID list.
                     * 
                     */
                    std::vector<int64_t> GetRiskIDList() const;

                    /**
                     * 设置Risk ID list.
                     * @param _riskIDList Risk ID list.
                     * 
                     */
                    void SetRiskIDList(const std::vector<int64_t>& _riskIDList);

                    /**
                     * 判断参数 RiskIDList 是否已赋值
                     * @return RiskIDList 是否已赋值
                     * 
                     */
                    bool RiskIDListHasBeenSet() const;

                private:

                    /**
                     * Status  0: unprocessed 1: fixed 2: ignored.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Alarm ID list.
                     */
                    std::vector<int64_t> m_alarmIDList;
                    bool m_alarmIDListHasBeenSet;

                    /**
                     * Risk ID list.
                     */
                    std::vector<int64_t> m_riskIDList;
                    bool m_riskIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYALARMSTATUSREQUEST_H_
