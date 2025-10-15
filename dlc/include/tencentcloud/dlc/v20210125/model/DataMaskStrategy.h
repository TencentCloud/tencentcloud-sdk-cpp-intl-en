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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DMask policy information.
                */
                class DataMaskStrategy : public AbstractModel
                {
                public:
                    DataMaskStrategy();
                    ~DataMaskStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Policy ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Policy ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyId Policy ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取User AppId

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserAppId User AppId

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserAppId() const;

                    /**
                     * 设置User AppId

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userAppId User AppId

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserAppId(const std::string& _userAppId);

                    /**
                     * 判断参数 UserAppId 是否已赋值
                     * @return UserAppId 是否已赋值
                     * 
                     */
                    bool UserAppIdHasBeenSet() const;

                    /**
                     * 获取User UIN

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin User UIN

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin User UIN

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Specifies the uin of the user sub-account to operate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubAccountUin Specifies the uin of the user sub-account to operate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Specifies the uin of the user sub-account to operate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subAccountUin Specifies the uin of the user sub-account to operate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyName Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyName Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyType MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyType MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Policy description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyDesc Policy description

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyDesc() const;

                    /**
                     * 设置Policy description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyDesc Policy description

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyDesc(const std::string& _strategyDesc);

                    /**
                     * 判断参数 StrategyDesc 是否已赋值
                     * @return StrategyDesc 是否已赋值
                     * 
                     */
                    bool StrategyDescHasBeenSet() const;

                    /**
                     * 获取User group policy list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Groups User group policy list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<GroupInfo> GetGroups() const;

                    /**
                     * 设置User group policy list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groups User group policy list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroups(const std::vector<GroupInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取User sub-account uin list, concatenated by ;.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Users User sub-account uin list, concatenated by ;.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUsers() const;

                    /**
                     * 设置User sub-account uin list, concatenated by ;.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _users User sub-account uin list, concatenated by ;.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsers(const std::string& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取1: in effect; 0: deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return State 1: in effect; 0: deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置1: in effect; 0: deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _state 1: in effect; 0: deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Policy creation time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Policy creation time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Policy creation time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Policy creation time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Policy update time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Policy update time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Policy update time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Policy update time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Policy ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * User AppId

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userAppId;
                    bool m_userAppIdHasBeenSet;

                    /**
                     * User UIN

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Specifies the uin of the user sub-account to operate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Policy description

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyDesc;
                    bool m_strategyDescHasBeenSet;

                    /**
                     * User group policy list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GroupInfo> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * User sub-account uin list, concatenated by ;.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 1: in effect; 0: deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Policy creation time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Policy update time. timestamp in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGY_H_
