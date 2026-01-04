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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_ADBREAKSETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_ADBREAKSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/LSqueezeSetting.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * AdBreakSetting
                */
                class AdBreakSetting : public AbstractModel
                {
                public:
                    AdBreakSetting();
                    ~AdBreakSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Advertising type, currently supports L-SQUEEZE
                     * @return Format Advertising type, currently supports L-SQUEEZE
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Advertising type, currently supports L-SQUEEZE
                     * @param _format Advertising type, currently supports L-SQUEEZE
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Duration, in milliseconds, requires 1000<duration<=600000. The current accuracy is seconds, which is a multiple of 1000
                     * @return Duration Duration, in milliseconds, requires 1000<duration<=600000. The current accuracy is seconds, which is a multiple of 1000
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Duration, in milliseconds, requires 1000<duration<=600000. The current accuracy is seconds, which is a multiple of 1000
                     * @param _duration Duration, in milliseconds, requires 1000<duration<=600000. The current accuracy is seconds, which is a multiple of 1000
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取L-type compression recovery configuration
                     * @return LSqueezeSetting L-type compression recovery configuration
                     * 
                     */
                    LSqueezeSetting GetLSqueezeSetting() const;

                    /**
                     * 设置L-type compression recovery configuration
                     * @param _lSqueezeSetting L-type compression recovery configuration
                     * 
                     */
                    void SetLSqueezeSetting(const LSqueezeSetting& _lSqueezeSetting);

                    /**
                     * 判断参数 LSqueezeSetting 是否已赋值
                     * @return LSqueezeSetting 是否已赋值
                     * 
                     */
                    bool LSqueezeSettingHasBeenSet() const;

                    /**
                     * 获取AdSource type, supports UPLOAD_CREATIVES
                     * @return AdSource AdSource type, supports UPLOAD_CREATIVES
                     * 
                     */
                    std::string GetAdSource() const;

                    /**
                     * 设置AdSource type, supports UPLOAD_CREATIVES
                     * @param _adSource AdSource type, supports UPLOAD_CREATIVES
                     * 
                     */
                    void SetAdSource(const std::string& _adSource);

                    /**
                     * 判断参数 AdSource 是否已赋值
                     * @return AdSource 是否已赋值
                     * 
                     */
                    bool AdSourceHasBeenSet() const;

                private:

                    /**
                     * Advertising type, currently supports L-SQUEEZE
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Duration, in milliseconds, requires 1000<duration<=600000. The current accuracy is seconds, which is a multiple of 1000
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * L-type compression recovery configuration
                     */
                    LSqueezeSetting m_lSqueezeSetting;
                    bool m_lSqueezeSettingHasBeenSet;

                    /**
                     * AdSource type, supports UPLOAD_CREATIVES
                     */
                    std::string m_adSource;
                    bool m_adSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_ADBREAKSETTING_H_
