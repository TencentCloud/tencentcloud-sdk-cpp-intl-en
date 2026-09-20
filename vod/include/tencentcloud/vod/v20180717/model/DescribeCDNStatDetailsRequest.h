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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_

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
                * DescribeCDNStatDetails request structure.
                */
                class DescribeCDNStatDetailsRequest : public AbstractModel
                {
                public:
                    DescribeCDNStatDetailsRequest();
                    ~DescribeCDNStatDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queried metric. Valid values:
<li>Traffic: Total Traffic, in bytes.</li>
<li>Bandwidth: bandwidth, in Bps.</li>
<li>Requests: request count.</li>
<li>QUICRequests: number of QUIC requests.</li>
<li>IpVisit: number of IP visits.</li>
                     * @return Metric Queried metric. Valid values:
<li>Traffic: Total Traffic, in bytes.</li>
<li>Bandwidth: bandwidth, in Bps.</li>
<li>Requests: request count.</li>
<li>QUICRequests: number of QUIC requests.</li>
<li>IpVisit: number of IP visits.</li>
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Queried metric. Valid values:
<li>Traffic: Total Traffic, in bytes.</li>
<li>Bandwidth: bandwidth, in Bps.</li>
<li>Requests: request count.</li>
<li>QUICRequests: number of QUIC requests.</li>
<li>IpVisit: number of IP visits.</li>
                     * @param _metric Queried metric. Valid values:
<li>Traffic: Total Traffic, in bytes.</li>
<li>Bandwidth: bandwidth, in Bps.</li>
<li>Requests: request count.</li>
<li>QUICRequests: number of QUIC requests.</li>
<li>IpVisit: number of IP visits.</li>
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
                     * 获取Start time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return StartTime Start time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _startTime Start time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取End time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return EndTime End time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _endTime End time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b>
                     * @return SubAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b>
                     * @param _subAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Domain name list. Query data for up to 20 domains at a time. Usage data for all domains is overlaid by default.
                     * @return DomainNames Domain name list. Query data for up to 20 domains at a time. Usage data for all domains is overlaid by default.
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置Domain name list. Query data for up to 20 domains at a time. Usage data for all domains is overlaid by default.
                     * @param _domainNames Domain name list. Query data for up to 20 domains at a time. Usage data for all domains is overlaid by default.
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取Service area. Valid values:
<li>Chinese Mainland: Chinese mainland. </li>
<li>Asia Pacific Region 1: Asia Pacific zone 1, including Hong Kong (China), Macao (China), Singapore, Vietnam, and Thailand. </li>
<li>Asia Pacific Region 2: Asia Pacific zone 2, including Taiwan, Japan, Malaysia, Indonesia, and South Korea. </li>
<li>Asia Pacific Region 3: Asia Pacific zone 3, including the Philippines, India, Australia, and other countries and regions in Asia Pacific. </li>
<li>Middle East: Middle East. </li>
<li>Europe: Europe.</li>
<li>North America: North America.</li>
<li>South America: South America.</li>
<li>Africa: Africa.</li>
Default value: Chinese mainland.
                     * @return Area Service area. Valid values:
<li>Chinese Mainland: Chinese mainland. </li>
<li>Asia Pacific Region 1: Asia Pacific zone 1, including Hong Kong (China), Macao (China), Singapore, Vietnam, and Thailand. </li>
<li>Asia Pacific Region 2: Asia Pacific zone 2, including Taiwan, Japan, Malaysia, Indonesia, and South Korea. </li>
<li>Asia Pacific Region 3: Asia Pacific zone 3, including the Philippines, India, Australia, and other countries and regions in Asia Pacific. </li>
<li>Middle East: Middle East. </li>
<li>Europe: Europe.</li>
<li>North America: North America.</li>
<li>South America: South America.</li>
<li>Africa: Africa.</li>
Default value: Chinese mainland.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Service area. Valid values:
<li>Chinese Mainland: Chinese mainland. </li>
<li>Asia Pacific Region 1: Asia Pacific zone 1, including Hong Kong (China), Macao (China), Singapore, Vietnam, and Thailand. </li>
<li>Asia Pacific Region 2: Asia Pacific zone 2, including Taiwan, Japan, Malaysia, Indonesia, and South Korea. </li>
<li>Asia Pacific Region 3: Asia Pacific zone 3, including the Philippines, India, Australia, and other countries and regions in Asia Pacific. </li>
<li>Middle East: Middle East. </li>
<li>Europe: Europe.</li>
<li>North America: North America.</li>
<li>South America: South America.</li>
<li>Africa: Africa.</li>
Default value: Chinese mainland.
                     * @param _area Service area. Valid values:
<li>Chinese Mainland: Chinese mainland. </li>
<li>Asia Pacific Region 1: Asia Pacific zone 1, including Hong Kong (China), Macao (China), Singapore, Vietnam, and Thailand. </li>
<li>Asia Pacific Region 2: Asia Pacific zone 2, including Taiwan, Japan, Malaysia, Indonesia, and South Korea. </li>
<li>Asia Pacific Region 3: Asia Pacific zone 3, including the Philippines, India, Australia, and other countries and regions in Asia Pacific. </li>
<li>Middle East: Middle East. </li>
<li>Europe: Europe.</li>
<li>North America: North America.</li>
<li>South America: South America.</li>
<li>Africa: Africa.</li>
Default value: Chinese mainland.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Region where the user is located. If Area is Chinese Mainland, the value is the following region information. If Area is set to other values, ignore the Districts parameter.
<li>Beijing: Beijing.</li>
<li>Inner Mongolia: Inner Mongolia.</li>
<li>Shanxi: Shanxi.</li>
<li>Hebei: Hebei.</li>
<li>Tianjin: Tianjin.</li>
<li>Ningxia: Ningxia.</li>
<li>Shaanxi: Shaanxi.</li>
<li>Gansu: Gansu.</li>
<li>Qinghai: Qinghai.</li>
<li>Xinjiang: Xinjiang.</li>
<li>Heilongjiang: Heilongjiang.</li>
<li>Jilin: Jilin.</li>
<li>Liaoning: Liaoning.</li>
<li>Fujian: Fujian.</li>
<li>Jiangsu: Jiangsu.</li>
<li>Anhui: Anhui.</li>
<li>Shandong: Shandong.</li>
<li>Shanghai: Shanghai.</li>
<li>Zhejiang: Zhejiang.</li>
<li>Henan: Henan.</li>
<li>Hubei: Hubei.</li>
<li>Jiangxi: Jiangxi.</li>
<li>Hu’nan: Hunan.</li>
<li>Guizhou: Guizhou.</li>
<li>Yunnan: Yunnan.</li>
<li>Chongqing: Chongqing.</li>
<li>Sichuan: Sichuan.</li>
<li>Xizang: Tibet.</li>
<li>Guangdong: Guangdong.</li>
<li>Guangxi: Guangxi.</li>
<li>Hainan: Hainan.</li>
<li>Hong Kong (China), Macao (China), and Taiwan (China): Hong Kong, Macao and Taiwan.</li>
<li>Outside Chinese Mainland: overseas.</li>
<li>Other: Other.</li>
                     * @return Districts Region where the user is located. If Area is Chinese Mainland, the value is the following region information. If Area is set to other values, ignore the Districts parameter.
<li>Beijing: Beijing.</li>
<li>Inner Mongolia: Inner Mongolia.</li>
<li>Shanxi: Shanxi.</li>
<li>Hebei: Hebei.</li>
<li>Tianjin: Tianjin.</li>
<li>Ningxia: Ningxia.</li>
<li>Shaanxi: Shaanxi.</li>
<li>Gansu: Gansu.</li>
<li>Qinghai: Qinghai.</li>
<li>Xinjiang: Xinjiang.</li>
<li>Heilongjiang: Heilongjiang.</li>
<li>Jilin: Jilin.</li>
<li>Liaoning: Liaoning.</li>
<li>Fujian: Fujian.</li>
<li>Jiangsu: Jiangsu.</li>
<li>Anhui: Anhui.</li>
<li>Shandong: Shandong.</li>
<li>Shanghai: Shanghai.</li>
<li>Zhejiang: Zhejiang.</li>
<li>Henan: Henan.</li>
<li>Hubei: Hubei.</li>
<li>Jiangxi: Jiangxi.</li>
<li>Hu’nan: Hunan.</li>
<li>Guizhou: Guizhou.</li>
<li>Yunnan: Yunnan.</li>
<li>Chongqing: Chongqing.</li>
<li>Sichuan: Sichuan.</li>
<li>Xizang: Tibet.</li>
<li>Guangdong: Guangdong.</li>
<li>Guangxi: Guangxi.</li>
<li>Hainan: Hainan.</li>
<li>Hong Kong (China), Macao (China), and Taiwan (China): Hong Kong, Macao and Taiwan.</li>
<li>Outside Chinese Mainland: overseas.</li>
<li>Other: Other.</li>
                     * 
                     */
                    std::vector<std::string> GetDistricts() const;

                    /**
                     * 设置Region where the user is located. If Area is Chinese Mainland, the value is the following region information. If Area is set to other values, ignore the Districts parameter.
<li>Beijing: Beijing.</li>
<li>Inner Mongolia: Inner Mongolia.</li>
<li>Shanxi: Shanxi.</li>
<li>Hebei: Hebei.</li>
<li>Tianjin: Tianjin.</li>
<li>Ningxia: Ningxia.</li>
<li>Shaanxi: Shaanxi.</li>
<li>Gansu: Gansu.</li>
<li>Qinghai: Qinghai.</li>
<li>Xinjiang: Xinjiang.</li>
<li>Heilongjiang: Heilongjiang.</li>
<li>Jilin: Jilin.</li>
<li>Liaoning: Liaoning.</li>
<li>Fujian: Fujian.</li>
<li>Jiangsu: Jiangsu.</li>
<li>Anhui: Anhui.</li>
<li>Shandong: Shandong.</li>
<li>Shanghai: Shanghai.</li>
<li>Zhejiang: Zhejiang.</li>
<li>Henan: Henan.</li>
<li>Hubei: Hubei.</li>
<li>Jiangxi: Jiangxi.</li>
<li>Hu’nan: Hunan.</li>
<li>Guizhou: Guizhou.</li>
<li>Yunnan: Yunnan.</li>
<li>Chongqing: Chongqing.</li>
<li>Sichuan: Sichuan.</li>
<li>Xizang: Tibet.</li>
<li>Guangdong: Guangdong.</li>
<li>Guangxi: Guangxi.</li>
<li>Hainan: Hainan.</li>
<li>Hong Kong (China), Macao (China), and Taiwan (China): Hong Kong, Macao and Taiwan.</li>
<li>Outside Chinese Mainland: overseas.</li>
<li>Other: Other.</li>
                     * @param _districts Region where the user is located. If Area is Chinese Mainland, the value is the following region information. If Area is set to other values, ignore the Districts parameter.
<li>Beijing: Beijing.</li>
<li>Inner Mongolia: Inner Mongolia.</li>
<li>Shanxi: Shanxi.</li>
<li>Hebei: Hebei.</li>
<li>Tianjin: Tianjin.</li>
<li>Ningxia: Ningxia.</li>
<li>Shaanxi: Shaanxi.</li>
<li>Gansu: Gansu.</li>
<li>Qinghai: Qinghai.</li>
<li>Xinjiang: Xinjiang.</li>
<li>Heilongjiang: Heilongjiang.</li>
<li>Jilin: Jilin.</li>
<li>Liaoning: Liaoning.</li>
<li>Fujian: Fujian.</li>
<li>Jiangsu: Jiangsu.</li>
<li>Anhui: Anhui.</li>
<li>Shandong: Shandong.</li>
<li>Shanghai: Shanghai.</li>
<li>Zhejiang: Zhejiang.</li>
<li>Henan: Henan.</li>
<li>Hubei: Hubei.</li>
<li>Jiangxi: Jiangxi.</li>
<li>Hu’nan: Hunan.</li>
<li>Guizhou: Guizhou.</li>
<li>Yunnan: Yunnan.</li>
<li>Chongqing: Chongqing.</li>
<li>Sichuan: Sichuan.</li>
<li>Xizang: Tibet.</li>
<li>Guangdong: Guangdong.</li>
<li>Guangxi: Guangxi.</li>
<li>Hainan: Hainan.</li>
<li>Hong Kong (China), Macao (China), and Taiwan (China): Hong Kong, Macao and Taiwan.</li>
<li>Outside Chinese Mainland: overseas.</li>
<li>Other: Other.</li>
                     * 
                     */
                    void SetDistricts(const std::vector<std::string>& _districts);

                    /**
                     * 判断参数 Districts 是否已赋值
                     * @return Districts 是否已赋值
                     * 
                     */
                    bool DistrictsHasBeenSet() const;

                    /**
                     * 获取User's Operator Information. When Area is Chinese Mainland, the value is the following carrier information. When Area is other values, ignore the Isps parameter.
<li>China Telecom: China Telecom.</li>
<li>China Unicom: China Unicom. </li>
<li>CERNET: China Education Network.</li>
<li>Great Wall Broadband Network: Great Wall Broadband.</li>
<li>China Mobile: China Mobile.</li>
<li>China Mobile Tietong: China Tietong.</li>
<li>ISPs outside Chinese Mainland: overseas carriers.</li>
<li>Other ISPs: Other ISPs.</li>
                     * @return Isps User's Operator Information. When Area is Chinese Mainland, the value is the following carrier information. When Area is other values, ignore the Isps parameter.
<li>China Telecom: China Telecom.</li>
<li>China Unicom: China Unicom. </li>
<li>CERNET: China Education Network.</li>
<li>Great Wall Broadband Network: Great Wall Broadband.</li>
<li>China Mobile: China Mobile.</li>
<li>China Mobile Tietong: China Tietong.</li>
<li>ISPs outside Chinese Mainland: overseas carriers.</li>
<li>Other ISPs: Other ISPs.</li>
                     * 
                     */
                    std::vector<std::string> GetIsps() const;

                    /**
                     * 设置User's Operator Information. When Area is Chinese Mainland, the value is the following carrier information. When Area is other values, ignore the Isps parameter.
<li>China Telecom: China Telecom.</li>
<li>China Unicom: China Unicom. </li>
<li>CERNET: China Education Network.</li>
<li>Great Wall Broadband Network: Great Wall Broadband.</li>
<li>China Mobile: China Mobile.</li>
<li>China Mobile Tietong: China Tietong.</li>
<li>ISPs outside Chinese Mainland: overseas carriers.</li>
<li>Other ISPs: Other ISPs.</li>
                     * @param _isps User's Operator Information. When Area is Chinese Mainland, the value is the following carrier information. When Area is other values, ignore the Isps parameter.
<li>China Telecom: China Telecom.</li>
<li>China Unicom: China Unicom. </li>
<li>CERNET: China Education Network.</li>
<li>Great Wall Broadband Network: Great Wall Broadband.</li>
<li>China Mobile: China Mobile.</li>
<li>China Mobile Tietong: China Tietong.</li>
<li>ISPs outside Chinese Mainland: overseas carriers.</li>
<li>Other ISPs: Other ISPs.</li>
                     * 
                     */
                    void SetIsps(const std::vector<std::string>& _isps);

                    /**
                     * 判断参数 Isps 是否已赋值
                     * @return Isps 是否已赋值
                     * 
                     */
                    bool IspsHasBeenSet() const;

                    /**
                     * 获取Time granularity of each data entry. Unit: minute. Valid values:
<li>5: 5 minutes. Return detailed data at a 5-minute granularity within the specified query time.</li>
<li>1440: Day granularity. Return the data at 1-day granularity within the specified query time. If the span between the start time and end time is more than 24 hours, only day granularity data is supported.</li>
When the time span between StartTime and EndTime is more than 24 hours, DataInterval defaults to 1440.
                     * @return DataInterval Time granularity of each data entry. Unit: minute. Valid values:
<li>5: 5 minutes. Return detailed data at a 5-minute granularity within the specified query time.</li>
<li>1440: Day granularity. Return the data at 1-day granularity within the specified query time. If the span between the start time and end time is more than 24 hours, only day granularity data is supported.</li>
When the time span between StartTime and EndTime is more than 24 hours, DataInterval defaults to 1440.
                     * 
                     */
                    uint64_t GetDataInterval() const;

                    /**
                     * 设置Time granularity of each data entry. Unit: minute. Valid values:
<li>5: 5 minutes. Return detailed data at a 5-minute granularity within the specified query time.</li>
<li>1440: Day granularity. Return the data at 1-day granularity within the specified query time. If the span between the start time and end time is more than 24 hours, only day granularity data is supported.</li>
When the time span between StartTime and EndTime is more than 24 hours, DataInterval defaults to 1440.
                     * @param _dataInterval Time granularity of each data entry. Unit: minute. Valid values:
<li>5: 5 minutes. Return detailed data at a 5-minute granularity within the specified query time.</li>
<li>1440: Day granularity. Return the data at 1-day granularity within the specified query time. If the span between the start time and end time is more than 24 hours, only day granularity data is supported.</li>
When the time span between StartTime and EndTime is more than 24 hours, DataInterval defaults to 1440.
                     * 
                     */
                    void SetDataInterval(const uint64_t& _dataInterval);

                    /**
                     * 判断参数 DataInterval 是否已赋值
                     * @return DataInterval 是否已赋值
                     * 
                     */
                    bool DataIntervalHasBeenSet() const;

                private:

                    /**
                     * Queried metric. Valid values:
<li>Traffic: Total Traffic, in bytes.</li>
<li>Bandwidth: bandwidth, in Bps.</li>
<li>Requests: request count.</li>
<li>QUICRequests: number of QUIC requests.</li>
<li>IpVisit: number of IP visits.</li>
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Start time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in [ISO datetime format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Domain name list. Query data for up to 20 domains at a time. Usage data for all domains is overlaid by default.
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * Service area. Valid values:
<li>Chinese Mainland: Chinese mainland. </li>
<li>Asia Pacific Region 1: Asia Pacific zone 1, including Hong Kong (China), Macao (China), Singapore, Vietnam, and Thailand. </li>
<li>Asia Pacific Region 2: Asia Pacific zone 2, including Taiwan, Japan, Malaysia, Indonesia, and South Korea. </li>
<li>Asia Pacific Region 3: Asia Pacific zone 3, including the Philippines, India, Australia, and other countries and regions in Asia Pacific. </li>
<li>Middle East: Middle East. </li>
<li>Europe: Europe.</li>
<li>North America: North America.</li>
<li>South America: South America.</li>
<li>Africa: Africa.</li>
Default value: Chinese mainland.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Region where the user is located. If Area is Chinese Mainland, the value is the following region information. If Area is set to other values, ignore the Districts parameter.
<li>Beijing: Beijing.</li>
<li>Inner Mongolia: Inner Mongolia.</li>
<li>Shanxi: Shanxi.</li>
<li>Hebei: Hebei.</li>
<li>Tianjin: Tianjin.</li>
<li>Ningxia: Ningxia.</li>
<li>Shaanxi: Shaanxi.</li>
<li>Gansu: Gansu.</li>
<li>Qinghai: Qinghai.</li>
<li>Xinjiang: Xinjiang.</li>
<li>Heilongjiang: Heilongjiang.</li>
<li>Jilin: Jilin.</li>
<li>Liaoning: Liaoning.</li>
<li>Fujian: Fujian.</li>
<li>Jiangsu: Jiangsu.</li>
<li>Anhui: Anhui.</li>
<li>Shandong: Shandong.</li>
<li>Shanghai: Shanghai.</li>
<li>Zhejiang: Zhejiang.</li>
<li>Henan: Henan.</li>
<li>Hubei: Hubei.</li>
<li>Jiangxi: Jiangxi.</li>
<li>Hu’nan: Hunan.</li>
<li>Guizhou: Guizhou.</li>
<li>Yunnan: Yunnan.</li>
<li>Chongqing: Chongqing.</li>
<li>Sichuan: Sichuan.</li>
<li>Xizang: Tibet.</li>
<li>Guangdong: Guangdong.</li>
<li>Guangxi: Guangxi.</li>
<li>Hainan: Hainan.</li>
<li>Hong Kong (China), Macao (China), and Taiwan (China): Hong Kong, Macao and Taiwan.</li>
<li>Outside Chinese Mainland: overseas.</li>
<li>Other: Other.</li>
                     */
                    std::vector<std::string> m_districts;
                    bool m_districtsHasBeenSet;

                    /**
                     * User's Operator Information. When Area is Chinese Mainland, the value is the following carrier information. When Area is other values, ignore the Isps parameter.
<li>China Telecom: China Telecom.</li>
<li>China Unicom: China Unicom. </li>
<li>CERNET: China Education Network.</li>
<li>Great Wall Broadband Network: Great Wall Broadband.</li>
<li>China Mobile: China Mobile.</li>
<li>China Mobile Tietong: China Tietong.</li>
<li>ISPs outside Chinese Mainland: overseas carriers.</li>
<li>Other ISPs: Other ISPs.</li>
                     */
                    std::vector<std::string> m_isps;
                    bool m_ispsHasBeenSet;

                    /**
                     * Time granularity of each data entry. Unit: minute. Valid values:
<li>5: 5 minutes. Return detailed data at a 5-minute granularity within the specified query time.</li>
<li>1440: Day granularity. Return the data at 1-day granularity within the specified query time. If the span between the start time and end time is more than 24 hours, only day granularity data is supported.</li>
When the time span between StartTime and EndTime is more than 24 hours, DataInterval defaults to 1440.
                     */
                    uint64_t m_dataInterval;
                    bool m_dataIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_
