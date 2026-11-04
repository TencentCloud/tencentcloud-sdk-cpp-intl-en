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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATERELEASEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATERELEASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppShareAccessControl.h>
#include <tencentcloud/adp/v20260520/model/CorpShareConfig.h>
#include <tencentcloud/adp/v20260520/model/PortalShareConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateRelease request structure.
                */
                class CreateReleaseRequest : public AbstractModel
                {
                public:
                    CreateReleaseRequest();
                    ~CreateReleaseRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>App sharing access control configuration</p>
                     * @return AppShareAccessControl <p>App sharing access control configuration</p>
                     * 
                     */
                    AppShareAccessControl GetAppShareAccessControl() const;

                    /**
                     * 设置<p>App sharing access control configuration</p>
                     * @param _appShareAccessControl <p>App sharing access control configuration</p>
                     * 
                     */
                    void SetAppShareAccessControl(const AppShareAccessControl& _appShareAccessControl);

                    /**
                     * 判断参数 AppShareAccessControl 是否已赋值
                     * @return AppShareAccessControl 是否已赋值
                     * 
                     */
                    bool AppShareAccessControlHasBeenSet() const;

                    /**
                     * 获取<p>Channel ID list</p>
                     * @return ChannelIdList <p>Channel ID list</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIdList() const;

                    /**
                     * 设置<p>Channel ID list</p>
                     * @param _channelIdList <p>Channel ID list</p>
                     * 
                     */
                    void SetChannelIdList(const std::vector<std::string>& _channelIdList);

                    /**
                     * 判断参数 ChannelIdList 是否已赋值
                     * @return ChannelIdList 是否已赋值
                     * 
                     */
                    bool ChannelIdListHasBeenSet() const;

                    /**
                     * 获取<p>Business shared configuration</p>
                     * @return CorpShareConfig <p>Business shared configuration</p>
                     * 
                     */
                    CorpShareConfig GetCorpShareConfig() const;

                    /**
                     * 设置<p>Business shared configuration</p>
                     * @param _corpShareConfig <p>Business shared configuration</p>
                     * 
                     */
                    void SetCorpShareConfig(const CorpShareConfig& _corpShareConfig);

                    /**
                     * 判断参数 CorpShareConfig 是否已赋值
                     * @return CorpShareConfig 是否已赋值
                     * 
                     */
                    bool CorpShareConfigHasBeenSet() const;

                    /**
                     * 获取<p>Release description.</p>
                     * @return Description <p>Release description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Release description.</p>
                     * @param _description <p>Release description.</p>
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
                     * 获取<p>Batch change the debug-only knowledge in the default knowledge base to "effective in both debug and release"</p>
                     * @return IsDevToRelease <p>Batch change the debug-only knowledge in the default knowledge base to "effective in both debug and release"</p>
                     * 
                     */
                    bool GetIsDevToRelease() const;

                    /**
                     * 设置<p>Batch change the debug-only knowledge in the default knowledge base to "effective in both debug and release"</p>
                     * @param _isDevToRelease <p>Batch change the debug-only knowledge in the default knowledge base to "effective in both debug and release"</p>
                     * 
                     */
                    void SetIsDevToRelease(const bool& _isDevToRelease);

                    /**
                     * 判断参数 IsDevToRelease 是否已赋值
                     * @return IsDevToRelease 是否已赋值
                     * 
                     */
                    bool IsDevToReleaseHasBeenSet() const;

                    /**
                     * 获取<p>Whether to synchronize publishing as an application template</p>
                     * @return IsPublishAsTemplate <p>Whether to synchronize publishing as an application template</p>
                     * 
                     */
                    bool GetIsPublishAsTemplate() const;

                    /**
                     * 设置<p>Whether to synchronize publishing as an application template</p>
                     * @param _isPublishAsTemplate <p>Whether to synchronize publishing as an application template</p>
                     * 
                     */
                    void SetIsPublishAsTemplate(const bool& _isPublishAsTemplate);

                    /**
                     * 判断参数 IsPublishAsTemplate 是否已赋值
                     * @return IsPublishAsTemplate 是否已赋值
                     * 
                     */
                    bool IsPublishAsTemplateHasBeenSet() const;

                    /**
                     * 获取<p>portal configuration</p>
                     * @return PortalShareConfig <p>portal configuration</p>
                     * 
                     */
                    PortalShareConfig GetPortalShareConfig() const;

                    /**
                     * 设置<p>portal configuration</p>
                     * @param _portalShareConfig <p>portal configuration</p>
                     * 
                     */
                    void SetPortalShareConfig(const PortalShareConfig& _portalShareConfig);

                    /**
                     * 判断参数 PortalShareConfig 是否已赋值
                     * @return PortalShareConfig 是否已赋值
                     * 
                     */
                    bool PortalShareConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>App sharing access control configuration</p>
                     */
                    AppShareAccessControl m_appShareAccessControl;
                    bool m_appShareAccessControlHasBeenSet;

                    /**
                     * <p>Channel ID list</p>
                     */
                    std::vector<std::string> m_channelIdList;
                    bool m_channelIdListHasBeenSet;

                    /**
                     * <p>Business shared configuration</p>
                     */
                    CorpShareConfig m_corpShareConfig;
                    bool m_corpShareConfigHasBeenSet;

                    /**
                     * <p>Release description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Batch change the debug-only knowledge in the default knowledge base to "effective in both debug and release"</p>
                     */
                    bool m_isDevToRelease;
                    bool m_isDevToReleaseHasBeenSet;

                    /**
                     * <p>Whether to synchronize publishing as an application template</p>
                     */
                    bool m_isPublishAsTemplate;
                    bool m_isPublishAsTemplateHasBeenSet;

                    /**
                     * <p>portal configuration</p>
                     */
                    PortalShareConfig m_portalShareConfig;
                    bool m_portalShareConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATERELEASEREQUEST_H_
