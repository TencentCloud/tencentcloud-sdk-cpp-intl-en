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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYMOSTPLAYEDSTATREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYMOSTPLAYEDSTATREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDailyMostPlayedStat request structure.
                */
                class DescribeDailyMostPlayedStatRequest : public AbstractModel
                {
                public:
                    DescribeDailyMostPlayedStatRequest();
                    ~DescribeDailyMostPlayedStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query date, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). This parameter is only valid for the date part.
                     * @return Date Query date, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). This parameter is only valid for the date part.
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Query date, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). This parameter is only valid for the date part.
                     * @param _date Query date, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). This parameter is only valid for the date part.
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
                     * 获取Domain name. Query playback stats of the Top 100 media files for that domain name. Query playback stats of all domain names by default.
                     * @return DomainName Domain name. Query playback stats of the Top 100 media files for that domain name. Query playback stats of all domain names by default.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name. Query playback stats of the Top 100 media files for that domain name. Query playback stats of all domain names by default.
                     * @param _domainName Domain name. Query playback stats of the Top 100 media files for that domain name. Query playback stats of all domain names by default.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Statistical metrics for Top data. Valid values:
<li>Traffic: playback traffic. The data of Top 100 is collected by playback traffic.</li>
<li>PlayTimes: number of plays, the data of the Top 100 by playback count.</li>
Default value: Traffic.
                     * @return Metric Statistical metrics for Top data. Valid values:
<li>Traffic: playback traffic. The data of Top 100 is collected by playback traffic.</li>
<li>PlayTimes: number of plays, the data of the Top 100 by playback count.</li>
Default value: Traffic.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Statistical metrics for Top data. Valid values:
<li>Traffic: playback traffic. The data of Top 100 is collected by playback traffic.</li>
<li>PlayTimes: number of plays, the data of the Top 100 by playback count.</li>
Default value: Traffic.
                     * @param _metric Statistical metrics for Top data. Valid values:
<li>Traffic: playback traffic. The data of Top 100 is collected by playback traffic.</li>
<li>PlayTimes: number of plays, the data of the Top 100 by playback count.</li>
Default value: Traffic.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Query date, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). This parameter is only valid for the date part.
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Domain name. Query playback stats of the Top 100 media files for that domain name. Query playback stats of all domain names by default.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Statistical metrics for Top data. Valid values:
<li>Traffic: playback traffic. The data of Top 100 is collected by playback traffic.</li>
<li>PlayTimes: number of plays, the data of the Top 100 by playback count.</li>
Default value: Traffic.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYMOSTPLAYEDSTATREQUEST_H_
