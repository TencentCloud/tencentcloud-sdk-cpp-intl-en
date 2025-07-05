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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_INPUTINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_INPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/InputSettingInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Input information.
                */
                class InputInfo : public AbstractModel
                {
                public:
                    InputInfo();
                    ~InputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input region.
                     * @return Region Input region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Input region.
                     * @param _region Input region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Input ID.
                     * @return Id Input ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Input ID.
                     * @param _id Input ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Input name.
                     * @return Name Input name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Input name.
                     * @param _name Input name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Input type.
                     * @return Type Input type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input type.
                     * @param _type Input type.
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
                     * 获取Array of security groups associated with input.
                     * @return SecurityGroupIds Array of security groups associated with input.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Array of security groups associated with input.
                     * @param _securityGroupIds Array of security groups associated with input.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Array of channels associated with input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AttachedChannels Array of channels associated with input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAttachedChannels() const;

                    /**
                     * 设置Array of channels associated with input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _attachedChannels Array of channels associated with input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttachedChannels(const std::vector<std::string>& _attachedChannels);

                    /**
                     * 判断参数 AttachedChannels 是否已赋值
                     * @return AttachedChannels 是否已赋值
                     * 
                     */
                    bool AttachedChannelsHasBeenSet() const;

                    /**
                     * 获取Input configuration array.
                     * @return InputSettings Input configuration array.
                     * 
                     */
                    std::vector<InputSettingInfo> GetInputSettings() const;

                    /**
                     * 设置Input configuration array.
                     * @param _inputSettings Input configuration array.
                     * 
                     */
                    void SetInputSettings(const std::vector<InputSettingInfo>& _inputSettings);

                    /**
                     * 判断参数 InputSettings 是否已赋值
                     * @return InputSettings 是否已赋值
                     * 
                     */
                    bool InputSettingsHasBeenSet() const;

                private:

                    /**
                     * Input region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Input ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Input name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Input type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Array of security groups associated with input.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Array of channels associated with input.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_attachedChannels;
                    bool m_attachedChannelsHasBeenSet;

                    /**
                     * Input configuration array.
                     */
                    std::vector<InputSettingInfo> m_inputSettings;
                    bool m_inputSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTINFO_H_
