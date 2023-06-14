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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CDNLOGINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CDNLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CDN log information
                */
                class CdnLogInfo : public AbstractModel
                {
                public:
                    CdnLogInfo();
                    ~CdnLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log date in the format of `yyyy-MM-dd`, such as 2018-03-01.
                     * @return Date Log date in the format of `yyyy-MM-dd`, such as 2018-03-01.
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Log date in the format of `yyyy-MM-dd`, such as 2018-03-01.
                     * @param _date Log date in the format of `yyyy-MM-dd`, such as 2018-03-01.
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Log name in the format of date and time-domain name,
such as 2018120101-test.vod2.mqcloud.com.
                     * @return Name Log name in the format of date and time-domain name,
such as 2018120101-test.vod2.mqcloud.com.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Log name in the format of date and time-domain name,
such as 2018120101-test.vod2.mqcloud.com.
                     * @param _name Log name in the format of date and time-domain name,
such as 2018120101-test.vod2.mqcloud.com.
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
                     * 获取Log download link, which is valid for 24 hours.
                     * @return Url Log download link, which is valid for 24 hours.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Log download link, which is valid for 24 hours.
                     * @param _url Log download link, which is valid for 24 hours.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Log start time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     * @return StartTime Log start time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Log start time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     * @param _startTime Log start time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Log end time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     * @return EndTime Log end time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Log end time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     * @param _endTime Log end time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Log date in the format of `yyyy-MM-dd`, such as 2018-03-01.
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Log name in the format of date and time-domain name,
such as 2018120101-test.vod2.mqcloud.com.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Log download link, which is valid for 24 hours.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Log start time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Log end time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNLOGINFO_H_
