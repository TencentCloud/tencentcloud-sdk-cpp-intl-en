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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MTICKET_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MTICKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * The combination of MatchCode and MatchTicket ID.
                */
                class MTicket : public AbstractModel
                {
                public:
                    MTicket();
                    ~MTicket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MatchCode
                     * @return MatchCode MatchCode
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置MatchCode
                     * @param MatchCode MatchCode
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     */
                    bool MatchCodeHasBeenSet() const;

                    /**
                     * 获取MatchTicket ID
                     * @return MatchTicketId MatchTicket ID
                     */
                    std::string GetMatchTicketId() const;

                    /**
                     * 设置MatchTicket ID
                     * @param MatchTicketId MatchTicket ID
                     */
                    void SetMatchTicketId(const std::string& _matchTicketId);

                    /**
                     * 判断参数 MatchTicketId 是否已赋值
                     * @return MatchTicketId 是否已赋值
                     */
                    bool MatchTicketIdHasBeenSet() const;

                private:

                    /**
                     * MatchCode
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * MatchTicket ID
                     */
                    std::string m_matchTicketId;
                    bool m_matchTicketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MTICKET_H_
