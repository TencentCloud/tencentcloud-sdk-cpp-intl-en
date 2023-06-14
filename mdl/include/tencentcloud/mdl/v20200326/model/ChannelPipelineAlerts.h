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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELPIPELINEALERTS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELPIPELINEALERTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Channel alarm details.
                */
                class ChannelPipelineAlerts : public AbstractModel
                {
                public:
                    ChannelPipelineAlerts();
                    ~ChannelPipelineAlerts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm start time in UTC time.
                     * @return SetTime Alarm start time in UTC time.
                     * 
                     */
                    std::string GetSetTime() const;

                    /**
                     * 设置Alarm start time in UTC time.
                     * @param _setTime Alarm start time in UTC time.
                     * 
                     */
                    void SetSetTime(const std::string& _setTime);

                    /**
                     * 判断参数 SetTime 是否已赋值
                     * @return SetTime 是否已赋值
                     * 
                     */
                    bool SetTimeHasBeenSet() const;

                    /**
                     * 获取Alarm end time in UTC time.
This time is available only after the alarm ends.
                     * @return ClearTime Alarm end time in UTC time.
This time is available only after the alarm ends.
                     * 
                     */
                    std::string GetClearTime() const;

                    /**
                     * 设置Alarm end time in UTC time.
This time is available only after the alarm ends.
                     * @param _clearTime Alarm end time in UTC time.
This time is available only after the alarm ends.
                     * 
                     */
                    void SetClearTime(const std::string& _clearTime);

                    /**
                     * 判断参数 ClearTime 是否已赋值
                     * @return ClearTime 是否已赋值
                     * 
                     */
                    bool ClearTimeHasBeenSet() const;

                    /**
                     * 获取Alarm type.
                     * @return Type Alarm type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Alarm type.
                     * @param _type Alarm type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Alarm details.
                     * @return Message Alarm details.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Alarm details.
                     * @param _message Alarm details.
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
                     * Alarm start time in UTC time.
                     */
                    std::string m_setTime;
                    bool m_setTimeHasBeenSet;

                    /**
                     * Alarm end time in UTC time.
This time is available only after the alarm ends.
                     */
                    std::string m_clearTime;
                    bool m_clearTimeHasBeenSet;

                    /**
                     * Alarm type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Alarm details.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELPIPELINEALERTS_H_
