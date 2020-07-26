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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMPROCESSERRORINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMPROCESSERRORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information of a live stream processing error
                */
                class LiveStreamProcessErrorInfo : public AbstractModel
                {
                public:
                    LiveStreamProcessErrorInfo();
                    ~LiveStreamProcessErrorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error code:
<li>0: No error;</li>
<li>If this parameter is not 0, an error has occurred. Please see the error message (`Message`).</li>
                     * @return ErrCode Error code:
<li>0: No error;</li>
<li>If this parameter is not 0, an error has occurred. Please see the error message (`Message`).</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code:
<li>0: No error;</li>
<li>If this parameter is not 0, an error has occurred. Please see the error message (`Message`).</li>
                     * @param ErrCode Error code:
<li>0: No error;</li>
<li>If this parameter is not 0, an error has occurred. Please see the error message (`Message`).</li>
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param Message Error message.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Error code:
<li>0: No error;</li>
<li>If this parameter is not 0, an error has occurred. Please see the error message (`Message`).</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMPROCESSERRORINFO_H_
