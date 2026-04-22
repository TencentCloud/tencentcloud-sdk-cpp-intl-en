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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEADVERTISINGLINECHARTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEADVERTISINGLINECHARTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeAdvertisingLineChart request structure.
                */
                class DescribeAdvertisingLineChartRequest : public AbstractModel
                {
                public:
                    DescribeAdvertisingLineChartRequest();
                    ~DescribeAdvertisingLineChartRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time in YYYYMMDD format
                     * @return TimeBegin Start time in YYYYMMDD format
                     * 
                     */
                    std::string GetTimeBegin() const;

                    /**
                     * 设置Start time in YYYYMMDD format
                     * @param _timeBegin Start time in YYYYMMDD format
                     * 
                     */
                    void SetTimeBegin(const std::string& _timeBegin);

                    /**
                     * 判断参数 TimeBegin 是否已赋值
                     * @return TimeBegin 是否已赋值
                     * 
                     */
                    bool TimeBeginHasBeenSet() const;

                    /**
                     * 获取Mini program appid
                     * @return MNPId Mini program appid
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program appid
                     * @param _mNPId Mini program appid
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return PlatformId Tenant ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Tenant ID
                     * @param _platformId Tenant ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取End time in YYYYMMDD format
                     * @return TimeEnd End time in YYYYMMDD format
                     * 
                     */
                    std::string GetTimeEnd() const;

                    /**
                     * 设置End time in YYYYMMDD format
                     * @param _timeEnd End time in YYYYMMDD format
                     * 
                     */
                    void SetTimeEnd(const std::string& _timeEnd);

                    /**
                     * 判断参数 TimeEnd 是否已赋值
                     * @return TimeEnd 是否已赋值
                     * 
                     */
                    bool TimeEndHasBeenSet() const;

                    /**
                     * 获取// 0 All, 2-Android, 3 iOS
                     * @return Platform // 0 All, 2-Android, 3 iOS
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置// 0 All, 2-Android, 3 iOS
                     * @param _platform // 0 All, 2-Android, 3 iOS
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取  1-BANNER  2-REWARDED
                     * @return AdUnitType   1-BANNER  2-REWARDED
                     * 
                     */
                    std::string GetAdUnitType() const;

                    /**
                     * 设置  1-BANNER  2-REWARDED
                     * @param _adUnitType   1-BANNER  2-REWARDED
                     * 
                     */
                    void SetAdUnitType(const std::string& _adUnitType);

                    /**
                     * 判断参数 AdUnitType 是否已赋值
                     * @return AdUnitType 是否已赋值
                     * 
                     */
                    bool AdUnitTypeHasBeenSet() const;

                private:

                    /**
                     * Start time in YYYYMMDD format
                     */
                    std::string m_timeBegin;
                    bool m_timeBeginHasBeenSet;

                    /**
                     * Mini program appid
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * End time in YYYYMMDD format
                     */
                    std::string m_timeEnd;
                    bool m_timeEndHasBeenSet;

                    /**
                     * // 0 All, 2-Android, 3 iOS
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     *   1-BANNER  2-REWARDED
                     */
                    std::string m_adUnitType;
                    bool m_adUnitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEADVERTISINGLINECHARTREQUEST_H_
