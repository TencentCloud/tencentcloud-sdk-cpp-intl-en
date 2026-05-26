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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMANAGERDETAILDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMANAGERDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/MNPDetailI18nVO.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini program details.
                */
                class DescribeMNPManagerDetailData : public AbstractModel
                {
                public:
                    DescribeMNPManagerDetailData();
                    ~DescribeMNPManagerDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program category.
                     * @return MNPType Mini program category.
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program category.
                     * @param _mNPType Mini program category.
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
                     * 获取Mini program appid.
                     * @return MNPId Mini program appid.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program appid.
                     * @param _mNPId Mini program appid.
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
                     * 获取Mini program name.
                     * @return MNPName Mini program name.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name.
                     * @param _mNPName Mini program name.
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
                     * 获取Mini program icon.
                     * @return MNPIcon Mini program icon.
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program icon.
                     * @param _mNPIcon Mini program icon.
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
                     * 获取Mini program introduction.
                     * @return MNPIntro Mini program introduction.
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Mini program introduction.
                     * @param _mNPIntro Mini program introduction.
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
                     * 获取Mini program description.
                     * @return MNPDesc Mini program description.
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置Mini program description.
                     * @param _mNPDesc Mini program description.
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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Creator.
                     * @return CreateUser Creator.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator.
                     * @param _createUser Creator.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Access status. Valid values: 1: not connected; 2: connected.
                     * @return AccessStatus Access status. Valid values: 1: not connected; 2: connected.
                     * 
                     */
                    int64_t GetAccessStatus() const;

                    /**
                     * 设置Access status. Valid values: 1: not connected; 2: connected.
                     * @param _accessStatus Access status. Valid values: 1: not connected; 2: connected.
                     * 
                     */
                    void SetAccessStatus(const int64_t& _accessStatus);

                    /**
                     * 判断参数 AccessStatus 是否已赋值
                     * @return AccessStatus 是否已赋值
                     * 
                     */
                    bool AccessStatusHasBeenSet() const;

                    /**
                     * 获取Team name.
                     * @return TeamName Team name.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name.
                     * @param _teamName Team name.
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取Team ID.
                     * @return TeamId Team ID.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID.
                     * @param _teamId Team ID.
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Mini program available status. Valid values: 1: Available; 2: Removed.
                     * @return Status Mini program available status. Valid values: 1: Available; 2: Removed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Mini program available status. Valid values: 1: Available; 2: Removed.
                     * @param _status Mini program available status. Valid values: 1: Available; 2: Removed.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The mini program name and description in multiple languages.
                     * @return I18nList The mini program name and description in multiple languages.
                     * 
                     */
                    std::vector<MNPDetailI18nVO> GetI18nList() const;

                    /**
                     * 设置The mini program name and description in multiple languages.
                     * @param _i18nList The mini program name and description in multiple languages.
                     * 
                     */
                    void SetI18nList(const std::vector<MNPDetailI18nVO>& _i18nList);

                    /**
                     * 判断参数 I18nList 是否已赋值
                     * @return I18nList 是否已赋值
                     * 
                     */
                    bool I18nListHasBeenSet() const;

                private:

                    /**
                     * Mini program category.
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Mini program appid.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program name.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program icon.
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Mini program introduction.
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * Mini program description.
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Access status. Valid values: 1: not connected; 2: connected.
                     */
                    int64_t m_accessStatus;
                    bool m_accessStatusHasBeenSet;

                    /**
                     * Team name.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Team ID.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Mini program available status. Valid values: 1: Available; 2: Removed.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The mini program name and description in multiple languages.
                     */
                    std::vector<MNPDetailI18nVO> m_i18nList;
                    bool m_i18nListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPMANAGERDETAILDATA_H_
