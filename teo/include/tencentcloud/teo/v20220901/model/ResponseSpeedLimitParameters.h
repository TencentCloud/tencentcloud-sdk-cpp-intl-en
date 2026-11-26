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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RESPONSESPEEDLIMITPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RESPONSESPEEDLIMITPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Single connection download speed limit configuration parameter.
                */
                class ResponseSpeedLimitParameters : public AbstractModel
                {
                public:
                    ResponseSpeedLimitParameters();
                    ~ResponseSpeedLimitParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Download speed limit mode. Valid values:
<li>LimitUponDownload: download speed limit for the entire process;</li>
<li>LimitAfterSpecificBytesDownloaded: Start speed limit after downloading specific bytes at full speed;</li>
<li>LimitAfterSpecificSecondsDownloaded: Start rate limiting after downloading at full speed for a specified time.</li>
                     * @return Mode Download speed limit mode. Valid values:
<li>LimitUponDownload: download speed limit for the entire process;</li>
<li>LimitAfterSpecificBytesDownloaded: Start speed limit after downloading specific bytes at full speed;</li>
<li>LimitAfterSpecificSecondsDownloaded: Start rate limiting after downloading at full speed for a specified time.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Download speed limit mode. Valid values:
<li>LimitUponDownload: download speed limit for the entire process;</li>
<li>LimitAfterSpecificBytesDownloaded: Start speed limit after downloading specific bytes at full speed;</li>
<li>LimitAfterSpecificSecondsDownloaded: Start rate limiting after downloading at full speed for a specified time.</li>
                     * @param _mode Download speed limit mode. Valid values:
<li>LimitUponDownload: download speed limit for the entire process;</li>
<li>LimitAfterSpecificBytesDownloaded: Start speed limit after downloading specific bytes at full speed;</li>
<li>LimitAfterSpecificSecondsDownloaded: Start rate limiting after downloading at full speed for a specified time.</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Rate-limiting value. Specify the rate limit. Fill in a value with a unit or a variable. Currently supported unit: KB/s.
                     * @return MaxSpeed Rate-limiting value. Specify the rate limit. Fill in a value with a unit or a variable. Currently supported unit: KB/s.
                     * 
                     */
                    std::string GetMaxSpeed() const;

                    /**
                     * 设置Rate-limiting value. Specify the rate limit. Fill in a value with a unit or a variable. Currently supported unit: KB/s.
                     * @param _maxSpeed Rate-limiting value. Specify the rate limit. Fill in a value with a unit or a variable. Currently supported unit: KB/s.
                     * 
                     */
                    void SetMaxSpeed(const std::string& _maxSpeed);

                    /**
                     * 判断参数 MaxSpeed 是否已赋值
                     * @return MaxSpeed 是否已赋值
                     * 
                     */
                    bool MaxSpeedHasBeenSet() const;

                    /**
                     * 获取Speed limit start value, which can be the download size or specified duration. Fill in a value with a unit or a variable to specify the download size or duration.

-When Mode is LimitAfterSpecificBytesDownloaded, valid values of the unit are: KB;

-When Mode is LimitAfterSpecificSecondsDownloaded, valid values of the measurement unit: s.

                     * @return StartAt Speed limit start value, which can be the download size or specified duration. Fill in a value with a unit or a variable to specify the download size or duration.

-When Mode is LimitAfterSpecificBytesDownloaded, valid values of the unit are: KB;

-When Mode is LimitAfterSpecificSecondsDownloaded, valid values of the measurement unit: s.

                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Speed limit start value, which can be the download size or specified duration. Fill in a value with a unit or a variable to specify the download size or duration.

-When Mode is LimitAfterSpecificBytesDownloaded, valid values of the unit are: KB;

-When Mode is LimitAfterSpecificSecondsDownloaded, valid values of the measurement unit: s.

                     * @param _startAt Speed limit start value, which can be the download size or specified duration. Fill in a value with a unit or a variable to specify the download size or duration.

-When Mode is LimitAfterSpecificBytesDownloaded, valid values of the unit are: KB;

-When Mode is LimitAfterSpecificSecondsDownloaded, valid values of the measurement unit: s.

                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                private:

                    /**
                     * Download speed limit mode. Valid values:
<li>LimitUponDownload: download speed limit for the entire process;</li>
<li>LimitAfterSpecificBytesDownloaded: Start speed limit after downloading specific bytes at full speed;</li>
<li>LimitAfterSpecificSecondsDownloaded: Start rate limiting after downloading at full speed for a specified time.</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Rate-limiting value. Specify the rate limit. Fill in a value with a unit or a variable. Currently supported unit: KB/s.
                     */
                    std::string m_maxSpeed;
                    bool m_maxSpeedHasBeenSet;

                    /**
                     * Speed limit start value, which can be the download size or specified duration. Fill in a value with a unit or a variable to specify the download size or duration.

-When Mode is LimitAfterSpecificBytesDownloaded, valid values of the unit are: KB;

-When Mode is LimitAfterSpecificSecondsDownloaded, valid values of the measurement unit: s.

                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RESPONSESPEEDLIMITPARAMETERS_H_
