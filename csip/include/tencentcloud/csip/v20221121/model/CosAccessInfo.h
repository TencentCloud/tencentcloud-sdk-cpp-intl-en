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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSACCESSINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos access permission information
                */
                class CosAccessInfo : public AbstractModel
                {
                public:
                    CosAccessInfo();
                    ~CosAccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access account uin
                     * @return AccessUin Access account uin
                     * 
                     */
                    std::string GetAccessUin() const;

                    /**
                     * 设置Access account uin
                     * @param _accessUin Access account uin
                     * 
                     */
                    void SetAccessUin(const std::string& _accessUin);

                    /**
                     * 判断参数 AccessUin 是否已赋值
                     * @return AccessUin 是否已赋值
                     * 
                     */
                    bool AccessUinHasBeenSet() const;

                    /**
                     * 获取Accessible account uid
                     * @return AccessUid Accessible account uid
                     * 
                     */
                    std::string GetAccessUid() const;

                    /**
                     * 设置Accessible account uid
                     * @param _accessUid Accessible account uid
                     * 
                     */
                    void SetAccessUid(const std::string& _accessUid);

                    /**
                     * 判断参数 AccessUid 是否已赋值
                     * @return AccessUid 是否已赋值
                     * 
                     */
                    bool AccessUidHasBeenSet() const;

                    /**
                     * 获取Nickname
                     * @return NickName Nickname
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Nickname
                     * @param _nickName Nickname
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Identifier 
1 Root account
2 Sub-account
                     * @return Identity Identifier 
1 Root account
2 Sub-account
                     * 
                     */
                    int64_t GetIdentity() const;

                    /**
                     * 设置Identifier 
1 Root account
2 Sub-account
                     * @param _identity Identifier 
1 Root account
2 Sub-account
                     * 
                     */
                    void SetIdentity(const int64_t& _identity);

                    /**
                     * 判断参数 Identity 是否已赋值
                     * @return Identity 是否已赋值
                     * 
                     */
                    bool IdentityHasBeenSet() const;

                    /**
                     * 获取Root Account Name
                     * @return MainNickName Root Account Name
                     * 
                     */
                    std::string GetMainNickName() const;

                    /**
                     * 设置Root Account Name
                     * @param _mainNickName Root Account Name
                     * 
                     */
                    void SetMainNickName(const std::string& _mainNickName);

                    /**
                     * 判断参数 MainNickName 是否已赋值
                     * @return MainNickName 是否已赋值
                     * 
                     */
                    bool MainNickNameHasBeenSet() const;

                    /**
                     * 获取List of accessible AKs
                     * @return AkList List of accessible AKs
                     * 
                     */
                    std::vector<std::string> GetAkList() const;

                    /**
                     * 设置List of accessible AKs
                     * @param _akList List of accessible AKs
                     * 
                     */
                    void SetAkList(const std::vector<std::string>& _akList);

                    /**
                     * 判断参数 AkList 是否已赋值
                     * @return AkList 是否已赋值
                     * 
                     */
                    bool AkListHasBeenSet() const;

                    /**
                     * 获取Number of accessible permissions
                     * @return CamPolicyCount Number of accessible permissions
                     * 
                     */
                    int64_t GetCamPolicyCount() const;

                    /**
                     * 设置Number of accessible permissions
                     * @param _camPolicyCount Number of accessible permissions
                     * 
                     */
                    void SetCamPolicyCount(const int64_t& _camPolicyCount);

                    /**
                     * 判断参数 CamPolicyCount 是否已赋值
                     * @return CamPolicyCount 是否已赋值
                     * 
                     */
                    bool CamPolicyCountHasBeenSet() const;

                    /**
                     * 获取Last modified Unix timestamp in milliseconds
                     * @return UpdateTime Last modified Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Last modified Unix timestamp in milliseconds
                     * @param _updateTime Last modified Unix timestamp in milliseconds
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Access account uin
                     */
                    std::string m_accessUin;
                    bool m_accessUinHasBeenSet;

                    /**
                     * Accessible account uid
                     */
                    std::string m_accessUid;
                    bool m_accessUidHasBeenSet;

                    /**
                     * Nickname
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Identifier 
1 Root account
2 Sub-account
                     */
                    int64_t m_identity;
                    bool m_identityHasBeenSet;

                    /**
                     * Root Account Name
                     */
                    std::string m_mainNickName;
                    bool m_mainNickNameHasBeenSet;

                    /**
                     * List of accessible AKs
                     */
                    std::vector<std::string> m_akList;
                    bool m_akListHasBeenSet;

                    /**
                     * Number of accessible permissions
                     */
                    int64_t m_camPolicyCount;
                    bool m_camPolicyCountHasBeenSet;

                    /**
                     * Last modified Unix timestamp in milliseconds
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSACCESSINFO_H_
