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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_STEP_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_STEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Execution Step Information
                */
                class Step : public AbstractModel
                {
                public:
                    Step();
                    ~Step() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Start time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return StartAt Start time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Start time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _startAt Start time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取End time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return EndAt End time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置End time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _endAt End time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     * 
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取Current status

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Status Current status

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current status

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _status Current status

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Execution Information

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Message Execution Information

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Execution Information

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _message Execution Information

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Start time

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * End time

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * Current status

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Execution Information

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_STEP_H_
