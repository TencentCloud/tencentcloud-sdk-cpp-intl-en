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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEDOMAINREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * AddLiveDomain request structure.
                */
                class AddLiveDomainRequest : public AbstractModel
                {
                public:
                    AddLiveDomainRequest();
                    ~AddLiveDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name.
                     * @return DomainName Domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name.
                     * @param DomainName Domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Domain name type.
0: push domain name.
1: playback domain name.
                     * @return DomainType Domain name type.
0: push domain name.
1: playback domain name.
                     */
                    uint64_t GetDomainType() const;

                    /**
                     * 设置Domain name type.
0: push domain name.
1: playback domain name.
                     * @param DomainType Domain name type.
0: push domain name.
1: playback domain name.
                     */
                    void SetDomainType(const uint64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     */
                    bool DomainTypeHasBeenSet() const;

                    /**
                     * 获取Pull domain name type:
1: Mainland China.
2: global.
3: outside Mainland China.
Default value: 1.
                     * @return PlayType Pull domain name type:
1: Mainland China.
2: global.
3: outside Mainland China.
Default value: 1.
                     */
                    uint64_t GetPlayType() const;

                    /**
                     * 设置Pull domain name type:
1: Mainland China.
2: global.
3: outside Mainland China.
Default value: 1.
                     * @param PlayType Pull domain name type:
1: Mainland China.
2: global.
3: outside Mainland China.
Default value: 1.
                     */
                    void SetPlayType(const uint64_t& _playType);

                    /**
                     * 判断参数 PlayType 是否已赋值
                     * @return PlayType 是否已赋值
                     */
                    bool PlayTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is LCB:
0: LVB,
1: LCB.
Default value: 0.
                     * @return IsDelayLive Whether it is LCB:
0: LVB,
1: LCB.
Default value: 0.
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置Whether it is LCB:
0: LVB,
1: LCB.
Default value: 0.
                     * @param IsDelayLive Whether it is LCB:
0: LVB,
1: LCB.
Default value: 0.
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     */
                    bool IsDelayLiveHasBeenSet() const;

                    /**
                     * 获取Whether it is LVB on Mini Program.
0: LVB.
1: LVB on Mini Program.
Default value: 0.
                     * @return IsMiniProgramLive Whether it is LVB on Mini Program.
0: LVB.
1: LVB on Mini Program.
Default value: 0.
                     */
                    int64_t GetIsMiniProgramLive() const;

                    /**
                     * 设置Whether it is LVB on Mini Program.
0: LVB.
1: LVB on Mini Program.
Default value: 0.
                     * @param IsMiniProgramLive Whether it is LVB on Mini Program.
0: LVB.
1: LVB on Mini Program.
Default value: 0.
                     */
                    void SetIsMiniProgramLive(const int64_t& _isMiniProgramLive);

                    /**
                     * 判断参数 IsMiniProgramLive 是否已赋值
                     * @return IsMiniProgramLive 是否已赋值
                     */
                    bool IsMiniProgramLiveHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Domain name type.
0: push domain name.
1: playback domain name.
                     */
                    uint64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * Pull domain name type:
1: Mainland China.
2: global.
3: outside Mainland China.
Default value: 1.
                     */
                    uint64_t m_playType;
                    bool m_playTypeHasBeenSet;

                    /**
                     * Whether it is LCB:
0: LVB,
1: LCB.
Default value: 0.
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * Whether it is LVB on Mini Program.
0: LVB.
1: LVB on Mini Program.
Default value: 0.
                     */
                    int64_t m_isMiniProgramLive;
                    bool m_isMiniProgramLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEDOMAINREQUEST_H_
