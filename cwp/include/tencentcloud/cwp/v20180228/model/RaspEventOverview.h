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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTOVERVIEW_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Application defense overview information
                */
                class RaspEventOverview : public AbstractModel
                {
                public:
                    RaspEventOverview();
                    ~RaspEventOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of protectable vulnerabilities
                     * @return DefenceVuls Number of protectable vulnerabilities
                     * 
                     */
                    int64_t GetDefenceVuls() const;

                    /**
                     * 设置Number of protectable vulnerabilities
                     * @param _defenceVuls Number of protectable vulnerabilities
                     * 
                     */
                    void SetDefenceVuls(const int64_t& _defenceVuls);

                    /**
                     * 判断参数 DefenceVuls 是否已赋值
                     * @return DefenceVuls 是否已赋值
                     * 
                     */
                    bool DefenceVulsHasBeenSet() const;

                    /**
                     * 获取Number of accurately prevented vulnerabilities
                     * @return PreciseDefenseVuls Number of accurately prevented vulnerabilities
                     * 
                     */
                    int64_t GetPreciseDefenseVuls() const;

                    /**
                     * 设置Number of accurately prevented vulnerabilities
                     * @param _preciseDefenseVuls Number of accurately prevented vulnerabilities
                     * 
                     */
                    void SetPreciseDefenseVuls(const int64_t& _preciseDefenseVuls);

                    /**
                     * 判断参数 PreciseDefenseVuls 是否已赋值
                     * @return PreciseDefenseVuls 是否已赋值
                     * 
                     */
                    bool PreciseDefenseVulsHasBeenSet() const;

                    /**
                     * 获取Unprocessed application defense event count
                     * @return UnhandledRaspEvents Unprocessed application defense event count
                     * 
                     */
                    int64_t GetUnhandledRaspEvents() const;

                    /**
                     * 设置Unprocessed application defense event count
                     * @param _unhandledRaspEvents Unprocessed application defense event count
                     * 
                     */
                    void SetUnhandledRaspEvents(const int64_t& _unhandledRaspEvents);

                    /**
                     * 判断参数 UnhandledRaspEvents 是否已赋值
                     * @return UnhandledRaspEvents 是否已赋值
                     * 
                     */
                    bool UnhandledRaspEventsHasBeenSet() const;

                    /**
                     * 获取Number of unprocessed Java Webshell scan events
                     * @return UnhandledMemShellScanEvents Number of unprocessed Java Webshell scan events
                     * 
                     */
                    int64_t GetUnhandledMemShellScanEvents() const;

                    /**
                     * 设置Number of unprocessed Java Webshell scan events
                     * @param _unhandledMemShellScanEvents Number of unprocessed Java Webshell scan events
                     * 
                     */
                    void SetUnhandledMemShellScanEvents(const int64_t& _unhandledMemShellScanEvents);

                    /**
                     * 判断参数 UnhandledMemShellScanEvents 是否已赋值
                     * @return UnhandledMemShellScanEvents 是否已赋值
                     * 
                     */
                    bool UnhandledMemShellScanEventsHasBeenSet() const;

                    /**
                     * 获取Number of unprocessed memory shell injection events
                     * @return UnhandledMemShellInjectEvents Number of unprocessed memory shell injection events
                     * 
                     */
                    int64_t GetUnhandledMemShellInjectEvents() const;

                    /**
                     * 设置Number of unprocessed memory shell injection events
                     * @param _unhandledMemShellInjectEvents Number of unprocessed memory shell injection events
                     * 
                     */
                    void SetUnhandledMemShellInjectEvents(const int64_t& _unhandledMemShellInjectEvents);

                    /**
                     * 判断参数 UnhandledMemShellInjectEvents 是否已赋值
                     * @return UnhandledMemShellInjectEvents 是否已赋值
                     * 
                     */
                    bool UnhandledMemShellInjectEventsHasBeenSet() const;

                    /**
                     * 获取Daily event handling trend
                     * @return UnHandledEvents Daily event handling trend
                     * 
                     */
                    std::vector<int64_t> GetUnHandledEvents() const;

                    /**
                     * 设置Daily event handling trend
                     * @param _unHandledEvents Daily event handling trend
                     * 
                     */
                    void SetUnHandledEvents(const std::vector<int64_t>& _unHandledEvents);

                    /**
                     * 判断参数 UnHandledEvents 是否已赋值
                     * @return UnHandledEvents 是否已赋值
                     * 
                     */
                    bool UnHandledEventsHasBeenSet() const;

                    /**
                     * 获取Daily vulnerability detect event trend
                     * @return RaspAttackCounts Daily vulnerability detect event trend
                     * 
                     */
                    std::vector<int64_t> GetRaspAttackCounts() const;

                    /**
                     * 设置Daily vulnerability detect event trend
                     * @param _raspAttackCounts Daily vulnerability detect event trend
                     * 
                     */
                    void SetRaspAttackCounts(const std::vector<int64_t>& _raspAttackCounts);

                    /**
                     * 判断参数 RaspAttackCounts 是否已赋值
                     * @return RaspAttackCounts 是否已赋值
                     * 
                     */
                    bool RaspAttackCountsHasBeenSet() const;

                    /**
                     * 获取Daily vulnerability defense event trend
                     * @return RaspDefendCounts Daily vulnerability defense event trend
                     * 
                     */
                    std::vector<int64_t> GetRaspDefendCounts() const;

                    /**
                     * 设置Daily vulnerability defense event trend
                     * @param _raspDefendCounts Daily vulnerability defense event trend
                     * 
                     */
                    void SetRaspDefendCounts(const std::vector<int64_t>& _raspDefendCounts);

                    /**
                     * 判断参数 RaspDefendCounts 是否已赋值
                     * @return RaspDefendCounts 是否已赋值
                     * 
                     */
                    bool RaspDefendCountsHasBeenSet() const;

                    /**
                     * 获取Daily Java Webshell detect event trend
                     * @return MemShellAttackCounts Daily Java Webshell detect event trend
                     * 
                     */
                    std::vector<int64_t> GetMemShellAttackCounts() const;

                    /**
                     * 设置Daily Java Webshell detect event trend
                     * @param _memShellAttackCounts Daily Java Webshell detect event trend
                     * 
                     */
                    void SetMemShellAttackCounts(const std::vector<int64_t>& _memShellAttackCounts);

                    /**
                     * 判断参数 MemShellAttackCounts 是否已赋值
                     * @return MemShellAttackCounts 是否已赋值
                     * 
                     */
                    bool MemShellAttackCountsHasBeenSet() const;

                    /**
                     * 获取Daily Java Webshell defense event trends
                     * @return MemShellDefendCounts Daily Java Webshell defense event trends
                     * 
                     */
                    std::vector<int64_t> GetMemShellDefendCounts() const;

                    /**
                     * 设置Daily Java Webshell defense event trends
                     * @param _memShellDefendCounts Daily Java Webshell defense event trends
                     * 
                     */
                    void SetMemShellDefendCounts(const std::vector<int64_t>& _memShellDefendCounts);

                    /**
                     * 判断参数 MemShellDefendCounts 是否已赋值
                     * @return MemShellDefendCounts 是否已赋值
                     * 
                     */
                    bool MemShellDefendCountsHasBeenSet() const;

                    /**
                     * 获取Date
                     * @return Date Date
                     * 
                     */
                    std::vector<std::string> GetDate() const;

                    /**
                     * 设置Date
                     * @param _date Date
                     * 
                     */
                    void SetDate(const std::vector<std::string>& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Enable RASP protection switch number of assets
                     * @return ProtectAssetOpenCount Enable RASP protection switch number of assets
                     * 
                     */
                    uint64_t GetProtectAssetOpenCount() const;

                    /**
                     * 设置Enable RASP protection switch number of assets
                     * @param _protectAssetOpenCount Enable RASP protection switch number of assets
                     * 
                     */
                    void SetProtectAssetOpenCount(const uint64_t& _protectAssetOpenCount);

                    /**
                     * 判断参数 ProtectAssetOpenCount 是否已赋值
                     * @return ProtectAssetOpenCount 是否已赋值
                     * 
                     */
                    bool ProtectAssetOpenCountHasBeenSet() const;

                    /**
                     * 获取Total number of assets
                     * @return ProtectAssetCount Total number of assets
                     * 
                     */
                    uint64_t GetProtectAssetCount() const;

                    /**
                     * 设置Total number of assets
                     * @param _protectAssetCount Total number of assets
                     * 
                     */
                    void SetProtectAssetCount(const uint64_t& _protectAssetCount);

                    /**
                     * 判断参数 ProtectAssetCount 是否已赋值
                     * @return ProtectAssetCount 是否已赋值
                     * 
                     */
                    bool ProtectAssetCountHasBeenSet() const;

                    /**
                     * 获取Number of asset protection bound to the flagship edition
                     * @return UltimateAssetCount Number of asset protection bound to the flagship edition
                     * 
                     */
                    uint64_t GetUltimateAssetCount() const;

                    /**
                     * 设置Number of asset protection bound to the flagship edition
                     * @param _ultimateAssetCount Number of asset protection bound to the flagship edition
                     * 
                     */
                    void SetUltimateAssetCount(const uint64_t& _ultimateAssetCount);

                    /**
                     * 判断参数 UltimateAssetCount 是否已赋值
                     * @return UltimateAssetCount 是否已赋值
                     * 
                     */
                    bool UltimateAssetCountHasBeenSet() const;

                    /**
                     * 获取Number of assets bound to the Prioritized Protection package
                     * @return RaspAssetCount Number of assets bound to the Prioritized Protection package
                     * 
                     */
                    uint64_t GetRaspAssetCount() const;

                    /**
                     * 设置Number of assets bound to the Prioritized Protection package
                     * @param _raspAssetCount Number of assets bound to the Prioritized Protection package
                     * 
                     */
                    void SetRaspAssetCount(const uint64_t& _raspAssetCount);

                    /**
                     * 判断参数 RaspAssetCount 是否已赋值
                     * @return RaspAssetCount 是否已赋值
                     * 
                     */
                    bool RaspAssetCountHasBeenSet() const;

                    /**
                     * 获取Number of unauthorized assets
                     * @return NotProtectAssetCount Number of unauthorized assets
                     * 
                     */
                    uint64_t GetNotProtectAssetCount() const;

                    /**
                     * 设置Number of unauthorized assets
                     * @param _notProtectAssetCount Number of unauthorized assets
                     * 
                     */
                    void SetNotProtectAssetCount(const uint64_t& _notProtectAssetCount);

                    /**
                     * 判断参数 NotProtectAssetCount 是否已赋值
                     * @return NotProtectAssetCount 是否已赋值
                     * 
                     */
                    bool NotProtectAssetCountHasBeenSet() const;

                    /**
                     * 获取Pending events count in the last 7 days
                     * @return RecentUnhandledEvents Pending events count in the last 7 days
                     * 
                     */
                    int64_t GetRecentUnhandledEvents() const;

                    /**
                     * 设置Pending events count in the last 7 days
                     * @param _recentUnhandledEvents Pending events count in the last 7 days
                     * 
                     */
                    void SetRecentUnhandledEvents(const int64_t& _recentUnhandledEvents);

                    /**
                     * 判断参数 RecentUnhandledEvents 是否已赋值
                     * @return RecentUnhandledEvents 是否已赋值
                     * 
                     */
                    bool RecentUnhandledEventsHasBeenSet() const;

                    /**
                     * 获取Total Number of Successful Defenses
                     * @return RaspDefendCount Total Number of Successful Defenses
                     * 
                     */
                    int64_t GetRaspDefendCount() const;

                    /**
                     * 设置Total Number of Successful Defenses
                     * @param _raspDefendCount Total Number of Successful Defenses
                     * 
                     */
                    void SetRaspDefendCount(const int64_t& _raspDefendCount);

                    /**
                     * 判断参数 RaspDefendCount 是否已赋值
                     * @return RaspDefendCount 是否已赋值
                     * 
                     */
                    bool RaspDefendCountHasBeenSet() const;

                private:

                    /**
                     * Number of protectable vulnerabilities
                     */
                    int64_t m_defenceVuls;
                    bool m_defenceVulsHasBeenSet;

                    /**
                     * Number of accurately prevented vulnerabilities
                     */
                    int64_t m_preciseDefenseVuls;
                    bool m_preciseDefenseVulsHasBeenSet;

                    /**
                     * Unprocessed application defense event count
                     */
                    int64_t m_unhandledRaspEvents;
                    bool m_unhandledRaspEventsHasBeenSet;

                    /**
                     * Number of unprocessed Java Webshell scan events
                     */
                    int64_t m_unhandledMemShellScanEvents;
                    bool m_unhandledMemShellScanEventsHasBeenSet;

                    /**
                     * Number of unprocessed memory shell injection events
                     */
                    int64_t m_unhandledMemShellInjectEvents;
                    bool m_unhandledMemShellInjectEventsHasBeenSet;

                    /**
                     * Daily event handling trend
                     */
                    std::vector<int64_t> m_unHandledEvents;
                    bool m_unHandledEventsHasBeenSet;

                    /**
                     * Daily vulnerability detect event trend
                     */
                    std::vector<int64_t> m_raspAttackCounts;
                    bool m_raspAttackCountsHasBeenSet;

                    /**
                     * Daily vulnerability defense event trend
                     */
                    std::vector<int64_t> m_raspDefendCounts;
                    bool m_raspDefendCountsHasBeenSet;

                    /**
                     * Daily Java Webshell detect event trend
                     */
                    std::vector<int64_t> m_memShellAttackCounts;
                    bool m_memShellAttackCountsHasBeenSet;

                    /**
                     * Daily Java Webshell defense event trends
                     */
                    std::vector<int64_t> m_memShellDefendCounts;
                    bool m_memShellDefendCountsHasBeenSet;

                    /**
                     * Date
                     */
                    std::vector<std::string> m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Enable RASP protection switch number of assets
                     */
                    uint64_t m_protectAssetOpenCount;
                    bool m_protectAssetOpenCountHasBeenSet;

                    /**
                     * Total number of assets
                     */
                    uint64_t m_protectAssetCount;
                    bool m_protectAssetCountHasBeenSet;

                    /**
                     * Number of asset protection bound to the flagship edition
                     */
                    uint64_t m_ultimateAssetCount;
                    bool m_ultimateAssetCountHasBeenSet;

                    /**
                     * Number of assets bound to the Prioritized Protection package
                     */
                    uint64_t m_raspAssetCount;
                    bool m_raspAssetCountHasBeenSet;

                    /**
                     * Number of unauthorized assets
                     */
                    uint64_t m_notProtectAssetCount;
                    bool m_notProtectAssetCountHasBeenSet;

                    /**
                     * Pending events count in the last 7 days
                     */
                    int64_t m_recentUnhandledEvents;
                    bool m_recentUnhandledEventsHasBeenSet;

                    /**
                     * Total Number of Successful Defenses
                     */
                    int64_t m_raspDefendCount;
                    bool m_raspDefendCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTOVERVIEW_H_
