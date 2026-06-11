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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMEINFO_H_

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
                * Import time field information for Es
                */
                class EsTimeInfo : public AbstractModel
                {
                public:
                    EsTimeInfo();
                    ~EsTimeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time type 1: Log collection time 2: Specify log fields
                     * @return Type Time type 1: Log collection time 2: Specify log fields
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Time type 1: Log collection time 2: Specify log fields
                     * @param _type Time type 1: Log collection time 2: Specify log fields
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Log time field.

Time type is 2: Required when specifying log fields
                     * @return TimeKey Log time field.

Time type is 2: Required when specifying log fields
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置Log time field.

Time type is 2: Required when specifying log fields
                     * @param _timeKey Log time field.

Time type is 2: Required when specifying log fields
                     * 
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     * 
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取Log time format.

Time type is 2: Required when specifying log fields
                     * @return TimeFormat Log time format.

Time type is 2: Required when specifying log fields
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Log time format.

Time type is 2: Required when specifying log fields
                     * @param _timeFormat Log time format.

Time type is 2: Required when specifying log fields
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取Time field time zone.

Time type is 2: Required when specifying log fields
                     * @return TimeZone Time field time zone.

Time type is 2: Required when specifying log fields
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time field time zone.

Time type is 2: Required when specifying log fields
                     * @param _timeZone Time field time zone.

Time type is 2: Required when specifying log fields
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Time type 1: Log collection time 2: Specify log fields
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Log time field.

Time type is 2: Required when specifying log fields
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * Log time format.

Time type is 2: Required when specifying log fields
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * Time field time zone.

Time type is 2: Required when specifying log fields
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMEINFO_H_
