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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPDETAILINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Users.h>
#include <tencentcloud/dlc/v20210125/model/Policys.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Details about working groups
                */
                class WorkGroupDetailInfo : public AbstractModel
                {
                public:
                    WorkGroupDetailInfo();
                    ~WorkGroupDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Working group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkGroupId Working group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置Working group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workGroupId Working group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取Working group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkGroupName Working group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkGroupName() const;

                    /**
                     * 设置Working group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workGroupName Working group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkGroupName(const std::string& _workGroupName);

                    /**
                     * 判断参数 WorkGroupName 是否已赋值
                     * @return WorkGroupName 是否已赋值
                     * 
                     */
                    bool WorkGroupNameHasBeenSet() const;

                    /**
                     * 获取Types of information included. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Types of information included. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Types of information included. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Types of information included. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Collection of users bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserInfo Collection of users bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Users GetUserInfo() const;

                    /**
                     * 设置Collection of users bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userInfo Collection of users bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserInfo(const Users& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取Collection of data permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataPolicyInfo Collection of data permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Policys GetDataPolicyInfo() const;

                    /**
                     * 设置Collection of data permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataPolicyInfo Collection of data permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataPolicyInfo(const Policys& _dataPolicyInfo);

                    /**
                     * 判断参数 DataPolicyInfo 是否已赋值
                     * @return DataPolicyInfo 是否已赋值
                     * 
                     */
                    bool DataPolicyInfoHasBeenSet() const;

                    /**
                     * 获取Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnginePolicyInfo Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Policys GetEnginePolicyInfo() const;

                    /**
                     * 设置Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enginePolicyInfo Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnginePolicyInfo(const Policys& _enginePolicyInfo);

                    /**
                     * 判断参数 EnginePolicyInfo 是否已赋值
                     * @return EnginePolicyInfo 是否已赋值
                     * 
                     */
                    bool EnginePolicyInfoHasBeenSet() const;

                    /**
                     * 获取Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkGroupDescription Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkGroupDescription() const;

                    /**
                     * 设置Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workGroupDescription Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkGroupDescription(const std::string& _workGroupDescription);

                    /**
                     * 判断参数 WorkGroupDescription 是否已赋值
                     * @return WorkGroupDescription 是否已赋值
                     * 
                     */
                    bool WorkGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取Collection of information about filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowFilterInfo Collection of information about filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Policys GetRowFilterInfo() const;

                    /**
                     * 设置Collection of information about filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowFilterInfo Collection of information about filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRowFilterInfo(const Policys& _rowFilterInfo);

                    /**
                     * 判断参数 RowFilterInfo 是否已赋值
                     * @return RowFilterInfo 是否已赋值
                     * 
                     */
                    bool RowFilterInfoHasBeenSet() const;

                private:

                    /**
                     * Working group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * Working group name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workGroupName;
                    bool m_workGroupNameHasBeenSet;

                    /**
                     * Types of information included. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Collection of users bound to working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Users m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * Collection of data permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Policys m_dataPolicyInfo;
                    bool m_dataPolicyInfoHasBeenSet;

                    /**
                     * Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Policys m_enginePolicyInfo;
                    bool m_enginePolicyInfoHasBeenSet;

                    /**
                     * Working group description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workGroupDescription;
                    bool m_workGroupDescriptionHasBeenSet;

                    /**
                     * Collection of information about filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Policys m_rowFilterInfo;
                    bool m_rowFilterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPDETAILINFO_H_
