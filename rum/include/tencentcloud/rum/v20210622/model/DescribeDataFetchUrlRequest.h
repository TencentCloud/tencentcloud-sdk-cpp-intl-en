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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAFETCHURLREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAFETCHURLREQUEST_H_

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
                * DescribeDataFetchUrl request structure.
                */
                class DescribeDataFetchUrlRequest : public AbstractModel
                {
                public:
                    DescribeDataFetchUrlRequest();
                    ~DescribeDataFetchUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取`allcount`: performance view; `day`: 14-day data; `count40x`: HTTP status codes 40X view; `count50x`: HTTP status codes 50X view; `count5xand4x`: HTTP status codes 40X∑50X view; `top`: top resources view; `nettype`/`version`/`platform`/`isp`/`region`/`device`/`browser`/`ext1`/`ext2`/`ext3`/`ret`/`status`/`from`/`url`/`env`: network/platform view; version view; device view; ISP view; region view; browser view; custom view, and so on.
                     * @return Type `allcount`: performance view; `day`: 14-day data; `count40x`: HTTP status codes 40X view; `count50x`: HTTP status codes 50X view; `count5xand4x`: HTTP status codes 40X∑50X view; `top`: top resources view; `nettype`/`version`/`platform`/`isp`/`region`/`device`/`browser`/`ext1`/`ext2`/`ext3`/`ret`/`status`/`from`/`url`/`env`: network/platform view; version view; device view; ISP view; region view; browser view; custom view, and so on.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置`allcount`: performance view; `day`: 14-day data; `count40x`: HTTP status codes 40X view; `count50x`: HTTP status codes 50X view; `count5xand4x`: HTTP status codes 40X∑50X view; `top`: top resources view; `nettype`/`version`/`platform`/`isp`/`region`/`device`/`browser`/`ext1`/`ext2`/`ext3`/`ret`/`status`/`from`/`url`/`env`: network/platform view; version view; device view; ISP view; region view; browser view; custom view, and so on.
                     * @param _type `allcount`: performance view; `day`: 14-day data; `count40x`: HTTP status codes 40X view; `count50x`: HTTP status codes 50X view; `count5xand4x`: HTTP status codes 40X∑50X view; `top`: top resources view; `nettype`/`version`/`platform`/`isp`/`region`/`device`/`browser`/`ext1`/`ext2`/`ext3`/`ret`/`status`/`from`/`url`/`env`: network/platform view; version view; device view; ISP view; region view; browser view; custom view, and so on.
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Project ID
                     * @return ID Project ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID
                     * @param _iD Project ID
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
                     * 获取Custom 2
                     * @return ExtSecond Custom 2
                     * 
                     */
                    std::string GetExtSecond() const;

                    /**
                     * 设置Custom 2
                     * @param _extSecond Custom 2
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
                     * 获取Browser engine
                     * @return Engine Browser engine
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Browser engine
                     * @param _engine Browser engine
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
                     * 获取ISP
                     * @return Isp ISP
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置ISP
                     * @param _isp ISP
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
                     * 获取Source page
                     * @return From Source page
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Source page
                     * @param _from Source page
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
                     * 获取Log level
                     * @return Level Log level
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Log level
                     * @param _level Log level
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
                     * 获取Brand
                     * @return Brand Brand
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置Brand
                     * @param _brand Brand
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
                     * 获取Region
                     * @return Area Region
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region
                     * @param _area Region
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
                     * 获取Version
                     * @return VersionNum Version
                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置Version
                     * @param _versionNum Version
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
                     * 获取Platform
                     * @return Platform Platform
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Platform
                     * @param _platform Platform
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
                     * 获取Custom 3
                     * @return ExtThird Custom 3
                     * 
                     */
                    std::string GetExtThird() const;

                    /**
                     * 设置Custom 3
                     * @param _extThird Custom 3
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
                     * 获取Custom 1
                     * @return ExtFirst Custom 1
                     * 
                     */
                    std::string GetExtFirst() const;

                    /**
                     * 设置Custom 1
                     * @param _extFirst Custom 1
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
                     * 获取Network type
                     * @return NetType Network type
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type
                     * @param _netType Network type
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
                     * 获取Model
                     * @return Device Model
                     * 
                     */
                    std::string GetDevice() const;

                    /**
                     * 设置Model
                     * @param _device Model
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
                     * 获取Whether it is outside the Chinese mainland
                     * @return IsAbroad Whether it is outside the Chinese mainland
                     * 
                     */
                    std::string GetIsAbroad() const;

                    /**
                     * 设置Whether it is outside the Chinese mainland
                     * @param _isAbroad Whether it is outside the Chinese mainland
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
                     * 获取OS
                     * @return Os OS
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置OS
                     * @param _os OS
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
                     * 获取Browser
                     * @return Browser Browser
                     * 
                     */
                    std::string GetBrowser() const;

                    /**
                     * 设置Browser
                     * @param _browser Browser
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
                     * 获取Duration calculation method
                     * @return CostType Duration calculation method
                     * 
                     */
                    std::string GetCostType() const;

                    /**
                     * 设置Duration calculation method
                     * @param _costType Duration calculation method
                     * 
                     */
                    void SetCostType(const std::string& _costType);

                    /**
                     * 判断参数 CostType 是否已赋值
                     * @return CostType 是否已赋值
                     * 
                     */
                    bool CostTypeHasBeenSet() const;

                    /**
                     * 获取Source
                     * @return Url Source
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Source
                     * @param _url Source
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
                     * 获取Environment
                     * @return Env Environment
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置Environment
                     * @param _env Environment
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
                     * 获取HTTP status code.
                     * @return Status HTTP status code.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置HTTP status code.
                     * @param _status HTTP status code.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取retcode
                     * @return Ret retcode
                     * 
                     */
                    std::string GetRet() const;

                    /**
                     * 设置retcode
                     * @param _ret retcode
                     * 
                     */
                    void SetRet(const std::string& _ret);

                    /**
                     * 判断参数 Ret 是否已赋值
                     * @return Ret 是否已赋值
                     * 
                     */
                    bool RetHasBeenSet() const;

                    /**
                     * 获取Network status
                     * @return NetStatus Network status
                     * 
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 设置Network status
                     * @param _netStatus Network status
                     * 
                     */
                    void SetNetStatus(const std::string& _netStatus);

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     * 
                     */
                    bool NetStatusHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * `allcount`: performance view; `day`: 14-day data; `count40x`: HTTP status codes 40X view; `count50x`: HTTP status codes 50X view; `count5xand4x`: HTTP status codes 40X∑50X view; `top`: top resources view; `nettype`/`version`/`platform`/`isp`/`region`/`device`/`browser`/`ext1`/`ext2`/`ext3`/`ret`/`status`/`from`/`url`/`env`: network/platform view; version view; device view; ISP view; region view; browser view; custom view, and so on.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * End time
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Custom 2
                     */
                    std::string m_extSecond;
                    bool m_extSecondHasBeenSet;

                    /**
                     * Browser engine
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * ISP
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * Source page
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Log level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Brand
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * Platform
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Custom 3
                     */
                    std::string m_extThird;
                    bool m_extThirdHasBeenSet;

                    /**
                     * Custom 1
                     */
                    std::string m_extFirst;
                    bool m_extFirstHasBeenSet;

                    /**
                     * Network type
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Model
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * Whether it is outside the Chinese mainland
                     */
                    std::string m_isAbroad;
                    bool m_isAbroadHasBeenSet;

                    /**
                     * OS
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * Browser
                     */
                    std::string m_browser;
                    bool m_browserHasBeenSet;

                    /**
                     * Duration calculation method
                     */
                    std::string m_costType;
                    bool m_costTypeHasBeenSet;

                    /**
                     * Source
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Environment
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * HTTP status code.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * retcode
                     */
                    std::string m_ret;
                    bool m_retHasBeenSet;

                    /**
                     * Network status
                     */
                    std::string m_netStatus;
                    bool m_netStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAFETCHURLREQUEST_H_
