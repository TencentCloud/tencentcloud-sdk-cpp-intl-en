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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/MsgRecord.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetMsgRecord response structure.
                */
                class GetMsgRecordResponse : public AbstractModel
                {
                public:
                    GetMsgRecordResponse();
                    ~GetMsgRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Session record.
                     * @return Records Session record.
                     * 
                     */
                    std::vector<MsgRecord> GetRecords() const;

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取The time when session cleared associated context, in milliseconds.
                     * @return SessionDisassociatedTimestamp The time when session cleared associated context, in milliseconds.
                     * 
                     */
                    std::string GetSessionDisassociatedTimestamp() const;

                    /**
                     * 判断参数 SessionDisassociatedTimestamp 是否已赋值
                     * @return SessionDisassociatedTimestamp 是否已赋值
                     * 
                     */
                    bool SessionDisassociatedTimestampHasBeenSet() const;

                private:

                    /**
                     * Session record.
                     */
                    std::vector<MsgRecord> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * The time when session cleared associated context, in milliseconds.
                     */
                    std::string m_sessionDisassociatedTimestamp;
                    bool m_sessionDisassociatedTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDRESPONSE_H_
