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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_APPLICATIONMNPRELINFORESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_APPLICATIONMNPRELINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Information of bound applications
                */
                class ApplicationMNPRelInfoResp : public AbstractModel
                {
                public:
                    ApplicationMNPRelInfoResp();
                    ~ApplicationMNPRelInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPIcon Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPIcon Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPIcon(const std::string& _mNPIcon);

                    /**
                     * 判断参数 MNPIcon 是否已赋值
                     * @return MNPIcon 是否已赋值
                     * 
                     */
                    bool MNPIconHasBeenSet() const;

                    /**
                     * 获取Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPType Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPType Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPType(const std::string& _mNPType);

                    /**
                     * 判断参数 MNPType 是否已赋值
                     * @return MNPType 是否已赋值
                     * 
                     */
                    bool MNPTypeHasBeenSet() const;

                    /**
                     * 获取Introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPIntro Introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPIntro Introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPIntro(const std::string& _mNPIntro);

                    /**
                     * 判断参数 MNPIntro 是否已赋值
                     * @return MNPIntro 是否已赋值
                     * 
                     */
                    bool MNPIntroHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPDesc Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPDesc Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPDesc(const std::string& _mNPDesc);

                    /**
                     * 判断参数 MNPDesc 是否已赋值
                     * @return MNPDesc 是否已赋值
                     * 
                     */
                    bool MNPDescHasBeenSet() const;

                    /**
                     * 获取Effectiveness. 1: Not effective 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectStatus Effectiveness. 1: Not effective 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEffectStatus() const;

                    /**
                     * 设置Effectiveness. 1: Not effective 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectStatus Effectiveness. 1: Not effective 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEffectStatus(const int64_t& _effectStatus);

                    /**
                     * 判断参数 EffectStatus 是否已赋值
                     * @return EffectStatus 是否已赋值
                     * 
                     */
                    bool EffectStatusHasBeenSet() const;

                    /**
                     * 获取Effective version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EffectMNPVersion Effective version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEffectMNPVersion() const;

                    /**
                     * 设置Effective version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _effectMNPVersion Effective version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEffectMNPVersion(const std::string& _effectMNPVersion);

                    /**
                     * 判断参数 EffectMNPVersion 是否已赋值
                     * @return EffectMNPVersion 是否已赋值
                     * 
                     */
                    bool EffectMNPVersionHasBeenSet() const;

                    /**
                     * 获取Online version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPOnlineVersion Online version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPOnlineVersion() const;

                    /**
                     * 设置Online version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPOnlineVersion Online version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPOnlineVersion(const std::string& _mNPOnlineVersion);

                    /**
                     * 判断参数 MNPOnlineVersion 是否已赋值
                     * @return MNPOnlineVersion 是否已赋值
                     * 
                     */
                    bool MNPOnlineVersionHasBeenSet() const;

                    /**
                     * 获取0: Not released; 1: Released
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OnlineStatus 0: Not released; 1: Released
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置0: Not released; 1: Released
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _onlineStatus 0: Not released; 1: Released
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Mini program type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * Effectiveness. 1: Not effective 2: Effective
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_effectStatus;
                    bool m_effectStatusHasBeenSet;

                    /**
                     * Effective version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_effectMNPVersion;
                    bool m_effectMNPVersionHasBeenSet;

                    /**
                     * Online version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPOnlineVersion;
                    bool m_mNPOnlineVersionHasBeenSet;

                    /**
                     * 0: Not released; 1: Released
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_APPLICATIONMNPRELINFORESP_H_
