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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCOUNTINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * List statistics by page
                */
                class DomainCountInfo : public AbstractModel
                {
                public:
                    DomainCountInfo();
                    ~DomainCountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of eligible domains
                     * @return DomainTotal Number of eligible domains
                     * 
                     */
                    uint64_t GetDomainTotal() const;

                    /**
                     * 设置Number of eligible domains
                     * @param _domainTotal Number of eligible domains
                     * 
                     */
                    void SetDomainTotal(const uint64_t& _domainTotal);

                    /**
                     * 判断参数 DomainTotal 是否已赋值
                     * @return DomainTotal 是否已赋值
                     * 
                     */
                    bool DomainTotalHasBeenSet() const;

                    /**
                     * 获取Number of all domains that can be viewed by the user
                     * @return AllTotal Number of all domains that can be viewed by the user
                     * 
                     */
                    uint64_t GetAllTotal() const;

                    /**
                     * 设置Number of all domains that can be viewed by the user
                     * @param _allTotal Number of all domains that can be viewed by the user
                     * 
                     */
                    void SetAllTotal(const uint64_t& _allTotal);

                    /**
                     * 判断参数 AllTotal 是否已赋值
                     * @return AllTotal 是否已赋值
                     * 
                     */
                    bool AllTotalHasBeenSet() const;

                    /**
                     * 获取Number of domains added under the user account
                     * @return MineTotal Number of domains added under the user account
                     * 
                     */
                    uint64_t GetMineTotal() const;

                    /**
                     * 设置Number of domains added under the user account
                     * @param _mineTotal Number of domains added under the user account
                     * 
                     */
                    void SetMineTotal(const uint64_t& _mineTotal);

                    /**
                     * 判断参数 MineTotal 是否已赋值
                     * @return MineTotal 是否已赋值
                     * 
                     */
                    bool MineTotalHasBeenSet() const;

                    /**
                     * 获取Number of domains shared with the user
                     * @return ShareTotal Number of domains shared with the user
                     * 
                     */
                    uint64_t GetShareTotal() const;

                    /**
                     * 设置Number of domains shared with the user
                     * @param _shareTotal Number of domains shared with the user
                     * 
                     */
                    void SetShareTotal(const uint64_t& _shareTotal);

                    /**
                     * 判断参数 ShareTotal 是否已赋值
                     * @return ShareTotal 是否已赋值
                     * 
                     */
                    bool ShareTotalHasBeenSet() const;

                    /**
                     * 获取Number of paid domains
                     * @return VipTotal Number of paid domains
                     * 
                     */
                    uint64_t GetVipTotal() const;

                    /**
                     * 设置Number of paid domains
                     * @param _vipTotal Number of paid domains
                     * 
                     */
                    void SetVipTotal(const uint64_t& _vipTotal);

                    /**
                     * 判断参数 VipTotal 是否已赋值
                     * @return VipTotal 是否已赋值
                     * 
                     */
                    bool VipTotalHasBeenSet() const;

                    /**
                     * 获取Number of suspended domains
                     * @return PauseTotal Number of suspended domains
                     * 
                     */
                    uint64_t GetPauseTotal() const;

                    /**
                     * 设置Number of suspended domains
                     * @param _pauseTotal Number of suspended domains
                     * 
                     */
                    void SetPauseTotal(const uint64_t& _pauseTotal);

                    /**
                     * 判断参数 PauseTotal 是否已赋值
                     * @return PauseTotal 是否已赋值
                     * 
                     */
                    bool PauseTotalHasBeenSet() const;

                    /**
                     * 获取Number of domains with a DNS configuration error
                     * @return ErrorTotal Number of domains with a DNS configuration error
                     * 
                     */
                    uint64_t GetErrorTotal() const;

                    /**
                     * 设置Number of domains with a DNS configuration error
                     * @param _errorTotal Number of domains with a DNS configuration error
                     * 
                     */
                    void SetErrorTotal(const uint64_t& _errorTotal);

                    /**
                     * 判断参数 ErrorTotal 是否已赋值
                     * @return ErrorTotal 是否已赋值
                     * 
                     */
                    bool ErrorTotalHasBeenSet() const;

                    /**
                     * 获取Number of locked domains
                     * @return LockTotal Number of locked domains
                     * 
                     */
                    uint64_t GetLockTotal() const;

                    /**
                     * 设置Number of locked domains
                     * @param _lockTotal Number of locked domains
                     * 
                     */
                    void SetLockTotal(const uint64_t& _lockTotal);

                    /**
                     * 判断参数 LockTotal 是否已赋值
                     * @return LockTotal 是否已赋值
                     * 
                     */
                    bool LockTotalHasBeenSet() const;

                    /**
                     * 获取Number of blocked domains
                     * @return SpamTotal Number of blocked domains
                     * 
                     */
                    uint64_t GetSpamTotal() const;

                    /**
                     * 设置Number of blocked domains
                     * @param _spamTotal Number of blocked domains
                     * 
                     */
                    void SetSpamTotal(const uint64_t& _spamTotal);

                    /**
                     * 判断参数 SpamTotal 是否已赋值
                     * @return SpamTotal 是否已赋值
                     * 
                     */
                    bool SpamTotalHasBeenSet() const;

                    /**
                     * 获取Number of domains that will expire within 30 days
                     * @return VipExpire Number of domains that will expire within 30 days
                     * 
                     */
                    uint64_t GetVipExpire() const;

                    /**
                     * 设置Number of domains that will expire within 30 days
                     * @param _vipExpire Number of domains that will expire within 30 days
                     * 
                     */
                    void SetVipExpire(const uint64_t& _vipExpire);

                    /**
                     * 判断参数 VipExpire 是否已赋值
                     * @return VipExpire 是否已赋值
                     * 
                     */
                    bool VipExpireHasBeenSet() const;

                    /**
                     * 获取Number of domains shared with others
                     * @return ShareOutTotal Number of domains shared with others
                     * 
                     */
                    uint64_t GetShareOutTotal() const;

                    /**
                     * 设置Number of domains shared with others
                     * @param _shareOutTotal Number of domains shared with others
                     * 
                     */
                    void SetShareOutTotal(const uint64_t& _shareOutTotal);

                    /**
                     * 判断参数 ShareOutTotal 是否已赋值
                     * @return ShareOutTotal 是否已赋值
                     * 
                     */
                    bool ShareOutTotalHasBeenSet() const;

                    /**
                     * 获取Number of domains in the specified group
                     * @return GroupTotal Number of domains in the specified group
                     * 
                     */
                    uint64_t GetGroupTotal() const;

                    /**
                     * 设置Number of domains in the specified group
                     * @param _groupTotal Number of domains in the specified group
                     * 
                     */
                    void SetGroupTotal(const uint64_t& _groupTotal);

                    /**
                     * 判断参数 GroupTotal 是否已赋值
                     * @return GroupTotal 是否已赋值
                     * 
                     */
                    bool GroupTotalHasBeenSet() const;

                private:

                    /**
                     * Number of eligible domains
                     */
                    uint64_t m_domainTotal;
                    bool m_domainTotalHasBeenSet;

                    /**
                     * Number of all domains that can be viewed by the user
                     */
                    uint64_t m_allTotal;
                    bool m_allTotalHasBeenSet;

                    /**
                     * Number of domains added under the user account
                     */
                    uint64_t m_mineTotal;
                    bool m_mineTotalHasBeenSet;

                    /**
                     * Number of domains shared with the user
                     */
                    uint64_t m_shareTotal;
                    bool m_shareTotalHasBeenSet;

                    /**
                     * Number of paid domains
                     */
                    uint64_t m_vipTotal;
                    bool m_vipTotalHasBeenSet;

                    /**
                     * Number of suspended domains
                     */
                    uint64_t m_pauseTotal;
                    bool m_pauseTotalHasBeenSet;

                    /**
                     * Number of domains with a DNS configuration error
                     */
                    uint64_t m_errorTotal;
                    bool m_errorTotalHasBeenSet;

                    /**
                     * Number of locked domains
                     */
                    uint64_t m_lockTotal;
                    bool m_lockTotalHasBeenSet;

                    /**
                     * Number of blocked domains
                     */
                    uint64_t m_spamTotal;
                    bool m_spamTotalHasBeenSet;

                    /**
                     * Number of domains that will expire within 30 days
                     */
                    uint64_t m_vipExpire;
                    bool m_vipExpireHasBeenSet;

                    /**
                     * Number of domains shared with others
                     */
                    uint64_t m_shareOutTotal;
                    bool m_shareOutTotalHasBeenSet;

                    /**
                     * Number of domains in the specified group
                     */
                    uint64_t m_groupTotal;
                    bool m_groupTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCOUNTINFO_H_
