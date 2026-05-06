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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEDESIGNTASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEDESIGNTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeDesignTask response structure.
                */
                class DescribeDesignTaskResponse : public AbstractModel
                {
                public:
                    DescribeDesignTaskResponse();
                    ~DescribeDesignTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Error code. 0 is returned if the request is successful.</p>
                     * @return ErrorCode <p>Error code. 0 is returned if the request is successful.</p>
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>Error message. success is returned if the request is successful.</p>
                     * @return Msg <p>Error message. success is returned if the request is successful.</p>
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>fail: Failure, </li><li>processing: Processing.</li></ul>
                     * @return Status <p>Task status.</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>fail: Failure, </li><li>processing: Processing.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Voice ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoiceId <p>Voice ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Extended information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtInfo <p>Extended information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Error code. 0 is returned if the request is successful.</p>
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>Error message. success is returned if the request is successful.</p>
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * <p>Task status.</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>fail: Failure, </li><li>processing: Processing.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Voice ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Extended information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEDESIGNTASKRESPONSE_H_
