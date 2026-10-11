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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEROLEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>
#include <tencentcloud/databuddy/v20260715/model/RoleMetaData.h>
#include <tencentcloud/databuddy/v20260715/model/RolePermission.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Console role information (external standard version, decoupled from internal Role)
                */
                class ConsoleRoleInfo : public AbstractModel
                {
                public:
                    ConsoleRoleInfo();
                    ~ConsoleRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Basic information about the role
                     * @return BasicInfo Basic information about the role
                     * 
                     */
                    RoleBasicInfo GetBasicInfo() const;

                    /**
                     * 设置Basic information about the role
                     * @param _basicInfo Basic information about the role
                     * 
                     */
                    void SetBasicInfo(const RoleBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     * 
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取Role meta-information.
                     * @return MetaData Role meta-information.
                     * 
                     */
                    RoleMetaData GetMetaData() const;

                    /**
                     * 设置Role meta-information.
                     * @param _metaData Role meta-information.
                     * 
                     */
                    void SetMetaData(const RoleMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取Role permission
                     * @return Permissions Role permission
                     * 
                     */
                    std::vector<RolePermission> GetPermissions() const;

                    /**
                     * 设置Role permission
                     * @param _permissions Role permission
                     * 
                     */
                    void SetPermissions(const std::vector<RolePermission>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * Basic information about the role
                     */
                    RoleBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * Role meta-information.
                     */
                    RoleMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Role permission
                     */
                    std::vector<RolePermission> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CONSOLEROLEINFO_H_
