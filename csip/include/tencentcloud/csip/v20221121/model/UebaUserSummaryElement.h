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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARYELEMENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARYELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * user behavior analysis user overview sum of elements
                */
                class UebaUserSummaryElement : public AbstractModel
                {
                public:
                    UebaUserSummaryElement();
                    ~UebaUserSummaryElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attendee id
                     * @return MemberID Attendee id
                     * 
                     */
                    std::string GetMemberID() const;

                    /**
                     * 设置Attendee id
                     * @param _memberID Attendee id
                     * 
                     */
                    void SetMemberID(const std::string& _memberID);

                    /**
                     * 判断参数 MemberID 是否已赋值
                     * @return MemberID 是否已赋值
                     * 
                     */
                    bool MemberIDHasBeenSet() const;

                    /**
                     * 获取Log type
                     * @return LogType Log type
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type
                     * @param _logType Log type
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取UID basis field
                     * @return UserID UID basis field
                     * 
                     */
                    std::string GetUserID() const;

                    /**
                     * 设置UID basis field
                     * @param _userID UID basis field
                     * 
                     */
                    void SetUserID(const std::string& _userID);

                    /**
                     * 判断参数 UserID 是否已赋值
                     * @return UserID 是否已赋值
                     * 
                     */
                    bool UserIDHasBeenSet() const;

                    /**
                     * 获取Quantity.
                     * @return Count Quantity.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Quantity.
                     * @param _count Quantity.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Attendee id
                     */
                    std::string m_memberID;
                    bool m_memberIDHasBeenSet;

                    /**
                     * Log type
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * UID basis field
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * Quantity.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARYELEMENT_H_
