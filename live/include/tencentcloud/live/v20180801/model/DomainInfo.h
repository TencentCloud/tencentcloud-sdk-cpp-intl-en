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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * LVB domain name information
                */
                class DomainInfo : public AbstractModel
                {
                public:
                    DomainInfo();
                    ~DomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取LVB domain name.
                     * @return Name LVB domain name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置LVB domain name.
                     * @param Name LVB domain name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Domain name type:
0: push.
1: playback.
                     * @return Type Domain name type:
0: push.
1: playback.
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Domain name type:
0: push.
1: playback.
                     * @param Type Domain name type:
0: push.
1: playback.
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Domain name status:
0: deactivated.
1: activated.
                     * @return Status Domain name status:
0: deactivated.
1: activated.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Domain name status:
0: deactivated.
1: activated.
                     * @param Status Domain name status:
0: deactivated.
1: activated.
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param CreateTime Creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether there is a CNAME record pointing to a fixed rule domain name:
0: no.
1: yes.
                     * @return BCName Whether there is a CNAME record pointing to a fixed rule domain name:
0: no.
1: yes.
                     */
                    uint64_t GetBCName() const;

                    /**
                     * 设置Whether there is a CNAME record pointing to a fixed rule domain name:
0: no.
1: yes.
                     * @param BCName Whether there is a CNAME record pointing to a fixed rule domain name:
0: no.
1: yes.
                     */
                    void SetBCName(const uint64_t& _bCName);

                    /**
                     * 判断参数 BCName 是否已赋值
                     * @return BCName 是否已赋值
                     */
                    bool BCNameHasBeenSet() const;

                    /**
                     * 获取Domain name corresponding to CNAME record.
                     * @return TargetDomain Domain name corresponding to CNAME record.
                     */
                    std::string GetTargetDomain() const;

                    /**
                     * 设置Domain name corresponding to CNAME record.
                     * @param TargetDomain Domain name corresponding to CNAME record.
                     */
                    void SetTargetDomain(const std::string& _targetDomain);

                    /**
                     * 判断参数 TargetDomain 是否已赋值
                     * @return TargetDomain 是否已赋值
                     */
                    bool TargetDomainHasBeenSet() const;

                    /**
                     * 获取Playback region. This parameter is valid only if `Type` is 1.
1: in Mainland China.
2: global.
3: outside Mainland China.
                     * @return PlayType Playback region. This parameter is valid only if `Type` is 1.
1: in Mainland China.
2: global.
3: outside Mainland China.
                     */
                    int64_t GetPlayType() const;

                    /**
                     * 设置Playback region. This parameter is valid only if `Type` is 1.
1: in Mainland China.
2: global.
3: outside Mainland China.
                     * @param PlayType Playback region. This parameter is valid only if `Type` is 1.
1: in Mainland China.
2: global.
3: outside Mainland China.
                     */
                    void SetPlayType(const int64_t& _playType);

                    /**
                     * 判断参数 PlayType 是否已赋值
                     * @return PlayType 是否已赋值
                     */
                    bool PlayTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is LCB:
0: LVB.
1: LCB.
                     * @return IsDelayLive Whether it is LCB:
0: LVB.
1: LCB.
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置Whether it is LCB:
0: LVB.
1: LCB.
                     * @param IsDelayLive Whether it is LCB:
0: LVB.
1: LCB.
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     */
                    bool IsDelayLiveHasBeenSet() const;

                    /**
                     * 获取Information of currently used CNAME record.
                     * @return CurrentCName Information of currently used CNAME record.
                     */
                    std::string GetCurrentCName() const;

                    /**
                     * 设置Information of currently used CNAME record.
                     * @param CurrentCName Information of currently used CNAME record.
                     */
                    void SetCurrentCName(const std::string& _currentCName);

                    /**
                     * 判断参数 CurrentCName 是否已赋值
                     * @return CurrentCName 是否已赋值
                     */
                    bool CurrentCNameHasBeenSet() const;

                    /**
                     * 获取Disused parameter, which can be ignored.
                     * @return RentTag Disused parameter, which can be ignored.
                     */
                    int64_t GetRentTag() const;

                    /**
                     * 设置Disused parameter, which can be ignored.
                     * @param RentTag Disused parameter, which can be ignored.
                     */
                    void SetRentTag(const int64_t& _rentTag);

                    /**
                     * 判断参数 RentTag 是否已赋值
                     * @return RentTag 是否已赋值
                     */
                    bool RentTagHasBeenSet() const;

                    /**
                     * 获取Disused parameter, which can be ignored.
                     * @return RentExpireTime Disused parameter, which can be ignored.
                     */
                    std::string GetRentExpireTime() const;

                    /**
                     * 设置Disused parameter, which can be ignored.
                     * @param RentExpireTime Disused parameter, which can be ignored.
                     */
                    void SetRentExpireTime(const std::string& _rentExpireTime);

                    /**
                     * 判断参数 RentExpireTime 是否已赋值
                     * @return RentExpireTime 是否已赋值
                     */
                    bool RentExpireTimeHasBeenSet() const;

                    /**
                     * 获取0: LVB.
1: LVB on Mini Program.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsMiniProgramLive 0: LVB.
1: LVB on Mini Program.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsMiniProgramLive() const;

                    /**
                     * 设置0: LVB.
1: LVB on Mini Program.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsMiniProgramLive 0: LVB.
1: LVB on Mini Program.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsMiniProgramLive(const int64_t& _isMiniProgramLive);

                    /**
                     * 判断参数 IsMiniProgramLive 是否已赋值
                     * @return IsMiniProgramLive 是否已赋值
                     */
                    bool IsMiniProgramLiveHasBeenSet() const;

                private:

                    /**
                     * LVB domain name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Domain name type:
0: push.
1: playback.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Domain name status:
0: deactivated.
1: activated.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether there is a CNAME record pointing to a fixed rule domain name:
0: no.
1: yes.
                     */
                    uint64_t m_bCName;
                    bool m_bCNameHasBeenSet;

                    /**
                     * Domain name corresponding to CNAME record.
                     */
                    std::string m_targetDomain;
                    bool m_targetDomainHasBeenSet;

                    /**
                     * Playback region. This parameter is valid only if `Type` is 1.
1: in Mainland China.
2: global.
3: outside Mainland China.
                     */
                    int64_t m_playType;
                    bool m_playTypeHasBeenSet;

                    /**
                     * Whether it is LCB:
0: LVB.
1: LCB.
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * Information of currently used CNAME record.
                     */
                    std::string m_currentCName;
                    bool m_currentCNameHasBeenSet;

                    /**
                     * Disused parameter, which can be ignored.
                     */
                    int64_t m_rentTag;
                    bool m_rentTagHasBeenSet;

                    /**
                     * Disused parameter, which can be ignored.
                     */
                    std::string m_rentExpireTime;
                    bool m_rentExpireTimeHasBeenSet;

                    /**
                     * 0: LVB.
1: LVB on Mini Program.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isMiniProgramLive;
                    bool m_isMiniProgramLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DOMAININFO_H_
