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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSPACEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifySpace request structure.
                */
                class ModifySpaceRequest : public AbstractModel
                {
                public:
                    ModifySpaceRequest();
                    ~ModifySpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Workspace name. Maximum length: 30 characters.
                     * @return Name Workspace name. Maximum length: 30 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Workspace name. Maximum length: 30 characters.
                     * @param _name Workspace name. Maximum length: 30 characters.
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
                     * 获取Space description. Maximum length: 150 characters.
                     * @return Description Space description. Maximum length: 150 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Space description. Maximum length: 150 characters.
                     * @param _description Space description. Maximum length: 150 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Space id
                     * @return SpaceId Space id
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置Space id
                     * @param _spaceId Space id
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取Fields to update. `Name` and `Description` supported.
                     * @return FieldMask Fields to update. `Name` and `Description` supported.
                     * 
                     */
                    FieldMask GetFieldMask() const;

                    /**
                     * 设置Fields to update. `Name` and `Description` supported.
                     * @param _fieldMask Fields to update. `Name` and `Description` supported.
                     * 
                     */
                    void SetFieldMask(const FieldMask& _fieldMask);

                    /**
                     * 判断参数 FieldMask 是否已赋值
                     * @return FieldMask 是否已赋值
                     * 
                     */
                    bool FieldMaskHasBeenSet() const;

                private:

                    /**
                     * Workspace name. Maximum length: 30 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Space description. Maximum length: 150 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Space id
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * Fields to update. `Name` and `Description` supported.
                     */
                    FieldMask m_fieldMask;
                    bool m_fieldMaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSPACEREQUEST_H_
