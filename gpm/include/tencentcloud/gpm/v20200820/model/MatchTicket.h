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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MATCHTICKET_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MATCHTICKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/Player.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * MatchTicket information
                */
                class MatchTicket : public AbstractModel
                {
                public:
                    MatchTicket();
                    ~MatchTicket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MatchTicket ID. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     * @return Id MatchTicket ID. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置MatchTicket ID. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     * @param _id MatchTicket ID. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取MatchCode
                     * @return MatchCode MatchCode
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置MatchCode
                     * @param _matchCode MatchCode
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                    /**
                     * 获取Different structure serialized results will be returned according to the MatchType.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MatchResult Different structure serialized results will be returned according to the MatchType.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetMatchResult() const;

                    /**
                     * 设置Different structure serialized results will be returned according to the MatchType.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _matchResult Different structure serialized results will be returned according to the MatchType.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMatchResult(const std::string& _matchResult);

                    /**
                     * 判断参数 MatchResult 是否已赋值
                     * @return MatchResult 是否已赋值
                     * 
                     */
                    bool MatchResultHasBeenSet() const;

                    /**
                     * 获取Matchmaking type. Valid values: NORMAL, GSE
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MatchType Matchmaking type. Valid values: NORMAL, GSE
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Matchmaking type. Valid values: NORMAL, GSE
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _matchType Matchmaking type. Valid values: NORMAL, GSE
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取Player information list
                     * @return Players Player information list
                     * 
                     */
                    std::vector<Player> GetPlayers() const;

                    /**
                     * 设置Player information list
                     * @param _players Player information list
                     * 
                     */
                    void SetPlayers(const std::vector<Player>& _players);

                    /**
                     * 判断参数 Players 是否已赋值
                     * @return Players 是否已赋值
                     * 
                     */
                    bool PlayersHasBeenSet() const;

                    /**
                     * 获取Matching status. Valid values: SEARCHING (matching), PLACING (pending match), COMPLETED (match completed), CANCELLED (match cancelled), TIMEDOUT (match timeouts), FAILED (match failed)
                     * @return Status Matching status. Valid values: SEARCHING (matching), PLACING (pending match), COMPLETED (match completed), CANCELLED (match cancelled), TIMEDOUT (match timeouts), FAILED (match failed)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Matching status. Valid values: SEARCHING (matching), PLACING (pending match), COMPLETED (match completed), CANCELLED (match cancelled), TIMEDOUT (match timeouts), FAILED (match failed)
                     * @param _status Matching status. Valid values: SEARCHING (matching), PLACING (pending match), COMPLETED (match completed), CANCELLED (match cancelled), TIMEDOUT (match timeouts), FAILED (match failed)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Matching status descriptions
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return StatusMessage Matching status descriptions
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置Matching status descriptions
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _statusMessage Matching status descriptions
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取Reason for the matching status
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return StatusReason Reason for the matching status
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置Reason for the matching status
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _statusReason Reason for the matching status
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取The time when the GPM received the matchmaking request, for example "2020-08-17T08:14:38.077Z".
                     * @return StartTime The time when the GPM received the matchmaking request, for example "2020-08-17T08:14:38.077Z".
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The time when the GPM received the matchmaking request, for example "2020-08-17T08:14:38.077Z".
                     * @param _startTime The time when the GPM received the matchmaking request, for example "2020-08-17T08:14:38.077Z".
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
                     * 获取The time when the matchmaking request stopped executing due to the completion, failure, timeout, or cancellation, for example "2020-08-17T08:14:38.077Z".
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return EndTime The time when the matchmaking request stopped executing due to the completion, failure, timeout, or cancellation, for example "2020-08-17T08:14:38.077Z".
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The time when the matchmaking request stopped executing due to the completion, failure, timeout, or cancellation, for example "2020-08-17T08:14:38.077Z".
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _endTime The time when the matchmaking request stopped executing due to the completion, failure, timeout, or cancellation, for example "2020-08-17T08:14:38.077Z".
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * MatchTicket ID. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * MatchCode
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * Different structure serialized results will be returned according to the MatchType.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_matchResult;
                    bool m_matchResultHasBeenSet;

                    /**
                     * Matchmaking type. Valid values: NORMAL, GSE
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Player information list
                     */
                    std::vector<Player> m_players;
                    bool m_playersHasBeenSet;

                    /**
                     * Matching status. Valid values: SEARCHING (matching), PLACING (pending match), COMPLETED (match completed), CANCELLED (match cancelled), TIMEDOUT (match timeouts), FAILED (match failed)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Matching status descriptions
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * Reason for the matching status
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * The time when the GPM received the matchmaking request, for example "2020-08-17T08:14:38.077Z".
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The time when the matchmaking request stopped executing due to the completion, failure, timeout, or cancellation, for example "2020-08-17T08:14:38.077Z".
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MATCHTICKET_H_
