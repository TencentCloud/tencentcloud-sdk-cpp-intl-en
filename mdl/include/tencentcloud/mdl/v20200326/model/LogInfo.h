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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_LOGINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_LOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/LogMessageInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Log information.
                */
                class LogInfo : public AbstractModel
                {
                public:
                    LogInfo();
                    ~LogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log type.
It contains the value of `StreamStart` which refers to the push information.
                     * @return Type Log type.
It contains the value of `StreamStart` which refers to the push information.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Log type.
It contains the value of `StreamStart` which refers to the push information.
                     * @param _type Log type.
It contains the value of `StreamStart` which refers to the push information.
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
                     * 获取Time when the log is printed.
                     * @return Time Time when the log is printed.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time when the log is printed.
                     * @param _time Time when the log is printed.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Log details.
                     * @return Message Log details.
                     * 
                     */
                    LogMessageInfo GetMessage() const;

                    /**
                     * 设置Log details.
                     * @param _message Log details.
                     * 
                     */
                    void SetMessage(const LogMessageInfo& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Log type.
It contains the value of `StreamStart` which refers to the push information.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Time when the log is printed.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Log details.
                     */
                    LogMessageInfo m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_LOGINFO_H_
