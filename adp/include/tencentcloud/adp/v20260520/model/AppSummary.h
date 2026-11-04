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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppOperation.h>
#include <tencentcloud/adp/v20260520/model/AppStatusInfo.h>
#include <tencentcloud/adp/v20260520/model/AppSubStatusInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Application abstract - Application information returned by the list query
                */
                class AppSummary : public AbstractModel
                {
                public:
                    AppSummary();
                    ~AppSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Application mode. Enumeration values: 1: standard mode, 2: Agent mode, 3: single workflow mode, 4: ClawAgent mode</p>
                     * @return AppMode <p>Application mode. Enumeration values: 1: standard mode, 2: Agent mode, 3: single workflow mode, 4: ClawAgent mode</p>
                     * 
                     */
                    int64_t GetAppMode() const;

                    /**
                     * 设置<p>Application mode. Enumeration values: 1: standard mode, 2: Agent mode, 3: single workflow mode, 4: ClawAgent mode</p>
                     * @param _appMode <p>Application mode. Enumeration values: 1: standard mode, 2: Agent mode, 3: single workflow mode, 4: ClawAgent mode</p>
                     * 
                     */
                    void SetAppMode(const int64_t& _appMode);

                    /**
                     * 判断参数 AppMode 是否已赋值
                     * @return AppMode 是否已赋值
                     * 
                     */
                    bool AppModeHasBeenSet() const;

                    /**
                     * 获取<p>Application avatar</p>
                     * @return Avatar <p>Application avatar</p>
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置<p>Application avatar</p>
                     * @param _avatar <p>Application avatar</p>
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取<p>Application name.</p>
                     * @return Name <p>Application name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Application name.</p>
                     * @param _name <p>Application name.</p>
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
                     * 获取<p>Operation information</p>
                     * @return OperationInfo <p>Operation information</p>
                     * 
                     */
                    AppOperation GetOperationInfo() const;

                    /**
                     * 设置<p>Operation information</p>
                     * @param _operationInfo <p>Operation information</p>
                     * 
                     */
                    void SetOperationInfo(const AppOperation& _operationInfo);

                    /**
                     * 判断参数 OperationInfo 是否已赋值
                     * @return OperationInfo 是否已赋值
                     * 
                     */
                    bool OperationInfoHasBeenSet() const;

                    /**
                     * 获取<p>Status information</p>
                     * @return Status <p>Status information</p>
                     * 
                     */
                    AppStatusInfo GetStatus() const;

                    /**
                     * 设置<p>Status information</p>
                     * @param _status <p>Status information</p>
                     * 
                     */
                    void SetStatus(const AppStatusInfo& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Sub-status information</p>
                     * @return SubStatus <p>Sub-status information</p>
                     * 
                     */
                    AppSubStatusInfo GetSubStatus() const;

                    /**
                     * 设置<p>Sub-status information</p>
                     * @param _subStatus <p>Sub-status information</p>
                     * 
                     */
                    void SetSubStatus(const AppSubStatusInfo& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取<p>Resource operation permissions</p>
                     * @return PermissionIdList <p>Resource operation permissions</p>
                     * 
                     */
                    std::vector<std::string> GetPermissionIdList() const;

                    /**
                     * 设置<p>Resource operation permissions</p>
                     * @param _permissionIdList <p>Resource operation permissions</p>
                     * 
                     */
                    void SetPermissionIdList(const std::vector<std::string>& _permissionIdList);

                    /**
                     * 判断参数 PermissionIdList 是否已赋值
                     * @return PermissionIdList 是否已赋值
                     * 
                     */
                    bool PermissionIdListHasBeenSet() const;

                    /**
                     * 获取<p>Application description information</p>
                     * @return Description <p>Application description information</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Application description information</p>
                     * @param _description <p>Application description information</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Application mode. Enumeration values: 1: standard mode, 2: Agent mode, 3: single workflow mode, 4: ClawAgent mode</p>
                     */
                    int64_t m_appMode;
                    bool m_appModeHasBeenSet;

                    /**
                     * <p>Application avatar</p>
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * <p>Application name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Operation information</p>
                     */
                    AppOperation m_operationInfo;
                    bool m_operationInfoHasBeenSet;

                    /**
                     * <p>Status information</p>
                     */
                    AppStatusInfo m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Sub-status information</p>
                     */
                    AppSubStatusInfo m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * <p>Resource operation permissions</p>
                     */
                    std::vector<std::string> m_permissionIdList;
                    bool m_permissionIdListHasBeenSet;

                    /**
                     * <p>Application description information</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSUMMARY_H_
