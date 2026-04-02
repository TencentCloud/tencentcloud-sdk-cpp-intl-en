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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPVURLSTATISTICSV2REQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPVURLSTATISTICSV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeDataPvUrlStatisticsV2 request structure.
                */
                class DescribeDataPvUrlStatisticsV2Request : public AbstractModel
                {
                public:
                    DescribeDataPvUrlStatisticsV2Request();
                    ~DescribeDataPvUrlStatisticsV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取allcount: performance view. day: 14-day data. vp: performance. ckuv: UV. ckpv: PV. condition: condition list. nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/: network platform view, version view, device view, ISP view, region view, browser view, ext1 view, and so on.
                     * @return Type allcount: performance view. day: 14-day data. vp: performance. ckuv: UV. ckpv: PV. condition: condition list. nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/: network platform view, version view, device view, ISP view, region view, browser view, ext1 view, and so on.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置allcount: performance view. day: 14-day data. vp: performance. ckuv: UV. ckpv: PV. condition: condition list. nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/: network platform view, version view, device view, ISP view, region view, browser view, ext1 view, and so on.
                     * @param _type allcount: performance view. day: 14-day data. vp: performance. ckuv: UV. ckpv: PV. condition: condition list. nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/: network platform view, version view, device view, ISP view, region view, browser view, ext1 view, and so on.
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
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ID Project ID.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID.
                     * @param _iD Project ID.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Custom parameter 2.
                     * @return ExtSecond Custom parameter 2.
                     * 
                     */
                    std::string GetExtSecond() const;

                    /**
                     * 设置Custom parameter 2.
                     * @param _extSecond Custom parameter 2.
                     * 
                     */
                    void SetExtSecond(const std::string& _extSecond);

                    /**
                     * 判断参数 ExtSecond 是否已赋值
                     * @return ExtSecond 是否已赋值
                     * 
                     */
                    bool ExtSecondHasBeenSet() const;

                    /**
                     * 获取Browser engine.
                     * @return Engine Browser engine.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Browser engine.
                     * @param _engine Browser engine.
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Internet service provider.
                     * @return Isp Internet service provider.
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置Internet service provider.
                     * @param _isp Internet service provider.
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取Source page.
                     * @return From Source page.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Source page.
                     * @param _from Source page.
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Log level.
                     * @return Level Log level.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Log level.
                     * @param _level Log level.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Brand.
                     * @return Brand Brand.
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置Brand.
                     * @param _brand Brand.
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Area Region.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region.
                     * @param _area Region.
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
                     * 获取Version.
                     * @return VersionNum Version.
                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置Version.
                     * @param _versionNum Version.
                     * 
                     */
                    void SetVersionNum(const std::string& _versionNum);

                    /**
                     * 判断参数 VersionNum 是否已赋值
                     * @return VersionNum 是否已赋值
                     * 
                     */
                    bool VersionNumHasBeenSet() const;

                    /**
                     * 获取Platform.
                     * @return Platform Platform.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Platform.
                     * @param _platform Platform.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Custom parameter 3.
                     * @return ExtThird Custom parameter 3.
                     * 
                     */
                    std::string GetExtThird() const;

                    /**
                     * 设置Custom parameter 3.
                     * @param _extThird Custom parameter 3.
                     * 
                     */
                    void SetExtThird(const std::string& _extThird);

                    /**
                     * 判断参数 ExtThird 是否已赋值
                     * @return ExtThird 是否已赋值
                     * 
                     */
                    bool ExtThirdHasBeenSet() const;

                    /**
                     * 获取Custom parameter 1.
                     * @return ExtFirst Custom parameter 1.
                     * 
                     */
                    std::string GetExtFirst() const;

                    /**
                     * 设置Custom parameter 1.
                     * @param _extFirst Custom parameter 1.
                     * 
                     */
                    void SetExtFirst(const std::string& _extFirst);

                    /**
                     * 判断参数 ExtFirst 是否已赋值
                     * @return ExtFirst 是否已赋值
                     * 
                     */
                    bool ExtFirstHasBeenSet() const;

                    /**
                     * 获取Network type (1, 2, 3, 4, 5, or 100). 1 indicates Wi-Fi. 2 indicates 2G. 3 indicates 3G. 4 indicates 4G. 5 indicates 5G. 6 indicates 6G. 100 indicates unknown.
                     * @return NetType Network type (1, 2, 3, 4, 5, or 100). 1 indicates Wi-Fi. 2 indicates 2G. 3 indicates 3G. 4 indicates 4G. 5 indicates 5G. 6 indicates 6G. 100 indicates unknown.
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type (1, 2, 3, 4, 5, or 100). 1 indicates Wi-Fi. 2 indicates 2G. 3 indicates 3G. 4 indicates 4G. 5 indicates 5G. 6 indicates 6G. 100 indicates unknown.
                     * @param _netType Network type (1, 2, 3, 4, 5, or 100). 1 indicates Wi-Fi. 2 indicates 2G. 3 indicates 3G. 4 indicates 4G. 5 indicates 5G. 6 indicates 6G. 100 indicates unknown.
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Model.
                     * @return Device Model.
                     * 
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置Model.
                     * @param _device Model.
                     * 
                     */
                    void SetDevice(const std::string& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取Indicates whether to query global data. 1 indicates global. 0 indicates not global. This is empty by default, which means to query all data.
                     * @return IsAbroad Indicates whether to query global data. 1 indicates global. 0 indicates not global. This is empty by default, which means to query all data.
                     * 
                     */
                    std::string GetIsAbroad() const;

                    /**
                     * 设置Indicates whether to query global data. 1 indicates global. 0 indicates not global. This is empty by default, which means to query all data.
                     * @param _isAbroad Indicates whether to query global data. 1 indicates global. 0 indicates not global. This is empty by default, which means to query all data.
                     * 
                     */
                    void SetIsAbroad(const std::string& _isAbroad);

                    /**
                     * 判断参数 IsAbroad 是否已赋值
                     * @return IsAbroad 是否已赋值
                     * 
                     */
                    bool IsAbroadHasBeenSet() const;

                    /**
                     * 获取Operating system.
                     * @return Os Operating system.
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置Operating system.
                     * @param _os Operating system.
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取Browser.
                     * @return Browser Browser.
                     * 
                     */
                    std::string GetBrowser() const;

                    /**
                     * 设置Browser.
                     * @param _browser Browser.
                     * 
                     */
                    void SetBrowser(const std::string& _browser);

                    /**
                     * 判断参数 Browser 是否已赋值
                     * @return Browser 是否已赋值
                     * 
                     */
                    bool BrowserHasBeenSet() const;

                    /**
                     * 获取Environment.
                     * @return Env Environment.
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置Environment.
                     * @param _env Environment.
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取Parameter value enumeration for group by. 1: 1 minute. 2: 5 minutes. 3: 30 minutes. 4: 1 hour.
 5:1d
                     * @return GroupByType Parameter value enumeration for group by. 1: 1 minute. 2: 5 minutes. 3: 30 minutes. 4: 1 hour.
 5:1d
                     * 
                     */
                    int64_t GetGroupByType() const;

                    /**
                     * 设置Parameter value enumeration for group by. 1: 1 minute. 2: 5 minutes. 3: 30 minutes. 4: 1 hour.
 5:1d
                     * @param _groupByType Parameter value enumeration for group by. 1: 1 minute. 2: 5 minutes. 3: 30 minutes. 4: 1 hour.
 5:1d
                     * 
                     */
                    void SetGroupByType(const int64_t& _groupByType);

                    /**
                     * 判断参数 GroupByType 是否已赋值
                     * @return GroupByType 是否已赋值
                     * 
                     */
                    bool GroupByTypeHasBeenSet() const;

                    /**
                     * 获取1: Queries Zhiyan.
0: Uses the old logic, which is removed. Do not use this value.
                     * @return IsNewData 1: Queries Zhiyan.
0: Uses the old logic, which is removed. Do not use this value.
                     * 
                     */
                    int64_t GetIsNewData() const;

                    /**
                     * 设置1: Queries Zhiyan.
0: Uses the old logic, which is removed. Do not use this value.
                     * @param _isNewData 1: Queries Zhiyan.
0: Uses the old logic, which is removed. Do not use this value.
                     * 
                     */
                    void SetIsNewData(const int64_t& _isNewData);

                    /**
                     * 判断参数 IsNewData 是否已赋值
                     * @return IsNewData 是否已赋值
                     * 
                     */
                    bool IsNewDataHasBeenSet() const;

                    /**
                     * 获取Custom parameter 4.
                     * @return ExtFourth Custom parameter 4.
                     * 
                     */
                    std::string GetExtFourth() const;

                    /**
                     * 设置Custom parameter 4.
                     * @param _extFourth Custom parameter 4.
                     * 
                     */
                    void SetExtFourth(const std::string& _extFourth);

                    /**
                     * 判断参数 ExtFourth 是否已赋值
                     * @return ExtFourth 是否已赋值
                     * 
                     */
                    bool ExtFourthHasBeenSet() const;

                    /**
                     * 获取Custom parameter 5.
                     * @return ExtFifth Custom parameter 5.
                     * 
                     */
                    std::string GetExtFifth() const;

                    /**
                     * 设置Custom parameter 5.
                     * @param _extFifth Custom parameter 5.
                     * 
                     */
                    void SetExtFifth(const std::string& _extFifth);

                    /**
                     * 判断参数 ExtFifth 是否已赋值
                     * @return ExtFifth 是否已赋值
                     * 
                     */
                    bool ExtFifthHasBeenSet() const;

                    /**
                     * 获取Custom parameter 6.
                     * @return ExtSixth Custom parameter 6.
                     * 
                     */
                    std::string GetExtSixth() const;

                    /**
                     * 设置Custom parameter 6.
                     * @param _extSixth Custom parameter 6.
                     * 
                     */
                    void SetExtSixth(const std::string& _extSixth);

                    /**
                     * 判断参数 ExtSixth 是否已赋值
                     * @return ExtSixth 是否已赋值
                     * 
                     */
                    bool ExtSixthHasBeenSet() const;

                    /**
                     * 获取Custom parameter 7.
                     * @return ExtSeventh Custom parameter 7.
                     * 
                     */
                    std::string GetExtSeventh() const;

                    /**
                     * 设置Custom parameter 7.
                     * @param _extSeventh Custom parameter 7.
                     * 
                     */
                    void SetExtSeventh(const std::string& _extSeventh);

                    /**
                     * 判断参数 ExtSeventh 是否已赋值
                     * @return ExtSeventh 是否已赋值
                     * 
                     */
                    bool ExtSeventhHasBeenSet() const;

                    /**
                     * 获取Custom parameter 8.
                     * @return ExtEighth Custom parameter 8.
                     * 
                     */
                    std::string GetExtEighth() const;

                    /**
                     * 设置Custom parameter 8.
                     * @param _extEighth Custom parameter 8.
                     * 
                     */
                    void SetExtEighth(const std::string& _extEighth);

                    /**
                     * 判断参数 ExtEighth 是否已赋值
                     * @return ExtEighth 是否已赋值
                     * 
                     */
                    bool ExtEighthHasBeenSet() const;

                    /**
                     * 获取Custom parameter 9.
                     * @return ExtNinth Custom parameter 9.
                     * 
                     */
                    std::string GetExtNinth() const;

                    /**
                     * 设置Custom parameter 9.
                     * @param _extNinth Custom parameter 9.
                     * 
                     */
                    void SetExtNinth(const std::string& _extNinth);

                    /**
                     * 判断参数 ExtNinth 是否已赋值
                     * @return ExtNinth 是否已赋值
                     * 
                     */
                    bool ExtNinthHasBeenSet() const;

                    /**
                     * 获取Custom parameter 10.
                     * @return ExtTenth Custom parameter 10.
                     * 
                     */
                    std::string GetExtTenth() const;

                    /**
                     * 设置Custom parameter 10.
                     * @param _extTenth Custom parameter 10.
                     * 
                     */
                    void SetExtTenth(const std::string& _extTenth);

                    /**
                     * 判断参数 ExtTenth 是否已赋值
                     * @return ExtTenth 是否已赋值
                     * 
                     */
                    bool ExtTenthHasBeenSet() const;

                    /**
                     * 获取Time period.
                     * @return Granularity Time period.
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 设置Time period.
                     * @param _granularity Time period.
                     * 
                     */
                    void SetGranularity(const std::string& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * Start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * allcount: performance view. day: 14-day data. vp: performance. ckuv: UV. ckpv: PV. condition: condition list. nettype/version/platform/isp/region/device/browser/ext1/ext2/ext3/ret/status/from/url/env/: network platform view, version view, device view, ISP view, region view, browser view, ext1 view, and so on.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Custom parameter 2.
                     */
                    std::string m_extSecond;
                    bool m_extSecondHasBeenSet;

                    /**
                     * Browser engine.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Internet service provider.
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * Source page.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Log level.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Brand.
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Version.
                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * Platform.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Custom parameter 3.
                     */
                    std::string m_extThird;
                    bool m_extThirdHasBeenSet;

                    /**
                     * Custom parameter 1.
                     */
                    std::string m_extFirst;
                    bool m_extFirstHasBeenSet;

                    /**
                     * Network type (1, 2, 3, 4, 5, or 100). 1 indicates Wi-Fi. 2 indicates 2G. 3 indicates 3G. 4 indicates 4G. 5 indicates 5G. 6 indicates 6G. 100 indicates unknown.
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Model.
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * Indicates whether to query global data. 1 indicates global. 0 indicates not global. This is empty by default, which means to query all data.
                     */
                    std::string m_isAbroad;
                    bool m_isAbroadHasBeenSet;

                    /**
                     * Operating system.
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * Browser.
                     */
                    std::string m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * Environment.
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * Parameter value enumeration for group by. 1: 1 minute. 2: 5 minutes. 3: 30 minutes. 4: 1 hour.
 5:1d
                     */
                    int64_t m_groupByType;
                    bool m_groupByTypeHasBeenSet;

                    /**
                     * 1: Queries Zhiyan.
0: Uses the old logic, which is removed. Do not use this value.
                     */
                    int64_t m_isNewData;
                    bool m_isNewDataHasBeenSet;

                    /**
                     * Custom parameter 4.
                     */
                    std::string m_extFourth;
                    bool m_extFourthHasBeenSet;

                    /**
                     * Custom parameter 5.
                     */
                    std::string m_extFifth;
                    bool m_extFifthHasBeenSet;

                    /**
                     * Custom parameter 6.
                     */
                    std::string m_extSixth;
                    bool m_extSixthHasBeenSet;

                    /**
                     * Custom parameter 7.
                     */
                    std::string m_extSeventh;
                    bool m_extSeventhHasBeenSet;

                    /**
                     * Custom parameter 8.
                     */
                    std::string m_extEighth;
                    bool m_extEighthHasBeenSet;

                    /**
                     * Custom parameter 9.
                     */
                    std::string m_extNinth;
                    bool m_extNinthHasBeenSet;

                    /**
                     * Custom parameter 10.
                     */
                    std::string m_extTenth;
                    bool m_extTenthHasBeenSet;

                    /**
                     * Time period.
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAPVURLSTATISTICSV2REQUEST_H_
