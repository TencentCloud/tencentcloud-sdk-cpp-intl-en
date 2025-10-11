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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYINFO_H_

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
                class DataMaskStrategyInfo : public AbstractModel
                {
                public:
                    DataMaskStrategyInfo();
                    ~DataMaskStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name
                     * @return StrategyName Policy name
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name
                     * @param _strategyName Policy name
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
                     * @return StrategyType MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
                     * @param _strategyType MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
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
                     * @return StrategyDesc Policy description
                     * 
                     */
                    std::string GetStrategyDesc() const;

                    /**
                     * 设置Policy description
                     * @param _strategyDesc Policy description
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
                     * @return Users User sub-account uin list, concatenated by ;.
                     * 
                     */
                    std::string GetUsers() const;

                    /**
                     * 设置User sub-account uin list, concatenated by ;.
                     * @param _users User sub-account uin list, concatenated by ;.
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
                     * 获取Policy ID
                     * @return StrategyId Policy ID
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Policy ID
                     * @param _strategyId Policy ID
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * Policy name
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * MASK_SHOW_FIRST_4, MASK_SHOW_LAST_4, MASK_HASH, MASK_DATE_SHOW_YEAR, MASK_NULL, MASK_DEFAULT.
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Policy description
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
                     */
                    std::string m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYINFO_H_
