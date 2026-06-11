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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCPARTITIONEXTRA_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCPARTITIONEXTRA_H_

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
                * Data Lake Computing Service (Data Lake Compute, abbreviation DLC) partitioning additional information
                */
                class DlcPartitionExtra : public AbstractModel
                {
                public:
                    DlcPartitionExtra();
                    ~DlcPartitionExtra() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time format, e.g.: %Y-%m-%d %H:%m:%S.%f
                     * @return TimeFormat Time format, e.g.: %Y-%m-%d %H:%m:%S.%f
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time format, e.g.: %Y-%m-%d %H:%m:%S.%f
                     * @param _timeFormat Time format, e.g.: %Y-%m-%d %H:%m:%S.%f
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
                     * 获取Time zone
                     * @return TimeZone Time zone
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time zone
                     * @param _timeZone Time zone
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
                     * Time format, e.g.: %Y-%m-%d %H:%m:%S.%f
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * Time zone
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCPARTITIONEXTRA_H_
