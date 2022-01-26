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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Monitoring task execution time point in alarm policy
                */
                class MonitorTime : public AbstractModel
                {
                public:
                    MonitorTime();
                    ~MonitorTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values:
<br><li> `Period`: periodic execution
<br><li> `Fixed`: scheduled execution
                     * @return Type Valid values:
<br><li> `Period`: periodic execution
<br><li> `Fixed`: scheduled execution
                     */
                    std::string GetType() const;

                    /**
                     * 设置Valid values:
<br><li> `Period`: periodic execution
<br><li> `Fixed`: scheduled execution
                     * @param Type Valid values:
<br><li> `Period`: periodic execution
<br><li> `Fixed`: scheduled execution
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Execution interval or scheduled time point in minutes. Value range: 1–1440.
                     * @return Time Execution interval or scheduled time point in minutes. Value range: 1–1440.
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置Execution interval or scheduled time point in minutes. Value range: 1–1440.
                     * @param Time Execution interval or scheduled time point in minutes. Value range: 1–1440.
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * Valid values:
<br><li> `Period`: periodic execution
<br><li> `Fixed`: scheduled execution
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Execution interval or scheduled time point in minutes. Value range: 1–1440.
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_
