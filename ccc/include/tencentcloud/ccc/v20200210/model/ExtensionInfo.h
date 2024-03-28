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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_EXTENSIONINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_EXTENSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Telephone information.
                */
                class ExtensionInfo : public AbstractModel
                {
                public:
                    ExtensionInfo();
                    ~ExtensionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return SdkAppId Instance ID.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Instance ID.
                     * @param _sdkAppId Instance ID.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Extension full name.
                     * @return FullExtensionId Extension full name.
                     * 
                     */
                    std::string GetFullExtensionId() const;

                    /**
                     * 设置Extension full name.
                     * @param _fullExtensionId Extension full name.
                     * 
                     */
                    void SetFullExtensionId(const std::string& _fullExtensionId);

                    /**
                     * 判断参数 FullExtensionId 是否已赋值
                     * @return FullExtensionId 是否已赋值
                     * 
                     */
                    bool FullExtensionIdHasBeenSet() const;

                    /**
                     * 获取Extension
                     * @return ExtensionId Extension
                     * 
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 设置Extension
                     * @param _extensionId Extension
                     * 
                     */
                    void SetExtensionId(const std::string& _extensionId);

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     * 
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取Affiliated skill group list.
                     * @return SkillGroupId Affiliated skill group list.
                     * 
                     */
                    std::string GetSkillGroupId() const;

                    /**
                     * 设置Affiliated skill group list.
                     * @param _skillGroupId Affiliated skill group list.
                     * 
                     */
                    void SetSkillGroupId(const std::string& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Extension name.
                     * @return ExtensionName Extension name.
                     * 
                     */
                    std::string GetExtensionName() const;

                    /**
                     * 设置Extension name.
                     * @param _extensionName Extension name.
                     * 
                     */
                    void SetExtensionName(const std::string& _extensionName);

                    /**
                     * 判断参数 ExtensionName 是否已赋值
                     * @return ExtensionName 是否已赋值
                     * 
                     */
                    bool ExtensionNameHasBeenSet() const;

                    /**
                     * 获取Creation Time
                     * @return CreateTime Creation Time
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation Time
                     * @param _createTime Creation Time
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
                     * 获取Last modification time.
                     * @return ModifyTime Last modification time.
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置Last modification time.
                     * @param _modifyTime Last modification time.
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Telephone status (0 Offline, 100 Free, 200 Busy).
                     * @return Status Telephone status (0 Offline, 100 Free, 200 Busy).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Telephone status (0 Offline, 100 Free, 200 Busy).
                     * @param _status Telephone status (0 Offline, 100 Free, 200 Busy).
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
                     * 获取Whether to register.
                     * @return Register Whether to register.
                     * 
                     */
                    bool GetRegister() const;

                    /**
                     * 设置Whether to register.
                     * @param _register Whether to register.
                     * 
                     */
                    void SetRegister(const bool& _register);

                    /**
                     * 判断参数 Register 是否已赋值
                     * @return Register 是否已赋值
                     * 
                     */
                    bool RegisterHasBeenSet() const;

                    /**
                     * 获取Bind agent email.
                     * @return Relation Bind agent email.
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置Bind agent email.
                     * @param _relation Bind agent email.
                     * 
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                    /**
                     * 获取Bind agent name
                     * @return RelationName Bind agent name
                     * 
                     */
                    std::string GetRelationName() const;

                    /**
                     * 设置Bind agent name
                     * @param _relationName Bind agent name
                     * 
                     */
                    void SetRelationName(const std::string& _relationName);

                    /**
                     * 判断参数 RelationName 是否已赋值
                     * @return RelationName 是否已赋值
                     * 
                     */
                    bool RelationNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Extension full name.
                     */
                    std::string m_fullExtensionId;
                    bool m_fullExtensionIdHasBeenSet;

                    /**
                     * Extension
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * Affiliated skill group list.
                     */
                    std::string m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Extension name.
                     */
                    std::string m_extensionName;
                    bool m_extensionNameHasBeenSet;

                    /**
                     * Creation Time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time.
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Telephone status (0 Offline, 100 Free, 200 Busy).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to register.
                     */
                    bool m_register;
                    bool m_registerHasBeenSet;

                    /**
                     * Bind agent email.
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                    /**
                     * Bind agent name
                     */
                    std::string m_relationName;
                    bool m_relationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_EXTENSIONINFO_H_
