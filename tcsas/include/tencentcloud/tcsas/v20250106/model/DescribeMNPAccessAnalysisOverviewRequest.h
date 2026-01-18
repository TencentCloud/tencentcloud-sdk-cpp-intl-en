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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPACCESSANALYSISOVERVIEWREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPACCESSANALYSISOVERVIEWREQUEST_H_

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
                * DescribeMNPAccessAnalysisOverview request structure.
                */
                class DescribeMNPAccessAnalysisOverviewRequest : public AbstractModel
                {
                public:
                    DescribeMNPAccessAnalysisOverviewRequest();
                    ~DescribeMNPAccessAnalysisOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time: 20251123 (example)
                     * @return TimeBegin Start time: 20251123 (example)
                     * 
                     */
                    int64_t GetTimeBegin() const;

                    /**
                     * 设置Start time: 20251123 (example)
                     * @param _timeBegin Start time: 20251123 (example)
                     * 
                     */
                    void SetTimeBegin(const int64_t& _timeBegin);

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
                     * 获取End time: 20251123 (example)
                     * @return TimeEnd End time: 20251123 (example)
                     * 
                     */
                    uint64_t GetTimeEnd() const;

                    /**
                     * 设置End time: 20251123 (example)
                     * @param _timeEnd End time: 20251123 (example)
                     * 
                     */
                    void SetTimeEnd(const uint64_t& _timeEnd);

                    /**
                     * 判断参数 TimeEnd 是否已赋值
                     * @return TimeEnd 是否已赋值
                     * 
                     */
                    bool TimeEndHasBeenSet() const;

                    /**
                     * 获取1 Production data, 0 Non-production data
                     * @return ProdData 1 Production data, 0 Non-production data
                     * 
                     */
                    int64_t GetProdData() const;

                    /**
                     * 设置1 Production data, 0 Non-production data
                     * @param _prodData 1 Production data, 0 Non-production data
                     * 
                     */
                    void SetProdData(const int64_t& _prodData);

                    /**
                     * 判断参数 ProdData 是否已赋值
                     * @return ProdData 是否已赋值
                     * 
                     */
                    bool ProdDataHasBeenSet() const;

                    /**
                     * 获取Operating system: 0 All, 2 Android, 3 iOS
                     * @return Platform Operating system: 0 All, 2 Android, 3 iOS
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置Operating system: 0 All, 2 Android, 3 iOS
                     * @param _platform Operating system: 0 All, 2 Android, 3 iOS
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * Start time: 20251123 (example)
                     */
                    int64_t m_timeBegin;
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
                     * End time: 20251123 (example)
                     */
                    uint64_t m_timeEnd;
                    bool m_timeEndHasBeenSet;

                    /**
                     * 1 Production data, 0 Non-production data
                     */
                    int64_t m_prodData;
                    bool m_prodDataHasBeenSet;

                    /**
                     * Operating system: 0 All, 2 Android, 3 iOS
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPACCESSANALYSISOVERVIEWREQUEST_H_
