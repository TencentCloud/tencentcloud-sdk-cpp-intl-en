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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRESETINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRESETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Session reset information
                */
                class ConversationResetInfo : public AbstractModel
                {
                public:
                    ConversationResetInfo();
                    ~ConversationResetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Last reset millisecond-level timestamp</p>
                     * @return ResetTime <p>Last reset millisecond-level timestamp</p>
                     * 
                     */
                    std::string GetResetTime() const;

                    /**
                     * 设置<p>Last reset millisecond-level timestamp</p>
                     * @param _resetTime <p>Last reset millisecond-level timestamp</p>
                     * 
                     */
                    void SetResetTime(const std::string& _resetTime);

                    /**
                     * 判断参数 ResetTime 是否已赋值
                     * @return ResetTime 是否已赋值
                     * 
                     */
                    bool ResetTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last boundary reset; this record and earlier records are no longer used as dialogue context</p>
                     * @return ResetThroughRecordId <p>Last boundary reset; this record and earlier records are no longer used as dialogue context</p>
                     * 
                     */
                    std::string GetResetThroughRecordId() const;

                    /**
                     * 设置<p>Last boundary reset; this record and earlier records are no longer used as dialogue context</p>
                     * @param _resetThroughRecordId <p>Last boundary reset; this record and earlier records are no longer used as dialogue context</p>
                     * 
                     */
                    void SetResetThroughRecordId(const std::string& _resetThroughRecordId);

                    /**
                     * 判断参数 ResetThroughRecordId 是否已赋值
                     * @return ResetThroughRecordId 是否已赋值
                     * 
                     */
                    bool ResetThroughRecordIdHasBeenSet() const;

                private:

                    /**
                     * <p>Last reset millisecond-level timestamp</p>
                     */
                    std::string m_resetTime;
                    bool m_resetTimeHasBeenSet;

                    /**
                     * <p>Last boundary reset; this record and earlier records are no longer used as dialogue context</p>
                     */
                    std::string m_resetThroughRecordId;
                    bool m_resetThroughRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRESETINFO_H_
