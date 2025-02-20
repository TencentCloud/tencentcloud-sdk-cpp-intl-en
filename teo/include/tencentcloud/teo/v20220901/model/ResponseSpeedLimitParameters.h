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
                * Single-link download speed limit configuration parameters
                */
                class ResponseSpeedLimitParameters : public AbstractModel
                {
                public:
                    ResponseSpeedLimitParameters();
                    ~ResponseSpeedLimitParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Download rate limit mode. valid values:.
<Li>LimitUponDownload: rate limit throughout the download process;</li>.
<Li>LimitAfterSpecificBytesDownloaded: rate limit after downloading specific bytes at full speed;</li>.
<Li>LimitAfterSpecificSecondsDownloaded: start speed limit after downloading at full speed for a specific duration.</li>.
                     * @return Mode Download rate limit mode. valid values:.
<Li>LimitUponDownload: rate limit throughout the download process;</li>.
<Li>LimitAfterSpecificBytesDownloaded: rate limit after downloading specific bytes at full speed;</li>.
<Li>LimitAfterSpecificSecondsDownloaded: start speed limit after downloading at full speed for a specific duration.</li>.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Download rate limit mode. valid values:.
<Li>LimitUponDownload: rate limit throughout the download process;</li>.
<Li>LimitAfterSpecificBytesDownloaded: rate limit after downloading specific bytes at full speed;</li>.
<Li>LimitAfterSpecificSecondsDownloaded: start speed limit after downloading at full speed for a specific duration.</li>.
                     * @param _mode Download rate limit mode. valid values:.
<Li>LimitUponDownload: rate limit throughout the download process;</li>.
<Li>LimitAfterSpecificBytesDownloaded: rate limit after downloading specific bytes at full speed;</li>.
<Li>LimitAfterSpecificSecondsDownloaded: start speed limit after downloading at full speed for a specific duration.</li>.
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
                     * 获取Rate-Limiting value, in kb/s. enter a numerical value to specify the rate limit.
                     * @return MaxSpeed Rate-Limiting value, in kb/s. enter a numerical value to specify the rate limit.
                     * 
                     */
                    std::string GetMaxSpeed() const;

                    /**
                     * 设置Rate-Limiting value, in kb/s. enter a numerical value to specify the rate limit.
                     * @param _maxSpeed Rate-Limiting value, in kb/s. enter a numerical value to specify the rate limit.
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
                     * 获取Rate-Limiting start value, which can be the download size or specified duration, in kb or s. this parameter is required when mode is set to limitafterspecificbytesdownloaded or limitafterspecificsecondsdownloaded. enter a numerical value to specify the download size or duration.
                     * @return StartAt Rate-Limiting start value, which can be the download size or specified duration, in kb or s. this parameter is required when mode is set to limitafterspecificbytesdownloaded or limitafterspecificsecondsdownloaded. enter a numerical value to specify the download size or duration.
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Rate-Limiting start value, which can be the download size or specified duration, in kb or s. this parameter is required when mode is set to limitafterspecificbytesdownloaded or limitafterspecificsecondsdownloaded. enter a numerical value to specify the download size or duration.
                     * @param _startAt Rate-Limiting start value, which can be the download size or specified duration, in kb or s. this parameter is required when mode is set to limitafterspecificbytesdownloaded or limitafterspecificsecondsdownloaded. enter a numerical value to specify the download size or duration.
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
                     * Download rate limit mode. valid values:.
<Li>LimitUponDownload: rate limit throughout the download process;</li>.
<Li>LimitAfterSpecificBytesDownloaded: rate limit after downloading specific bytes at full speed;</li>.
<Li>LimitAfterSpecificSecondsDownloaded: start speed limit after downloading at full speed for a specific duration.</li>.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Rate-Limiting value, in kb/s. enter a numerical value to specify the rate limit.
                     */
                    std::string m_maxSpeed;
                    bool m_maxSpeedHasBeenSet;

                    /**
                     * Rate-Limiting start value, which can be the download size or specified duration, in kb or s. this parameter is required when mode is set to limitafterspecificbytesdownloaded or limitafterspecificsecondsdownloaded. enter a numerical value to specify the download size or duration.
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RESPONSESPEEDLIMITPARAMETERS_H_
