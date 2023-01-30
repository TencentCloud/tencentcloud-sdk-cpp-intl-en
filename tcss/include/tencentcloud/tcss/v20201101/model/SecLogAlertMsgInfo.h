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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGALERTMSGINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGALERTMSGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Security log alert message
                */
                class SecLogAlertMsgInfo : public AbstractModel
                {
                public:
                    SecLogAlertMsgInfo();
                    ~SecLogAlertMsgInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alert type
                     * @return MsgType Alert type
                     */
                    std::string GetMsgType() const;

                    /**
                     * 设置Alert type
                     * @param MsgType Alert type
                     */
                    void SetMsgType(const std::string& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取Alert value
                     * @return MsgValue Alert value
                     */
                    std::string GetMsgValue() const;

                    /**
                     * 设置Alert value
                     * @param MsgValue Alert value
                     */
                    void SetMsgValue(const std::string& _msgValue);

                    /**
                     * 判断参数 MsgValue 是否已赋值
                     * @return MsgValue 是否已赋值
                     */
                    bool MsgValueHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: `0` (disabled); `1` (enabled).
                     * @return State Status. Valid values: `0` (disabled); `1` (enabled).
                     */
                    bool GetState() const;

                    /**
                     * 设置Status. Valid values: `0` (disabled); `1` (enabled).
                     * @param State Status. Valid values: `0` (disabled); `1` (enabled).
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * Alert type
                     */
                    std::string m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * Alert value
                     */
                    std::string m_msgValue;
                    bool m_msgValueHasBeenSet;

                    /**
                     * Status. Valid values: `0` (disabled); `1` (enabled).
                     */
                    bool m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGALERTMSGINFO_H_
