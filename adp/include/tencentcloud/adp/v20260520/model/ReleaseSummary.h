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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RELEASESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RELEASESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Publish digest information
                */
                class ReleaseSummary : public AbstractModel
                {
                public:
                    ReleaseSummary();
                    ~ReleaseSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Creation time (Unix timestamp, in seconds)</p>
                     * @return CreateTime <p>Creation time (Unix timestamp, in seconds)</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time (Unix timestamp, in seconds)</p>
                     * @param _createTime <p>Creation time (Unix timestamp, in seconds)</p>
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
                     * 获取<p>Release ID</p>
                     * @return ReleaseId <p>Release ID</p>
                     * 
                     */
                    std::string GetReleaseId() const;

                    /**
                     * 设置<p>Release ID</p>
                     * @param _releaseId <p>Release ID</p>
                     * 
                     */
                    void SetReleaseId(const std::string& _releaseId);

                    /**
                     * 判断参数 ReleaseId 是否已赋值
                     * @return ReleaseId 是否已赋值
                     * 
                     */
                    bool ReleaseIdHasBeenSet() const;

                    /**
                     * 获取<p>Released status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Callback processing for successful release, 9: Release suspension, 10: Appeal under review, 11: Appeal passed, 12: Appeal not approved</p>
                     * @return Status <p>Released status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Callback processing for successful release, 9: Release suspension, 10: Appeal under review, 11: Appeal passed, 12: Appeal not approved</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Released status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Callback processing for successful release, 9: Release suspension, 10: Appeal under review, 11: Appeal passed, 12: Appeal not approved</p>
                     * @param _status <p>Released status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Callback processing for successful release, 9: Release suspension, 10: Appeal under review, 11: Appeal passed, 12: Appeal not approved</p>
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
                     * 获取<p>Status description.</p>
                     * @return StatusDescription <p>Status description.</p>
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置<p>Status description.</p>
                     * @param _statusDescription <p>Status description.</p>
                     * 
                     */
                    void SetStatusDescription(const std::string& _statusDescription);

                    /**
                     * 判断参数 StatusDescription 是否已赋值
                     * @return StatusDescription 是否已赋值
                     * 
                     */
                    bool StatusDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Application sharing access control</p>
                     * @return AppShareAccessControl <p>Application sharing access control</p>
                     * 
                     */
                    AppShareAccessControl GetAppShareAccessControl() const;

                    /**
                     * 设置<p>Application sharing access control</p>
                     * @param _appShareAccessControl <p>Application sharing access control</p>
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
                     * 获取<p>Release channel ID list</p>
                     * @return ChannelIdList <p>Release channel ID list</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIdList() const;

                    /**
                     * 设置<p>Release channel ID list</p>
                     * @param _channelIdList <p>Release channel ID list</p>
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
                     * <p>Creation time (Unix timestamp, in seconds)</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Release description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Release ID</p>
                     */
                    std::string m_releaseId;
                    bool m_releaseIdHasBeenSet;

                    /**
                     * <p>Released status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Callback processing for successful release, 9: Release suspension, 10: Appeal under review, 11: Appeal passed, 12: Appeal not approved</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status description.</p>
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                    /**
                     * <p>Application sharing access control</p>
                     */
                    AppShareAccessControl m_appShareAccessControl;
                    bool m_appShareAccessControlHasBeenSet;

                    /**
                     * <p>Release channel ID list</p>
                     */
                    std::vector<std::string> m_channelIdList;
                    bool m_channelIdListHasBeenSet;

                    /**
                     * <p>Business shared configuration</p>
                     */
                    CorpShareConfig m_corpShareConfig;
                    bool m_corpShareConfigHasBeenSet;

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

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RELEASESUMMARY_H_
